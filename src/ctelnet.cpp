/***************************************************************************
 *   copyright (C) 2002-2005 by Tomas Mecir (kmuddy@kmuddy.com)            *
 *   copyright (C) 2008-2011 by Heiko Koehn (KoehnHeiko@googlemail.com     *
 *                                                                         *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "ctelnet.h"
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <sys/types.h>
#include <time.h>
//#include <unistd.h>
#include <QDebug>
#include <QDir>
#include <QHostAddress>
#include <QStringBuilder>
#include <QTcpSocket>
#include <QTextCodec>
#include "TDebug.h"
#include "TMap.h"
#include "dlgComposer.h"
#include "dlgMapper.h"
#include "mudlet.h"

#if defined( DEBUG_TELNET )
// This one may be too noisy to be useful, in which case don't define it!
#define DEBUG_TELNET_EXCESSIVELY
#endif


using namespace std;


cTelnet::cTelnet( Host * pH )
: mResponseProcessed( true )
, mAlertOnNewData( true )
, mGA_Driver( false )
, mFORCE_GA_OFF( false )
, mpComposer( 0 )
, mpHost(pH)
, mpPostingTimer( new QTimer( this ) )
, mUSE_IRE_DRIVER_BUGFIX( false )
, mLF_ON_GA( false )
, mCommands( 0 )
, mEnableMCCP( false )
// N/U:, enableATCP( false )
// N/U:, enableGMCP( false )
// N/U:, enableChannel102( false )
, termTypesIndex( 0 )   // To be set to the count value of termTypes when Server initiates subnegotiation of TTYPE
{
    mIsTimerPosting = false;
    mNeedDecompression = false;
// N/U:    mWaitingForCompressedStreamToStart = false;
    // initialize default encoding
    encoding = "UTF-8";
    encodingChanged(encoding);
//     Build the list up with increasingly specific entries

////////////////////////////////////// MTTS ////////////////////////////////////
//     If we decide to support Scandum's MTTS (Mud Terminal Type Specification)
//     http://tintin.sourceforge.net/mtts/ the last (first) entry here would be
//     "MTTS <number>" where <number is a sequence of ASCII digits carrying the
//     sum of (here copied from the above reference):
//
//   1 "ANSI" Client supports all ANSI Color Escape codes. Supporting blink and
//     underline is optional. (Mudlet: Yes, for some values of "all"!)
//   2 "VT100" Client supports most VT100 codes. (Mudlet: No, has anyone else seen
//     the VT100 manual, a 25MB PDF file including a lot of electrical specs!)
//   4 "UTF-8" Client is using UTF-8 character encoding. (Mudlet: No, we want to
//     but work still needs doing.)
//   8 "256 Colors" Client supports all xterm 256 color codes. (Mudlet: Yes.)
//  16 "Mouse Tracking" Client supports xterm mouse tracking. (Mudlet: No, but I
//     could be wrong.)
//  32 "OSC Color Palette" Client supports the OSC color palette. TODO: (Mudlet:
//     No, this permits the SERVER to redefine any of the 16 "ANSI" colors (#)
//     to another (any 24-Bit, 8 bits per component} color value with an ASCII
//     the sequence: <OSC>P#rrggbb.  We allow the user to do this but not,
//     currently, the server.  <OSC> is the sequence "<ESC>]" c.f. <CSI> being
//     "<ESC>[".  Also note that this does not have a terminating character that
//     defines the command purpose, which breaks ANSI escape sequence rules,
//     however since it is of fixed length it should still be fairly easy to
//     parse in byte streams and doable in Mudlet.)
//  64 "Screen Reader" Client is using a screen reader. (Mudlet: No, though Heiko
//     has done some work on this in an alpha version.)
// 128 "Proxy" Client is a proxy allowing different users to connect from the
//     same IP address. (Mudlet: Possibly YES depending on the meaning of "users",
//     I suggest saying No for the moment but I am seeking clarification from the
//     author of this protocol.)
//
//     This gives Mudlet, currently, the value of: 1 + 8
//
//     However there are a couple of other issues:
//     * The MTTS puts a space between the MTTS and the number, this is counter to
//       RFC1091.
//     * MTTS seems to expect only the client NAME not including any version
//       information as the FIRST entry in the list then a generic terminal
//       emulation and then the MTTS entry as the last value to be returned (twice)
//     Both of these break the RFC1091 Telnet TTYPE sub-option specification,
//     I choose to fix the first by using a valid, as per RFC1091, separator of
//     '-' instead and the second by just making sure that the MTTS entry is the
//     last (repeated as the LAST different response on two sub option request)
//     responses to server (Slysven, 06/2014).

    termTypes.append( QStringLiteral( "MTTS-9" ) );

//    termTypes.append( QStringLiteral( "ANSI" ) );
    // Not sure we DO meet this so don't uncomment until sure!

    termTypes.append( QStringLiteral( "MUDLET" ) );
//     RFC 1091 specifies the use of ONLY A-Z, 0-9, '/' and '-',  NO SPACES -
//     which is where I messed up previously, and MAXIMUM of 40 Characters
//     beginning with a letter and ending in a letter or a number

    termTypes.append( QStringLiteral( "MUDLET-" )
                      .append( QByteArray( APP_VERSION ).trimmed() )
                      .toUpper()
                      .replace( QRegExp( QStringLiteral( "[^A-Z0-9/-]" ) ), QStringLiteral("-") )
                      .left( 40 ) );

    if( QByteArray( APP_BUILD ).trimmed().length() )
        termTypes.append( QStringLiteral( "MUDLET-" )
                          .append( QByteArray( APP_VERSION ).trimmed() )
                          .append( QStringLiteral( "-" ) )
                          .append( QByteArray( APP_BUILD ).trimmed() )
                          .replace( QRegExp( QStringLiteral( "--" ) ), QStringLiteral("-") )
                          // Ensure one but only one hyphen between version and build data
                          .toUpper()
                          .replace( QRegExp( QStringLiteral( "[^A-Z0-9/-]" ) ), QStringLiteral("-") )
                          // Replace any invalid characters (in particularly) the build string
                          .left( 40 ) );

    iac = iac2 = insb = false;

    command = "";
// N/U:    curX = 80;
// N/U:    curY = 25;

    // initialize the socket
    connect(&socket, SIGNAL(connected()), this, SLOT(handle_socket_signal_connected()));
    connect(&socket, SIGNAL(disconnected()), this, SLOT(handle_socket_signal_disconnected()));
    //connect(&socket, SIGNAL(error()), this, SLOT (handle_socket_signal_error()));
    connect(&socket, SIGNAL(readyRead()), this, SLOT (handle_socket_signal_readyRead()));
    //connect(&socket, SIGNAL(hostFound()), this, SLOT (handle_socket_signal_hostFound()));

    // initialize telnet session
    reset();

    mpPostingTimer->setInterval( 300 );//FIXME
    connect(mpPostingTimer, SIGNAL(timeout()), this, SLOT(slot_timerPosting()));

    mTimerLogin = new QTimer( this );
    mTimerLogin->setSingleShot(true);
    connect(mTimerLogin, SIGNAL(timeout()), this, SLOT(slot_send_login()));

    mTimerPass = new QTimer( this );
    mTimerPass->setSingleShot( true );
    connect(mTimerPass, SIGNAL(timeout()), this, SLOT(slot_send_pass()));

    mpDownloader = new QNetworkAccessManager( this );
    connect(mpDownloader, SIGNAL(finished(QNetworkReply*)),this, SLOT(replyFinished(QNetworkReply*)));
}

void cTelnet::reset ()
{
    //prepare option variables
    for (int i = 0; i < 256; i++)
    {
        myOptionState[i] = false;
        hisOptionState[i] = false;
        announcedState[i] = false;
        heAnnouncedState[i] = false;
        triedToEnable[i] = false;
    }
    iac = iac2 = insb = false;
    command = "";
    mMudData = "";

}


cTelnet::~cTelnet()
{
    if(messageStack.size())
    {
        qWarning("cTelnet::~cTelnet() Instance being destroyed before it could display some messages,\nmessages are:\n------------");
        foreach(QString message, messageStack)
        {
            qWarning("%s\n------------", qPrintable( message ) );
        }
    }
    disconnect();
    socket.deleteLater();
}


void cTelnet::encodingChanged(QString encoding)
{
#if defined( DEBUG_TELNET )
    qDebug() << "TELNET: encodingChanged() called!";
#endif
    encoding = encoding;

    // unicode carries information in form of single byte characters
    // and multiple byte character sequences.
    // the encoder and the decoder maintain translation state, i.e. they need to know the preceding
    // chars to make the correct decisions when translating into unicode and vice versa

    incomingDataCodec = QTextCodec::codecForName(encoding.toLatin1().data());
    incomingDataDecoder = incomingDataCodec->makeDecoder();

    outgoingDataCodec = QTextCodec::codecForName(encoding.toLatin1().data());
    outgoingDataDecoder = outgoingDataCodec->makeEncoder();
}


void cTelnet::connectIt(const QString &address, int port)
{
    // wird an dieser Stelle gesetzt
    if( mpHost )
    {
        mUSE_IRE_DRIVER_BUGFIX = mpHost->mUSE_IRE_DRIVER_BUGFIX;
        mLF_ON_GA = mpHost->mLF_ON_GA;
        mFORCE_GA_OFF = mpHost->mFORCE_GA_OFF;
    }

    if( socket.state() != QAbstractSocket::UnconnectedState )
    {
        socket.abort();
        connectIt( address, port );
        return;
    }

    hostName = address;
    hostPort = port;
    // QChar(0x2714));//'?'
    // QChar(0x2718));//'?'
    // QChar(0x24d8));//info i im kreis
    QString server = tr( "[ INFO ]  - Looking for the IP address of server: %1...\n" )
                     .arg( address );
    postMessage( server );
    QHostInfo::lookupHost(address, this, SLOT(handle_socket_signal_hostFound(QHostInfo)));
}


void cTelnet::disconnect ()
{
    socket.disconnectFromHost();
    TEvent me;
    me.mArgumentList.append( QStringLiteral( "sysDisconnectionEvent" ) );
    me.mArgumentTypeList.append( ARGUMENT_TYPE_STRING );
    mpHost->raiseEvent( &me );

}

void cTelnet::handle_socket_signal_error()
{
    QString err = tr( "[ ERROR ] - TCP/IP socket ERROR: %1" )
                  .arg( socket.errorString() );
    postMessage( err );
}

void cTelnet::slot_send_login()
{
    sendData( mpHost->getLogin() );
}

void cTelnet::slot_send_pass()
{
    sendData( mpHost->getPass() );
}

void cTelnet::handle_socket_signal_connected()
{
    reset();
    QString msg = tr( "[ INFO ]  - A connection has been established successfully.\n"
                      "    \n"
                      "    " );
    postMessage( msg );
    QString func = QStringLiteral( "onConnect" );
    QString nothing = "";
    mpHost->mLuaInterpreter.call(func, nothing );
    mConnectionTime.start();
    if( (mpHost->getLogin().size()>0) && (mpHost->getPass().size()>0))
        mTimerLogin->start(2000);
    if( (mpHost->getPass().size()>0)  && (mpHost->getPass().size()>0))
        mTimerPass->start(3000);
    //sendTelnetOption(252,3);// try to force GA by telling the server that we are NOT willing to supress GA signals
    TEvent me;
    me.mArgumentList.append( QStringLiteral( "sysConnectionEvent" ) );
    me.mArgumentTypeList.append( ARGUMENT_TYPE_STRING );
    mpHost->raiseEvent( &me );

}

void cTelnet::handle_socket_signal_disconnected()
{
    postData();
    TEvent me;
    me.mArgumentList.append( QStringLiteral( "sysDisconnectionEvent" ) );
    me.mArgumentTypeList.append( ARGUMENT_TYPE_STRING );
    mpHost->raiseEvent( &me );
    QString msg;
    QTime timeDiff( 0, 0, 0, 0 );
    msg = tr( "[ INFO ]  - Connection time: %1\n    ")
          .arg(timeDiff.addMSecs( mConnectionTime.elapsed() )
               .toString( QStringLiteral( "hh:mm:ss.zzz" ) ) );
    mNeedDecompression = false;
    reset();
    QString err =    tr( "[ ALERT ] - Socket got disconnected.\nReason: %1" )
                     .arg( socket.errorString() );
    QString spacer = "    ";
    if( ! mpHost->mIsGoingDown )
    {
        postMessage( spacer );
        postMessage( err );
        postMessage( msg );
    }
}

void cTelnet::handle_socket_signal_hostFound(QHostInfo hostInfo)
{
    if(!hostInfo.addresses().isEmpty())
    {
        mHostAddress = hostInfo.addresses().first();
        QString msg = tr( "[ INFO ]  - The IP connection details of %1 have been found.\nThey are: %2:%3 .\nTrying to connect...\n" )
                      .arg( hostName )
                      .arg( mHostAddress.toString() )
                      .arg( QString::number( hostPort ) );
        postMessage( msg );
        socket.connectToHost(mHostAddress, hostPort);
    }
    else
    {
        socket.connectToHost(hostInfo.hostName(), hostPort);
        QString msg = tr( "[ ERROR ] - Host name lookup Failure!\n"
                          "Connection cannot be established.\n"
                          "The server name is not correct, not working properly,\n"
                          "or your nameservers are not working properly." );
        postMessage( msg );
        return;
    }
}

bool cTelnet::sendData( QString & data )
{
    while( data.indexOf("\n") != -1 )
    {
        data.replace(QChar('\n'),"");
    }
    TEvent * pE = new TEvent;
    pE->mArgumentList.append( QStringLiteral( "sysDataSendRequest" ) );
    pE->mArgumentTypeList.append( ARGUMENT_TYPE_STRING );
    pE->mArgumentList.append( data );
    pE->mArgumentTypeList.append( ARGUMENT_TYPE_STRING );
    mpHost->raiseEvent( pE );
    if( mpHost->mAllowToSendCommand )
    {
        string outdata = (outgoingDataCodec->fromUnicode(data)).data();
        if( ! mpHost->mUSE_UNIX_EOL )
            outdata.append( "\r\n" );
        else
            outdata.append( "\n" );
        return socketOutRaw( outdata );
    }
    else
    {
        mpHost->mAllowToSendCommand = true;
        return false;
    }
}


bool cTelnet::socketOutRaw(string & data)
{
    if( ! socket.isWritable() )
    {
#if defined( DEBUG_TELNET )
    qDebug() << "TELENT: MUDLET SOCKET ERROR: Socket not connected, but wants to send data = "<<data.c_str();
#endif
        return false;
    }
    int dataLength = data.length();
    int remlen = dataLength;

    /*cout << "SOCKET OUT RAW: [ ";
    for(unsigned int i=0;i<data.size();i++)
    {
        unsigned char c = data[i];
        int ci = 0;
        ci = (int)c;
        cout << "<" << ci << "> ";
    }
    cout << " ]" << endl;*/

    do
    {
        int written = socket.write(data.data(), remlen);

        if (written == -1)
        {
            return false;
        }
        remlen -= written;
        dataLength += written;
    }
    while(remlen > 0);

    if( mGA_Driver )
    {
        mCommands++;
        if( mCommands == 1 )
        {
            mWaitingForResponse = true;
            networkLatencyTime.restart();
        }
    }

    return true;
}



void cTelnet::setDisplayDimensions()
{
    int x = mpHost->mWrapAt;
    int y = mpHost->mScreenHeight;
    if(myOptionState[static_cast<int>(OPT_NAWS)])
    {
#if defined( DEBUG_TELNET )
        qDebug() << "TELNET: sending NAWS:"<<x<<"x"<<y;
#endif
        string s;
        s = TN_IAC;
        s += TN_SB;
        s += OPT_NAWS;
        char x1, x2, y1, y2;
        x1 = x / 256;
        x2 = x % 256;
        y1 = y / 256;
        y2 = y % 256;
        //IAC must be doubled
        s += x1;
        if(x1 == TN_IAC)
        s += TN_IAC;
        s += x2;
        if (x2 == TN_IAC)
        s += TN_IAC;
        s += y1;
        if (y1 == TN_IAC)
        s += TN_IAC;
        s += y2;
        if (y2 == TN_IAC)
        s += TN_IAC;

        s += TN_IAC;
        s += TN_SE;
        socketOutRaw(s);
    }
}

void cTelnet::sendTelnetOption( char type, char option )
{
#if defined( DEBUG_TELNET )
    QString _type;
    switch ((quint8)type)
    {
        case 239: _type = "EOR"; break;
        case 240: _type = "SE"; break;
        case 241: _type = "NOP"; break;
        case 242: _type = "DM"; break;
        case 243: _type = "BRK"; break;
        case 244: _type = "IP"; break;
        case 245: _type = "AO"; break;
        case 246: _type = "AYT"; break;
        case 247: _type = "EC"; break;
        case 248: _type = "EL"; break;
        case 249: _type = "GA"; break;
        case 250: _type = "SB"; break;
        case 251: _type = "WILL"; break;
        case 252: _type = "WONT"; break;
        case 253: _type = "DO"; break;
        case 254: _type = "DONT"; break;
        case 255: _type = "IAC"; break;
        default: _type = QString::number((quint8)type);
    };

    qDebug() << QString( "TELNET: CLIENT sending Telnet: <IAC><%1><%2>" )
                .arg( _type )
                .arg( telnetOption( option ) ).toLocal8Bit().data();
#endif
    string cmd;
    cmd += TN_IAC;
    cmd += type;
    cmd += option;
    socketOutRaw(cmd);
}


void cTelnet::replyFinished( QNetworkReply * reply )
{
    mpProgressDialog->close();


    QFile file( mServerPackage );
    file.open( QFile::WriteOnly );
    file.write( reply->readAll() );
    file.flush();
    file.close();
    mpHost->installPackage( mServerPackage, 0);
    QString packageName = mServerPackage.section("/",-1 );
    packageName.replace( ".zip" , "" );
    packageName.replace( "trigger", "" );
    packageName.replace( "xml", "" );
    packageName.replace( ".mpackage" , "" );
    packageName.replace( '/' , "" );
    packageName.replace( '\\' , "" );
    packageName.replace( '.' , "" );
    mpHost->mServerGUI_Package_name = packageName;
}

void cTelnet::setDownloadProgress( qint64 got, qint64 tot )
{
    mpProgressDialog->setRange(0, static_cast<int>(tot) );
    mpProgressDialog->setValue(static_cast<int>(got));
}

void cTelnet::processTelnetCommand( const string & command )
{
    char ch = command[1];
#if defined( DEBUG_TELNET )
    QString _type;
    switch ((quint8)ch)
    {
        case 239: _type = "EOR"; break;
        case 240: _type = "SE"; break;
        case 241: _type = "NOP"; break;
        case 242: _type = "DM"; break;
        case 243: _type = "BRK"; break;
        case 244: _type = "IP"; break;
        case 245: _type = "AO"; break;
        case 246: _type = "AYT"; break;
        case 247: _type = "EC"; break;
        case 248: _type = "EL"; break;
        case 249: _type = "GA"; break;
        case 250: _type = "SB"; break;
        case 251: _type = "WILL"; break;
        case 252: _type = "WONT"; break;
        case 253: _type = "DO"; break;
        case 254: _type = "DONT"; break;
        case 255: _type = "IAC"; break;
        default: _type = QString::number((quint8)ch);
    };
    if( command.size() > 1 )
    {
        qDebug() << QString( "TELNET: SERVER sent telnet signal:<IAC><%1><%2>" )
                    .arg( _type )
                    .arg( telnetOption( command[2] ) ).toLocal8Bit().data();
    }
    else
    {
        qDebug() << QString( "TELNET: SERVER sent telnet signal:<IAC><%1>" )
                    .arg( _type ).toLocal8Bit().data();
    }
#endif

  char option;
  switch( ch )
  {
      case TN_GA:
      case TN_EOR:
      {
          #ifdef DEBUG_TELNET
            qDebug() << QStringLiteral( "TELNET: processTelnetCommand() command = (%1)" )
                        .arg( (ch == TN_GA) ? QStringLiteral( "TN_GA" ) : QStringLiteral( "TN_EOR" ) )
                        .toLocal8Bit().data();
          #endif
          recvdGA = true;
          break;
      }

      case TN_WILL:
      {
#if defined( DEBUG_TELNET )
          qDebug() << "TELNET: processTelnetCommand() command = TN_WILL";
#endif
          //server wants to enable some option (or he sends a timing-mark)...
          option = command[2];
          int idxOption = static_cast<int>(option);

          if( option == static_cast<char>(25) ) //EOR support (END OF RECORD=TN_GA
          {
#if defined( DEBUG_TELNET )
              qDebug() << "TELNET: EOR requested...";
#endif
              sendTelnetOption( TN_DO, 25 );
              break;
          }

          if( option == static_cast<char>(69) ) //MSDP support
          {
#if defined( DEBUG_TELNET )
              qDebug() << "TELNET: MSDP requested, entering sub-option negotiation...";
#endif
              sendTelnetOption( TN_DO, 69 );
              //need to send MSDP start sequence: IAC   SB MSDP MSDP_VAR "LIST" MSDP_VAL "COMMANDS" IAC SE
              //NOTE: MSDP does not need quotes for string/vals
              string _h;
              _h += TN_IAC;
              _h += TN_SB;
              _h += 69; //MSDP
              _h += 1; //MSDP_VAR
              _h += "LIST";
              _h += 2; //MSDP_VAL
              _h += "COMMANDS";
              _h += TN_IAC;
              _h += TN_SE;
              socketOutRaw( _h );
              break;
          }

          if( option == static_cast<char>(200) ) // ATCP support
          {
              //FIXME: this is a bug, some muds offer both atcp + gmcp
              if( mpHost->mEnableGMCP )
                  break;

#if defined( DEBUG_TELNET )
              qDebug() << "TELNET: ATCP requested, entering sub-option negotiation...";
#endif
// N/U:             enableATCP = true;
              sendTelnetOption( TN_DO, 200 );

              string _h;
              _h += TN_IAC;
              _h += TN_SB;
              _h += 200;
              _h += string("hello Mudlet ") + APP_VERSION + APP_BUILD + string("\ncomposer 1\nchar_vitals 1\nroom_brief 1\nroom_exits 1\nmap_display 1\n");
              _h += TN_IAC;
              _h += TN_SE;
              socketOutRaw( _h );
              break;
          }

          if( option == OPT_GMCP )
          {
              //if( !mpHost->mEnableGMCP ) break;

// N/U:              enableGMCP = true;
              sendTelnetOption( TN_DO, OPT_GMCP );
#if defined( DEBUG_TELNET )
              qDebug() << "TELNET: GMCP requested, entering sub-option negotiation...";
#endif

              string _h;
              _h = TN_IAC;
              _h += TN_SB;
              _h += OPT_GMCP;
              _h += string("Core.Hello { \"client\": \"Mudlet\", \"version\": \"") + APP_VERSION + APP_BUILD + string("\" }");
              _h += TN_IAC;
              _h += TN_SE;

              socketOutRaw( _h );

              _h = TN_IAC;
              _h += TN_SB;
              _h += OPT_GMCP;
              _h += "Core.Supports.Set [ \"Char 1\", \"Char.Skills 1\", \"Char.Items 1\", \"Room 1\", \"IRE.Rift 1\", \"IRE.Composer 1\"]";
              _h += TN_IAC;
              _h += TN_SE;

              socketOutRaw( _h );
              break;
          }

          if( option == OPT_MXP )
          {
              if( ! mpHost->mFORCE_MXP_NEGOTIATION_OFF )
              {
                sendTelnetOption( TN_DO, 91 );
#if defined( DEBUG_TELNET )
                qDebug() << "TELNET: MXP requested, entering sub-option negotiation...";
#endif
                  //mpHost->mpConsole->print("\n<MXP enabled>\n");
                  break;
              }
#if defined( DEBUG_TELNET )
              else
                  qDebug() << "TELNET: MXP requested, but forced OFF in profile preferences!";
#endif
              break;
          }

          //option = command[2];
          if( option == static_cast<char>(102) ) // Aardwulf channel 102 support
          {
#if defined( DEBUG_TELNET )
              qDebug() << "TELNET: Aardwulf channel 102 requested...";
#endif
// N/U:             enableChannel102 = true;
              sendTelnetOption( TN_DO, 102 );
              break;
          }

          heAnnouncedState[idxOption] = true;
          if( triedToEnable[idxOption] )
          {
              hisOptionState[idxOption] = true;
              triedToEnable[idxOption] = false;
          }
          else
          {
              if( !hisOptionState[idxOption] )
              {
                   //only if this is not set; if it's set, something's wrong wth the server
                   //(according to telnet specification, option announcement may not be
                   //unless explicitly requested)

                   if( //( option == OPT_SUPPRESS_GA ) ||
                       ( option == OPT_STATUS ) ||
                       ( option == OPT_ECHO ) ||
                       ( option == OPT_NAWS ) )
                   {
                       sendTelnetOption( TN_DO, option );
                       hisOptionState[idxOption] = true;
                   }
                   else if( option == OPT_TERMINAL_TYPE)
                   {
                       // In this case must set index to point to (one past) the
                       // highest index in last
                       termTypesIndex = termTypes.count();
                       sendTelnetOption( TN_DO, option );
                       hisOptionState[idxOption] = true;
                   }
                   else if( ( option == OPT_COMPRESS ) || ( option == OPT_COMPRESS2 ) )
                   {
                       //these are handled separately, as they're a bit special
                       if( mpHost->mFORCE_NO_COMPRESSION || ( ( option == OPT_COMPRESS ) && ( hisOptionState[static_cast<int>(OPT_COMPRESS2)] ) ) )
                       {
                           //protocol says: reject MCCP v1 if you have previously accepted
                           //MCCP v2...
                           sendTelnetOption( TN_DONT, option );
                           hisOptionState[idxOption] = false;
#if defined( DEBUG_TELNET )
                           qDebug() << "TELNET: Rejecting MCCP v1, because v2 has already been negotiated.";
#endif
                       }
                       else
                       {
                           sendTelnetOption( TN_DO, option );
                           hisOptionState[idxOption] = true;
                           //inform MCCP object about the change
                           if( ( option == OPT_COMPRESS ) )
                           {
#if defined( DEBUG_TELNET )
                              qDebug() << "TELNET: MCCP v1 negotiated.";
#endif
                           }
                           else
                           {
                               //MCCP->setMCCP2( true );
#if defined( DEBUG_TELNET )
                               qDebug() << "TELNET: MCCP v2 negotiated.";
#endif
                           }
                           mEnableMCCP = true;
                       }
                   }
                   else if( supportedTelnetOptions.contains( option ) )
                   {
                       sendTelnetOption( TN_DO, option );
                       hisOptionState[idxOption] = true;
                   }
                   else
                   {
                       sendTelnetOption( TN_DONT, option );
                       hisOptionState[idxOption] = false;
                   }
               }
          }


          break;
      }

      case TN_WONT:
      {
          //server refuses to enable some option...
#if defined( DEBUG_TELNET )
                qDebug() << "TELNET: processTelnetCommand() TN_WONT command=" << (quint8)command[2];
#endif
          option = command[2];
          int idxOption = static_cast<int>(option);
          if( triedToEnable[idxOption] )
          {
              hisOptionState[idxOption] = false;
              triedToEnable[idxOption] = false;
              heAnnouncedState[idxOption] = true;
          }
          else
          {
#if defined( DEBUG_TELNET )
                  qDebug() << "TELNET: We don't accept his option because we didn't want it to be enabled";
#endif
              //send DONT if needed (see RFC 854 for details)
              if( hisOptionState[idxOption] || ( heAnnouncedState[idxOption] ) )
              {
                  sendTelnetOption( TN_DONT, option );
                  hisOptionState[idxOption] = false;

                  if( ( option == OPT_COMPRESS ) || ( option == OPT_COMPRESS2 )  )
                  {
                      mEnableMCCP = false;
#if defined( DEBUG_TELNET )
                      if ( option == OPT_COMPRESS2 )
                          qDebug() << "TELNET: MCCP v2 disabled !";
                      else
                          qDebug() << "TELNET: MCCP v1 disabled !";
#endif
                  }
              }
              heAnnouncedState[idxOption] = true;
          }
          break;
      }

      case TN_DO:
      {
#if defined( DEBUG_TELNET )
        qDebug() << "TELNET: processTelnetCommand() TN_DO command="<<(quint8)command[2];
#endif
          //server wants us to enable some option
          option = command[2];
          int idxOption = static_cast<int>(option);
          if( option == OPT_MSDP ) // MSDP support
          {
#if defined( DEBUG_TELNET )
            qDebug() << "TELNET <IAC><DO><MSDP>";
#endif
            sendTelnetOption( TN_WILL, 69 );

            heAnnouncedState[ 69 ] = true;
            break;
          }
          if( option == OPT_ATCP ) // ATCP support
          {
#if defined( DEBUG_TELNET )
            qDebug() << "TELNET <IAC><DO><ATCP>";
#endif
// N/U:              enableATCP = true;
            sendTelnetOption( TN_WILL, 200 );

            heAnnouncedState[ 200 ] = true;
            break;
          }
          if( option == OPT_GMCP ) // GMCP support
          {
#if defined( DEBUG_TELNET )
            qDebug() << "TELNET <IAC><DO><GMCP>";
#endif
// N/U:              enableATCP = true; // FIXME: Shouldn't this be enableGMCP
            sendTelnetOption( TN_WILL, 201 );

            heAnnouncedState[ 201 ] = true;
            break;
          }
          if( option == OPT_MXP ) // MXP support
          {
            sendTelnetOption( TN_WILL, 91 );
            mpHost->mpConsole->print("\n<MXP support enabled>\n");

            heAnnouncedState[ 91 ] = true;
            break;
          }
          if( option == OPT_102 ) // channel 102 support
          {
#if defined( DEBUG_TELNET )
            qDebug() << "TELNET <IAC><DO><CHANNEL><102>";
#endif
// N/U:              enableChannel102 = true;

            sendTelnetOption( TN_WILL, 102 );
            heAnnouncedState[ 102 ] = true;
            break;
          }
#if defined( DEBUG_TELNET )
            qDebug() << "TELNET Server wants us to enable telnet option " << (quint8)option << "(TN_DO + "<< telnetOption( (quint8)option ) <<")...";
#endif
          if(option == OPT_TIMING_MARK)
          {
#if defined( DEBUG_TELNET )
              qDebug() << "... OK we are willing to enable telnet option TIMING_MARK";
#endif
              //send WILL TIMING_MARK
              sendTelnetOption( TN_WILL, option );
              heAnnouncedState[ 24 ] = true;
          }
          else if (!myOptionState[idxOption]) // Was hard coded at 255 which must be wrong!
          //only if the option is currently disabled
          {
              if( //( option == OPT_SUPPRESS_GA ) ||
                  ( option == OPT_STATUS ) ||
                  ( option == OPT_NAWS ) ||
                  ( option == OPT_TERMINAL_TYPE ) )
              {
#if defined( DEBUG_TELNET )
//                  if( option == OPT_SUPPRESS_GA )
//                      qDebug() << "... OK we are willing to enable telnet option SUPPRESS_GA";
                  if( option == OPT_STATUS )
                      qDebug() << "... OK we are willing to enable telnet option STATUS";
                  if( option == OPT_TERMINAL_TYPE )
                      qDebug() << "... OK we are willing to enable telnet option TERMINAL_TYPE";
                  if( option == OPT_NAWS )
                      qDebug() << "... OK we are willing to enable telnet option NAWS";
#endif
                  sendTelnetOption( TN_WILL, option );
                  myOptionState[idxOption] = true;
                  announcedState[idxOption] = true;
              }
              else
              {
#if defined( DEBUG_TELNET )
                  qDebug()  << "... SORRY we are NOT WILLING to enable telnet option." << telnetOption( option );
#endif
                  sendTelnetOption (TN_WONT, option);
                  myOptionState[idxOption] = false;
                  announcedState[idxOption] = true;
              }
          }
          if( option == OPT_NAWS )
          {
              //NAWS
              setDisplayDimensions();
          }
          break;
      }

      case TN_DONT:
      {
          // Only respond if value changed or if this option has not been
          // announced yet - as default case for all is disabled
#if defined( DEBUG_TELNET )
          qDebug() << "TELNET: processTelnetCommand() TN_DONT command="<<(quint8)command[2];
#endif
          option = command[2];
          int idxOption = static_cast<int>(option);
          if( myOptionState[idxOption] || ( !announcedState[idxOption] ) )
          {
              sendTelnetOption (TN_WONT, option);
              announcedState[idxOption] = true;
          }
          myOptionState[idxOption] = false;
          break;
      }

      case TN_SB:
      {
          option = command[2];

          // MSDP
          if( option == OPT_MSDP )
          {
              QString _m = command.c_str();
              if( command.size() > 5 )
              {
                  _m = _m.mid( 3, command.size()-5 );
                  mpHost->mLuaInterpreter.msdp2Lua( _m.toLocal8Bit().data(), _m.length() );
              }
              return;
          }

          // ATCP
          if( option == OPT_ATCP )
          {
              QString _m = command.c_str();
              if( command.size() > 5 )
              {
                  _m = _m.mid( 3, command.size()-5 );
                  setATCPVariables( _m );

                  if( _m.startsWith("Auth.Request") )
                  {
                      string _h;
                      _h += TN_IAC;
                      _h += TN_SB;
                      _h += 200;
                      _h += string("hello Mudlet ") + APP_VERSION + APP_BUILD + string("\ncomposer 1\nchar_vitals 1\nroom_brief 1\nroom_exits 1\n");
                      _h += TN_IAC;
                      _h += TN_SE;
                      socketOutRaw( _h );
                  }
                  else if( _m.startsWith( "Client.GUI" ) )
                  {
                      if( ! mpHost->mAcceptServerGUI )
                      {
#if defined( DEBUG_TELNET )
                          qDebug() << "TELNET: ATCP sub-option \"Client.GUI\" negotiation was decline by profile preferences." ;
#endif
                          return;
                      }
                      else
#if defined( DEBUG_TELNET )
                            qDebug() << "TELNET: ATCP sub-option \"Client.GUI\" negotiation initiated..." ;
#endif

                        QString version = _m.section( '\n', 0 );
                        version.replace("Client.GUI ", "");
                        version.replace('\n', " ");
                        version = version.section(' ', 0, 0);

                        int newVersion = version.toInt();
                        //QString __mkp = QString("<old version:'%1' new version:'%2' name:'%3' msg:'%4'>\n").arg(mpHost->mServerGUI_Package_version).arg(newVersion).arg(mpHost->mServerGUI_Package_name).arg(version);
                        //mpHost->mpConsole->print(__mkp);
                        if( mpHost->mServerGUI_Package_version != newVersion )
                        {
                            QString _smsg = QString("<The server wants to upgrade the GUI to new version '%1'. Uninstalling old version '%2'>").arg(mpHost->mServerGUI_Package_version).arg(newVersion);
                            mpHost->mpConsole->print(_smsg.toLatin1().data());
                            mpHost->uninstallPackage( mpHost->mServerGUI_Package_name, 0);
                            mpHost->mServerGUI_Package_version = newVersion;
                        }
                        QString url = _m.section( '\n', 1 );
                        QString packageName = url.section('/',-1);
                        QString fileName = packageName;
                        packageName.replace( ".zip" , "" );
                        packageName.replace( "trigger", "" );
                        packageName.replace( "xml", "" );
                        packageName.replace( ".mpackage" , "" );
                        packageName.replace( '/' , "" );
                        packageName.replace( '\\' , "" );
                        packageName.replace( '.' , "" );
                        mpHost->mpConsole->print("<Server offers downloadable GUI (url='");
                        mpHost->mpConsole->print( url );
                        mpHost->mpConsole->print("') (package='");
                        mpHost->mpConsole->print(packageName);
                        mpHost->mpConsole->print("')>\n");
                        if( mpHost->mInstalledPackages.contains( packageName ) )
                        {
                            mpHost->mpConsole->print("<package is already installed>\n");
                            return;
                        }
                        QString _home = QDir::homePath();
                        _home.append( "/.config/mudlet/profiles/" );
                        _home.append( mpHost->getName() );
                        mServerPackage = QString( "%1/%2").arg( _home ).arg( fileName );

                        QNetworkReply * reply = mpDownloader->get( QNetworkRequest( QUrl( url ) ) );
                        mpProgressDialog = new QProgressDialog("downloading game GUI from server", "Abort", 0, 4000000, mpHost->mpConsole );
                        connect(reply, SIGNAL(downloadProgress( qint64, qint64 )), this, SLOT(setDownloadProgress(qint64,qint64)));
                        mpProgressDialog->show();
                    }
                    else
                    {
#if defined( DEBUG_TELNET )
                        qDebug() << "TELNET: Unhandled ATCP sub-option negotiation was attempted by server. It began with: " << _m.left(15);
#endif
                  }
              }

              return;
          }

          // GMCP
          if( option == OPT_GMCP )
          {
              QString _m = command.c_str();
              if( command.size() > 5 )
              {
                  _m = _m.mid( 3, command.size()-5 );
                  setGMCPVariables( _m );
              }
              return;
          }

          if( option == OPT_102 )
          {
              QString _m = command.c_str();
              if( command.size() > 5 )
              {
                  _m = _m.mid( 3, command.size()-5 );
                  setChannel102Variables( _m );
              }
              return;
          }

          switch( option ) //switch 2
          {
              case OPT_STATUS:
              {
                  //see OPT_TERMINAL_TYPE for explanation why I'm doing this
                  if( true )
                  {
#if defined( DEBUG_TELNET )
                      qDebug() << "TELNET: WARNING: FIXME #501" ;
#endif
                      if( command[3] == TNSB_SEND )
                      {
#if defined( DEBUG_TELNET )
                          qDebug() << "TELNET: WARNING: FIXME #504" ;
#endif
                          //request to send all enabled commands; if server sends his
                          //own list of commands, we just ignore it (well, he shouldn't
                          //send anything, as we do not request anything, but there are
                          //so many servers out there, that you can never be sure...)
                          string cmd;
                          cmd +=  TN_IAC;
                          cmd +=  TN_SB;
                          cmd +=  OPT_STATUS;
                          cmd +=  TNSB_IS;
                          for (short i = 0; i < 256; i++)
                          {
                              if (myOptionState[i])
                              {
                                  cmd +=  TN_WILL;
                                  cmd +=  i;
                              }
                              if (hisOptionState[i])
                              {
                                  cmd +=  TN_DO;
                                  cmd +=  i;
                              }
                          }
                          cmd +=  TN_IAC;
                          cmd +=  TN_SE;
                          socketOutRaw(cmd);
                      }
                  }
                  break;
              }

              case OPT_TERMINAL_TYPE:
              {
#if defined( DEBUG_TELNET )
                  qDebug() << "TELNET: Server sent <IAC><SB><TERMINAL-TYPE>.";
#endif
                  if( myOptionState[static_cast<int>(OPT_TERMINAL_TYPE)] )
                  {
                      if(command[3] == TNSB_SEND )
                      {
                           //server wants us to send terminal type; he can send his own type
                           //too, but we just ignore it, as we have no use for it...
                           // Actaully may not be true, specification says it is
                           // not symetrical
                           string cmd;
                           cmd +=  TN_IAC;
                           cmd +=  TN_SB;
                           cmd +=  OPT_TERMINAL_TYPE;
                           cmd +=  TNSB_IS;
                           if( termTypesIndex )
                           {
                               // Initial value (the count() of entries is 1
                               // higher than need to index directly into the
                               // QStringList, so decrement BEFORE it is used
                               cmd += termTypes.at( --termTypesIndex ).toLatin1().data();
#if defined( DEBUG_TELNET )
                               qDebug() << QString( "TELNET: Client sending <IAC><SB><TERMINAL-TYPE><SB_IS>%1<IAC><SE>." )
                                           .arg( termTypes.at( termTypesIndex ) ).toLocal8Bit().data();
#endif
                           }
                           else
                           {
                               // If at zero had reached the last value last time
                               // arounds o send it again to flag this then
                               // reset to top of list
                               cmd += termTypes[ termTypesIndex ].toLatin1().data();
#if defined( DEBUG_TELNET )
                               qDebug() << QString( "TELNET: Client sending duplicate (last) <IAC><SB><TERMINAL-TYPE><SB_IS>%1<IAC><SE>." )
                                           .arg( termTypes[ termTypesIndex ] ).toLocal8Bit().data();
#endif
                               termTypesIndex = termTypes.count();
                           }
                           cmd +=  TN_IAC;
                           cmd +=  TN_SE;
                           socketOutRaw( cmd );
                      }
                  }
                  break;
              }

              default:
                  //other cmds should not arrive, as they were not negotiated.
                  //if they do, they are merely ignored
                  // Now report this if debugging!
#if defined( DEBUG_TELNET )
                  qDebug() << QStringLiteral( "TELNET Unhandled sub-option negotiation for <%1>, we ignored it." )
                           .arg( telnetOption( option ) ).toLocal8Bit().data();
#endif
          };//end switch 2
          //other commands are simply ignored (NOP and such, see .h file for list)
      }

  };//end switch 1
  // raise sysTelnetEvent for all unhandled protocols
  // EXCEPT TN_GA (performance)
  if( command[1] != TN_GA )
  {
      unsigned char type = static_cast<unsigned char>(command[1]);
      unsigned char telnetOption = static_cast<unsigned char>(command[2]);
      QString msg = command.c_str();
      if( command.size() >= 6 )
          msg = msg.mid( 3, command.size()-5 );
      TEvent me;
      me.mArgumentList.append( "sysTelnetEvent" );
      me.mArgumentTypeList.append( ARGUMENT_TYPE_STRING );
      me.mArgumentList.append( QString::number(type) );
      me.mArgumentTypeList.append( ARGUMENT_TYPE_NUMBER );
      me.mArgumentList.append( QString::number(telnetOption) );
      me.mArgumentTypeList.append( ARGUMENT_TYPE_NUMBER );
      me.mArgumentList.append( msg );
      me.mArgumentTypeList.append( ARGUMENT_TYPE_STRING );
      mpHost->raiseEvent( &me );
  }
}

void cTelnet::setATCPVariables( QString & msg )
{
    QString var;
    QString arg;
    bool single = true;
    if( msg.indexOf( '\n' ) > -1 )
    {
        var = msg.section( "\n", 0, 0 );
        arg = msg.section( "\n", 1 );
        single = false;
    }
    else
    {
        var = msg.section( " ", 0, 0 );
        arg = msg.section( " ", 1 );
    }

    if( var.startsWith("Client.Compose") )
    {
        QString title;
        if( ! single )
            title = var.section( " ", 1 );
        else
        {
            title = arg;
            arg = "";
        }
        if( mpComposer )
        {
            return;
        }
        mpComposer = new dlgComposer( mpHost );
        //FIXME
        if( arg.startsWith(" ") )
        {
            arg.remove(0,1);
        }
        mpComposer->init( title, arg );
        mpComposer->raise();
        mpComposer->show();
        return;
    }
    var.remove( '.' );
    arg.remove( '\n' );
    int space = var.indexOf( ' ' );
    if( space > -1 )
    {
        arg.prepend(" ");
        arg = arg.prepend( var.section( " ", 1 ) );
        var = var.section( " ", 0, 0 );
    }
    mpHost->mLuaInterpreter.setAtcpTable( var, arg );
    if( var.startsWith("RoomNum") )
    {
        if( mpHost->mpMap )
        {
            mpHost->mpMap->mRoomId = arg.toInt();
            if( mpHost->mpMap->mpM && mpHost->mpMap->mpMapper && mpHost->mpMap->mpMapper->mp2dMap )
            {
                mpHost->mpMap->mpM->update();
                mpHost->mpMap->mpMapper->mp2dMap->update();
            }
        }
    }
}

void cTelnet::setGMCPVariables( QString & msg )
{
    QString var;
    QString arg;
// N/U:    bool single = true;
    if( msg.indexOf( '\n' ) > -1 )
    {
        var = msg.section( "\n", 0, 0 );
        arg = msg.section( "\n", 1 );
// N/U:        single = false;
    }
    else
    {
        var = msg.section( " ", 0, 0 );
        arg = msg.section( " ", 1 );
    }

    //printf("message: '%s', body: '%s'\n", var.toLatin1().data(), arg.toLatin1().data());
    if( msg.startsWith( "Client.GUI" ) )
    {
        if( ! mpHost->mAcceptServerGUI )
            return;

        QString version = msg.section( '\n', 0 );
        version.replace("Client.GUI ", "");
        version.replace('\n', " ");
        version = version.section(' ', 0, 0);

        int newVersion = version.toInt();
        //QString __mkp = QString("<old version:'%1' new version:'%2' name:'%3' msg:'%4'>\n").arg(mpHost->mServerGUI_Package_version).arg(newVersion).arg(mpHost->mServerGUI_Package_name).arg(version);
        //mpHost->mpConsole->print(__mkp);
        if( mpHost->mServerGUI_Package_version != newVersion )
        {
            QString _smsg = QString("<The server wants to upgrade the GUI to new version '%1'. Uninstalling old version '%2'>").arg(mpHost->mServerGUI_Package_version).arg(newVersion);
            mpHost->mpConsole->print(_smsg.toLatin1().data());
            mpHost->uninstallPackage( mpHost->mServerGUI_Package_name, 0);
            mpHost->mServerGUI_Package_version = newVersion;
        }
        QString url = msg.section( '\n', 1 );
        QString packageName = url.section('/',-1);
        QString fileName = packageName;
        packageName.replace( ".zip" , "" );
        packageName.replace( "trigger", "" );
        packageName.replace( "xml", "" );
        packageName.replace( ".mpackage" , "" );
        packageName.replace( '/' , "" );
        packageName.replace( '\\' , "" );
        packageName.replace( '.' , "" );
        mpHost->mpConsole->print("<Server offers downloadable GUI (url='");
        mpHost->mpConsole->print( url );
        mpHost->mpConsole->print("') (package='");
        mpHost->mpConsole->print(packageName);
        mpHost->mpConsole->print("')>\n");
        if( mpHost->mInstalledPackages.contains( packageName ) )
        {
            mpHost->mpConsole->print("<package is already installed>\n");
            return;
        }
        QString _home = QDir::homePath();
        _home.append( "/.config/mudlet/profiles/" );
        _home.append( mpHost->getName() );
        mServerPackage = QString( "%1/%2").arg( _home ).arg( fileName );

        QNetworkReply * reply = mpDownloader->get( QNetworkRequest( QUrl( url ) ) );
        mpProgressDialog = new QProgressDialog("downloading game GUI from server", "Abort", 0, 4000000, mpHost->mpConsole );
        connect(reply, SIGNAL(downloadProgress( qint64, qint64 )), this, SLOT(setDownloadProgress(qint64,qint64)));
        mpProgressDialog->show();
        return;
    }
    arg.remove( '\n' );
    // remove \r's from the data, as yajl doesn't like it
    arg.remove(QChar('\r'));
    mpHost->mLuaInterpreter.setGMCPTable( var, arg );
}

void cTelnet::setChannel102Variables( QString & msg )
{
    // messages consist of 2 bytes only
    if( msg.size() < 2 )
    {
#if defined( DEBUG_TELNET )
        qDebug() << "TELNET: Error: channel 102 message size != 2 bytes msg<"<<msg<<">";
#endif
        return;
    }
    else
    {
        int _m = msg.at(0).toLatin1();
        int _a = msg.at(1).toLatin1();
        mpHost->mLuaInterpreter.setChannel102Table( _m, _a );
    }
}

void cTelnet::atcpComposerCancel()
{
    if( ! mpComposer )
        return;
    mpComposer->close();
    mpComposer = 0;
    string msg = "*q\nno\n";
    socketOutRaw( msg );
}

void cTelnet::atcpComposerSave( QString txt )
{
    if( ! mpHost->mEnableGMCP )
    {
        //olesetbuf \n <text>
        string _h;
        _h += TN_IAC;
        _h += TN_SB;
        _h += 200;
        _h += "olesetbuf \n ";
        _h += txt.toLatin1().data();
        _h += '\n';
        _h += TN_IAC;
        _h += TN_SE;
        socketOutRaw( _h );
        _h.clear();
        _h += "*s\n";
        socketOutRaw( _h );
    }
    else
    {
        string _h;
        _h += TN_IAC;
        _h += TN_SB;
        _h += OPT_GMCP;
        _h += "IRE.Composer.SetBuffer";
        if( txt != "" )
        {
            _h += "  ";
            _h += txt.toLatin1().data();
            _h += " ";
        }
        _h += TN_IAC;
        _h += TN_SE;
        socketOutRaw( _h );
        _h.clear();
        _h += "*s\n";
        socketOutRaw( _h );
    }
    if( ! mpComposer )
        return;
    mpComposer->close();
    mpComposer = 0;
}

/*string cTelnet::getCurrentTime()
{
    time_t t;
    time(&t);
    tm lt;
    ostringstream s;
    s.str("");
    struct timeval tv;
    struct timezone tz;
    gettimeofday(&tv, &tz);
    localtime_r( &t, &lt );
    s << "["<<lt.tm_hour<<":"<<lt.tm_min<<":"<<lt.tm_sec<<":"<<tv.tv_usec<<"]";
    string time = s.str();
    return time;
} */


// Revamped to take additional [ WARN ], [ ALERT ] and [ INFO ] prefixes and to indent
// additional lines (ending with '\n') to last space character after "-"
// following prefix.
// Prefixes are made uppercase.
// Will store messages if the TConsole on which they are to be placed is not yet
// in existance as happens during startup, then pumps them out in order of
// arrival once a message arrives when the TConsole DOES exist.
void cTelnet::postMessage( QString msg )
{
    messageStack.append(msg);

    if( ! mpHost->mpConsole )
    {
        // Console doesn't exist (yet), stack up messages until it does...
        return;
    }

    while(messageStack.size())
    {
        while( messageStack.first().endsWith('\n') )
        { // Must strip off final line feeds as use that character for split() - will replace it later
            messageStack.first().chop(1);
        }

        QStringList body = messageStack.first().split(QChar('\n'));

        qint8 openBraceIndex = body.at(0).indexOf("[");
        qint8 closeBraceIndex = body.at(0).indexOf("]");
        qint8 hyphenIndex = body.at(0).indexOf("- ");
        if( openBraceIndex >= 0 && closeBraceIndex > 0 && closeBraceIndex < hyphenIndex )
        {
            quint8 prefixLength = hyphenIndex + 1;
            while( body.at(0).at(prefixLength) == ' ' )
            {
                prefixLength++;
            }

            QString prefix = body.at(0).left(prefixLength).toUpper();
            QString firstLineTail = body.at(0).mid(prefixLength);
            body.removeFirst();
            if( prefix.contains("ERROR") )
            {
                mpHost->mpConsole->print( prefix, 150, 0, 0, 0, 0, 0 ); // Red on black
                mpHost->mpConsole->print( firstLineTail.append('\n'), 150, 0, 0, 0, 0, 0 );  // Red on black
                for( quint8 _i = 0; _i < body.size(); _i++ )
                {
                    QString temp = body.at(_i);
                    temp.replace('\t', "        ");
                    // Fix for lua using tabs for indentation which was messing up justification:
                    body[_i] = temp.rightJustified( temp.length() + prefixLength );
                }
                if( body.size() )
                    mpHost->mpConsole->print( body.join('\n').append('\n'), 150, 0, 0, 0, 0, 0 );  // Red on black
            }
            else if( prefix.contains("WARN") )
            {
                mpHost->mpConsole->print( prefix, 0, 150, 190, 0, 0, 0 );
                mpHost->mpConsole->print( firstLineTail.append('\n'), 190, 150, 0, 0, 0, 0 ); //Foreground dark grey, background bright grey
                for( quint8 _i = 0; _i < body.size(); _i++ )
                {
                    QString temp = body.at(_i);
                    temp.replace('\t', "        ");
                    // Fix for lua using tabs for indentation which was messing up justification:
                    body[_i] = temp.rightJustified( temp.length() + prefixLength );
                }
                if( body.size() )
                    mpHost->mpConsole->print( body.join('\n').append('\n'), 190, 150, 0, 0, 0, 0 );
            }
            else if( prefix.contains("ALERT") )
            {
                mpHost->mpConsole->print( prefix, 190, 100, 50, 0, 0, 0 ); // Orangish on black
                mpHost->mpConsole->print( firstLineTail.append('\n'), 190, 190, 50, 0, 0, 0 ); // Yellow on Black
                for( quint8 _i = 0; _i < body.size(); _i++ )
                {
                    QString temp = body.at(_i);
                    temp.replace('\t', "        ");
                    // Fix for lua using tabs for indentation which was messing up justification:
                    body[_i] = temp.rightJustified( temp.length() + prefixLength );
                }
                if( body.size() )
                    mpHost->mpConsole->print( body.join('\n').append('\n'), 190, 190, 50, 0, 0, 0 ); // Yellow on Black
            }
            else if( prefix.contains("INFO") )
            {
                mpHost->mpConsole->print( prefix, 0, 150, 190, 0, 0, 0 ); // Cyan on black
                mpHost->mpConsole->print( firstLineTail.append('\n'), 0, 160, 0, 0, 0, 0 );  // Light Green on Black
                for( quint8 _i = 0; _i < body.size(); _i++ )
                {
                    QString temp = body.at(_i);
                    temp.replace('\t', "        ");
                    // Fix for lua using tabs for indentation which was messing up justification:
                    body[_i] = temp.rightJustified( temp.length() + prefixLength );
                }
                if( body.size() )
                    mpHost->mpConsole->print( body.join('\n').append('\n'), 0, 160, 0, 0, 0, 0 );  // Light Green on Black
            }
            else if( prefix.contains("OK") )
            {
                mpHost->mpConsole->print( prefix, 0, 160, 0, 0, 0, 0 );  // Light Green on Black
                mpHost->mpConsole->print( firstLineTail.append('\n'), 190, 100, 50, 0, 0, 0 ); // Orangish on black
                for( quint8 _i = 0; _i < body.size(); _i++ )
                {
                    QString temp = body.at(_i);
                    temp.replace('\t', "        ");
                    // Fix for lua using tabs for indentation which was messing up justification:
                    body[_i] = temp.rightJustified( temp.length() + prefixLength );
                }
                if( body.size() )
                    mpHost->mpConsole->print( body.join('\n').append('\n'), 190, 100, 50, 0, 0, 0 ); // Orangish on black
            }
            else
            {  // Unrecognised but still in a "[ something ] -  message..." format
                mpHost->mpConsole->print( prefix, 190, 50, 50, 190, 190, 190 ); // Foreground red, background bright grey
                mpHost->mpConsole->print( firstLineTail.append('\n'), 50, 50, 50, 190, 190, 190 ); //Foreground dark grey, background bright grey
                for( quint8 _i = 0; _i < body.size(); _i++ )
                {
                    QString temp = body.at(_i);
                    temp.replace('\t', "        ");
                    // Fix for lua using tabs for indentation which was messing up justification:
                    body[_i] = temp.rightJustified( temp.length() + prefixLength );
                }
                if( body.size() )
                    mpHost->mpConsole->print( body.join('\n').append('\n'), 50, 50, 50, 190, 190, 190 ); //Foreground dark grey, background bright grey
            }
        }
        else
        {  // No prefix found
            mpHost->mpConsole->print( body.join('\n').append('\n'), 190, 190, 190, 0, 0, 0 ); //Foreground bright grey, background black
        }
        messageStack.removeFirst();
    }
}

//forward data for further processing


void cTelnet::gotPrompt( string & mud_data )
{
    mpPostingTimer->stop();
    mMudData += mud_data;

    if( mUSE_IRE_DRIVER_BUGFIX && mGA_Driver )
    {
        //////////////////////////////////////////////////////////////////////
        //
        // Patch for servers that need GA/EOR for prompt fixups
        //

        int j = 0;
        int s = mMudData.size();
        while( j < s )
        {
            // search for leading <LF> but skip leading ANSI control sequences
            if( mMudData[j] == 0x1B )
            {
                while( j < s )
                {
                    if( mMudData[j] == 'm' )
                    {
                        goto NEXT;
                        break;
                    }
                    j++;
                }
            }
            if( mMudData[j] == '\n' )
            {
                mMudData.erase( j, 1 );
                break;
            }
            else
            {
                break;
            }
            NEXT: j++;
        }
        //
        ////////////////////////////
    }

    postData();
    mMudData = "";
    mIsTimerPosting = false;
}

void cTelnet::gotRest( string & mud_data )
{

    if( mud_data.size() < 1 )
    {
        return;
    }
    //if( ( ! mGA_Driver ) || ( mud_data[mud_data.size()-1] == '\n' ) )
    if( ! mGA_Driver )
    {
        size_t i = mud_data.rfind('\n');
        if( i != string::npos )
        {
            mMudData += mud_data.substr( 0, i+1 );
            postData();
            mpPostingTimer->start();
            mIsTimerPosting = true;
            if( i+1 < mud_data.size() )
            {
                mMudData = mud_data.substr( i+1, mud_data.size() );
            }
            else
            {
                mMudData = "";
            }
        }
        else
        {
            mMudData += mud_data;
            if( ! mIsTimerPosting )
            {
                mpPostingTimer->start();
                mIsTimerPosting = true;
            }
        }

    }
    else if( mGA_Driver )// if( ( mud_data[mud_data.size()-1] == '\n' ) )
    {

        //mpPostingTimer->stop();
        mMudData += mud_data;
        postData();
        mMudData = "";
        //mIsTimerPosting = false;
    }
    else
    {
        mMudData += mud_data;
        if( ! mIsTimerPosting )
        {
            mpPostingTimer->start();
            mIsTimerPosting = true;
        }
    }
}

void cTelnet::slot_timerPosting()
{
    if( ! mIsTimerPosting )
        return;
    mMudData += "\r";
    postData();
    mMudData = "";
    mIsTimerPosting = false;
    mpHost->mpConsole->finalize();
}

void cTelnet::postData()
{
    //QString cd = incomingDataDecoder->toUnicode( mMudData.data(), mMudData.size() );
    mpHost->mpConsole->printOnDisplay( mMudData );
    if( mAlertOnNewData )
    {
        QApplication::alert( mudlet::self(), 0 );
    }
}

void cTelnet::initStreamDecompressor()
{
    mZstream.zalloc = Z_NULL;
    mZstream.zfree = Z_NULL;
    mZstream.opaque = Z_NULL;
    mZstream.avail_in = 0;
    mZstream.next_in = Z_NULL;

    inflateInit( & mZstream );
}

int cTelnet::decompressBuffer( char * dirtyBuffer, int length )
{
    char cleanBuffer[100001]; //clean data after decompression

    mZstream.avail_in = length;
    mZstream.next_in = (Bytef *) dirtyBuffer;

    mZstream.avail_out = 100000;
    mZstream.next_out = (Bytef *) cleanBuffer;

    int zval = inflate( & mZstream, Z_SYNC_FLUSH );
    int outSize = 100000 - mZstream.avail_out;

    if( zval == Z_STREAM_END )
    {
        inflateEnd( & mZstream );
#if defined( DEBUG_TELNET )
        qDebug() << "TELNET: Received Z_STREAM_END, ending compression!";
#endif
        this->mNeedDecompression = false;
        this->mEnableMCCP = false;

        // Reset the option state so we can re-enable compression again in the future
        // such as in the case of a copyover -JM
        hisOptionState[static_cast<int>(OPT_COMPRESS)] = false;
        hisOptionState[static_cast<int>(OPT_COMPRESS2)] = false;
    }
    else
    {
        if( zval < 0 )
        {
            initStreamDecompressor();
            return -1;
        }
    }
    memcpy( dirtyBuffer, cleanBuffer, outSize );
    return outSize;
}


void cTelnet::recordReplay()
{
    lastTimeOffset = 0;
    timeOffset.start();
}

char loadBuffer[100001];
int loadedBytes;
QDataStream replayStream;
bool loadingReplay;
QFile replayFile;

void cTelnet::loadReplay( QString & name )
{
    replayFile.setFileName( name );
    QString msg = tr( "[ INFO ]  - Loading replay: %1 ." ).arg( name );
    postMessage( msg );
    replayFile.open( QIODevice::ReadOnly );
    replayStream.setDevice( &replayFile );
    loadingReplay = true;
    mudlet::self()->replayStart();
    _loadReplay();
}

void cTelnet::_loadReplay()
{
    if( ! replayStream.atEnd() )
    {
        int offset;
        int amount;
        replayStream >> offset;
        replayStream >> amount;

        char * pB = &loadBuffer[0];
        loadedBytes = replayStream.readRawData ( pB, amount );
#if defined( DEBUG_TELNET )
        qDebug() << "TELNET: Loaded:"<<loadedBytes<<"/"<<amount<<" bytes"<<" waiting for "<<offset<<" milliseconds.";
#endif
        loadBuffer[loadedBytes+1] = '\0';
        QTimer::singleShot( offset/mudlet::self()->mReplaySpeed, this, SLOT(readPipe()));
        mudlet::self()->mReplayTime = mudlet::self()->mReplayTime.addMSecs(offset);
    }
    else
    {
        loadingReplay = false;
        replayFile.close();
        QString msg = tr( "[  OK  ]  - Replay has ended." );
        postMessage( msg );
        mudlet::self()->replayOver();
    }
}


void cTelnet::readPipe()
{
    int datalen = loadedBytes;
    string cleandata = "";
    recvdGA = false;
    for( int i = 0; i < datalen; i++ )
    {
        char ch = loadBuffer[i];
#if defined( DEBUG_TELNET )
        qDebug() << "TELNET: GOT REPLAY:"<<loadBuffer;
#endif
        if( iac || iac2 || insb || (ch == TN_IAC) )
        {
#if defined( DEBUG_TELNET )
            qDebug() <<"TELENT: SERVER sends telnet command "<<(quint8)ch;
#endif
            if (! (iac || iac2 || insb) && ( ch == TN_IAC ) )
            {
                iac = true;
                command += ch;
            }
            else if (iac && (ch == TN_IAC) && (!insb))
            {
                //2. seq. of two IACs
                iac = false;
                cleandata += ch;
                command = "";
            }
            else if( iac && ( ! insb) && ( (ch == TN_WILL) || (ch == TN_WONT) || (ch == TN_DO) || (ch == TN_DONT)))
            {
                //3. IAC DO/DONT/WILL/WONT
                iac = false;
                iac2 = true;
                command += ch;
            }
            else if( iac2 )
            {
                //4. IAC DO/DONT/WILL/WONT <command code>
                iac2 = false;
                command += ch;
                processTelnetCommand( command );
                command = "";
            }
            else if( iac && (!insb) && (ch == TN_SB))
            {
//                qDebug() << getCurrentTime() << " GOT TN_SB";
                //5. IAC SB
                iac = false;
                insb = true;
                command += ch;
            }
            else if(iac && (!insb) && (ch == TN_SE))
            {
                //6. IAC SE without IAC SB - error - ignored
                command = "";
                iac = false;
            }
            else if( insb )
            {
                //7. inside IAC SB
                command += ch;
                if( iac && (ch == TN_SE))  //IAC SE - end of subcommand
                {
                    processTelnetCommand( command );
                    command = "";
                    iac = false;
                    insb = false;
                }
                if( iac )
                    iac = false;
                else if( ch == TN_IAC ) iac = true;
            }
            else
            //8. IAC fol. by something else than IAC, SB, SE, DO, DONT, WILL, WONT
            {
                iac = false;
                command += ch;
                processTelnetCommand( command );
                //this could have set receivedGA to true; we'll handle that later
                command = "";
            }
        }
        else
        {
            if( ch != '\r' )
                cleandata += ch;
        }

        if( recvdGA )
        {
            mGA_Driver = true;
            if( mCommands > 0 )
            {
                mCommands--;
                if( networkLatencyTime.elapsed() > 2000 )
                {
                    mCommands = 0;
                }
            }

            if( mUSE_IRE_DRIVER_BUGFIX || mLF_ON_GA )
            {
                cleandata.push_back('\n');
                // part of the broken IRE-driver bugfix to make up for broken
                // \n-prepending in unsolicited lines, part #2 see line 628
            }
            recvdGA = false;
            gotPrompt( cleandata );
            cleandata = "";
        }
    }//for

    if( cleandata.size() > 0 )
    {
       gotRest( cleandata );
    }

    mpHost->mpConsole->finalize();
    if( loadingReplay )
        _loadReplay();
}

void cTelnet::handle_socket_signal_readyRead()
{
    mpHost->mInsertedMissingLF = false;

    if( mWaitingForResponse )
    {
        double time = networkLatencyTime.elapsed();
        networkLatency = time/1000;
        mWaitingForResponse = false;
    }

    char buffer[100010];

    int amount = socket.read( buffer, 100000 );
    buffer[amount+1] = '\0';
    if( amount == -1 || amount == 0 )
        return;

    int datalen = amount;
    char * pBuffer = buffer;
    if( mNeedDecompression )
    {
        datalen = decompressBuffer( pBuffer, amount );
    }
    buffer[datalen] = '\0';
#if defined( DEBUG_TELNET_EXCESSIVELY )
    qDebug() << "TELNET: Got<"<<pBuffer<<">";
#endif
    if( mpHost->mpConsole->mRecordReplay )
    {
        mpHost->mpConsole->mReplayStream << timeOffset.elapsed()-lastTimeOffset;
        mpHost->mpConsole->mReplayStream << datalen;
        mpHost->mpConsole->mReplayStream.writeRawData( &buffer[0], datalen );
    }

    string cleandata = "";
    recvdGA = false;
    for( int i = 0; i < datalen; i++ )
    {
        char ch = buffer[i];

        if( iac || iac2 || insb || (ch == TN_IAC) )
        {
#if defined( DEBUG_TELNET_EXCESSIVELY )
            qDebug() << "TELNET: SERVER SENDS telnet command <"<< static_cast<unsigned int>(static_cast<unsigned char>(ch)) << ">";
#endif
            if( ! (iac || iac2 || insb) && ( ch == TN_IAC ) )
            {
                iac = true;
                command += ch;
            }
            else if( iac && (ch == TN_IAC) && (!insb) )
            {
                //2. seq. of two IACs
                iac = false;
                cleandata += ch;
                command = "";
            }
            else if( iac && (!insb) && ((ch == TN_WILL) || (ch == TN_WONT) || (ch == TN_DO) || (ch == TN_DONT)))
            {
                //3. IAC DO/DONT/WILL/WONT
                iac = false;
                iac2 = true;
                command += ch;
            }
            else if(iac2)
            {
                //4. IAC DO/DONT/WILL/WONT <command code>
                iac2 = false;
                command += ch;
                processTelnetCommand( command );
                command = "";
            }
            else if( iac && (!insb) && (ch == TN_SB) )
            {
                //5. IAC SB
                iac = false;
                insb = true;
                command += ch;
            }
            else if( iac && (!insb) && (ch == TN_SE) )
            {
                //6. IAC SE without IAC SB - error - ignored
                command = "";
                iac = false;
            }
            else if( insb )
            {
                /*if( buffer[i] == static_cast<char>(200) )
                {
                    cout << "got atcp? ";
                    if( i > 1 )
                    {
                        if( ( buffer[i-2] == TN_IAC ) && ( buffer[i-1] == TN_SB ) )
                        {
                            atcp_msg = true;
                            cout << " yes"<<endl;
                        }
                        else
                            cout << "no"<<endl;
                    }
                }
                else*/
                if( ! mNeedDecompression )
                {
                    // IAC SB COMPRESS WILL SE for MCCP v1 (unterminated invalid telnet sequence)
                    // IAC SB COMPRESS2 IAC SE for MCCP v2
                    if( mEnableMCCP && ( ! mNeedDecompression ) )
                    {
                        char _ch = buffer[i];
                        if( (_ch == OPT_COMPRESS ) || (_ch == OPT_COMPRESS2 ) )
                        {
                            bool _compress = false;
                            if( ( i > 1 ) && ( i+2 < datalen ) )
                            {
#if defined(DEBUG_TELNET)
                                qDebug() << QStringLiteral( "TELNET: Checking MCCP start seq... <%1><%2><%3><%4><%5>" )
                                            .arg( static_cast<int>(static_cast<unsigned char>(buffer[i-2])), 3, 10, QLatin1Char('0') )
                                            .arg( static_cast<int>(static_cast<unsigned char>(buffer[i-1])), 3, 10, QLatin1Char('0') )
                                            .arg( static_cast<int>(static_cast<unsigned char>(buffer[i  ]))  , 3, 10, QLatin1Char('0') )
                                            .arg( static_cast<int>(static_cast<unsigned char>(buffer[i+1])), 3, 10, QLatin1Char('0') )
                                            .arg( static_cast<int>(static_cast<unsigned char>(buffer[i+2])), 3, 10, QLatin1Char('0') )
                                            .toLocal8Bit().data();
#endif
                                if( ( buffer[i-2] == TN_IAC ) && ( buffer[i-1] == TN_SB ) && ( buffer[i+1] == TN_IAC ) && ( buffer[i+2] == TN_SE ) )
                                {
#if defined(DEBUG_TELNET)
                                    qDebug() << QStringLiteral( "   ... MCCP version 2 starting sequence! " )
                                                .toLocal8Bit().data();
#endif
                                    _compress = true;
                                }
                                else if( ( buffer[i-2] == TN_IAC ) && ( buffer[i-1] == TN_SB ) && ( buffer[i+1] == TN_WILL ) && ( buffer[i+2] == TN_SE ) )
                                { // This is why MCCP 1 was dropped, the specification had TN_WILL instead of TN_IAC here ^
#if defined(DEBUG_TELNET)
                                    qDebug() << QStringLiteral( "   ... MCCP version 1 starting sequence! " )
                                                .toLocal8Bit().data();
#endif
                                    _compress = true;
                                }
#if defined(DEBUG_TELNET)
                                else
                                    qDebug() << QString( "   ... MCCP starting sequence NOT found! " )
                                                .toLocal8Bit().data();
#endif
                            }
                            if( _compress )
                            {
                                mNeedDecompression = true;
                                // from this position in stream onwards, data will be compressed by zlib
                                gotRest( cleandata );
                                //mpHost->mpConsole->print("\n<starting MCCP data compression>\n");
                                cleandata = "";
                                initStreamDecompressor();
                                pBuffer += i + 3;//bugfix: BenH
                                int restLength = datalen - i - 3;
                                if( restLength > 0 )
                                {
                                    datalen = decompressBuffer( pBuffer, restLength );
                                }
                                //bugfix: BenH
                                iac = false;
                                insb = false;
                                ////////////////
                                goto MAIN_LOOP_END;
                            }
                        }
                    }
                }
                //7. inside IAC SB

                command += ch;
                if( iac && (ch == TN_SE) )  //IAC SE - end of subcommand
                {
                    processTelnetCommand( command );
                    command = "";
                    iac = false;
                    insb = false;
                }

                if(iac)
                    iac = false;
                else if( ch == TN_IAC )
                    iac = true;
            } // End of if( insb )
            else
            //8. IAC fol. by something else than IAC, SB, SE, DO, DONT, WILL, WONT
            {
                iac = false;
                command += ch;
                processTelnetCommand( command );
                //this could have set receivedGA to true; we'll handle that later
                command = "";
            }
        }
        else
        {
            if( ch != '\r' && ch != 0 )
                cleandata += ch;
        }
MAIN_LOOP_END: ;
        if( recvdGA )
        {
            if( ! mFORCE_GA_OFF ) //FIXME: wird noch nicht richtig initialisiert
            {
                mGA_Driver = true;
                if( mCommands > 0 )
                {
                    mCommands--;
                    if( networkLatencyTime.elapsed() > 2000 )
                    {
                        mCommands = 0;
                    }
                }
                cleandata.push_back('\xff');
                recvdGA = false;
                gotPrompt( cleandata );
                cleandata = "";
            }
            else
            {
                if( mLF_ON_GA ) //TODO: reenable option in preferences
                {
                    cleandata.push_back('\n');
                }
            }
        }
    }//for

    if( cleandata.size() > 0 )
    {
       gotRest( cleandata );
    }
    mpHost->mpConsole->finalize();
    lastTimeOffset = timeOffset.elapsed();
}

const QString cTelnet::telnetOption( unsigned char option )
{
    switch( option )
    { // List EVERYTHING - might help to decode new option usage in the future
        case      OPT_BINARY:   return QStringLiteral( "BINARY" );              break;
        case        OPT_ECHO:   return QStringLiteral( "ECHO" );                break;
        case               2:   return QStringLiteral( "RECONNECT" );           break;
        case OPT_SUPPRESS_GA:   return QStringLiteral( "SUPPRESS-G-A" );        break;
        case               4:   return QStringLiteral( "MESSAGE-SIZE" );        break;
        case      OPT_STATUS:   return QStringLiteral( "STATUS" );              break;
        case OPT_TIMING_MARK:   return QStringLiteral( "TIMING-MARK" );         break;
        case               7:   return QStringLiteral( "RCTE" );                break;
        case               8:   return QStringLiteral( "OUTPUT-LINE-WIDTH" );   break;
        case               9:   return QStringLiteral( "OUTPUT-PAGE-SIZE" );    break;
        case              10:   return QStringLiteral( "NAO-CRD" );             break;
        case              11:   return QStringLiteral( "NAO-HTS" );             break;
        case              12:   return QStringLiteral( "NAO-HTD" );             break;
        case              13:   return QStringLiteral( "NAO-FFD" );             break;
        case              14:   return QStringLiteral( "NAO-VTS" );             break;
        case              15:   return QStringLiteral( "NAO-VTD" );             break;
        case              16:   return QStringLiteral( "NAO-LFD" );             break;
        case              17:   return QStringLiteral( "EXT-ASCII" );           break;
        case              18:   return QStringLiteral( "LOGOUT" );              break;
        case              19:   return QStringLiteral( "BYTE-MACRO" );          break;
        case              20:   return QStringLiteral( "DTE" );                 break;
        case              21:   return QStringLiteral( "SUPDUP" );              break;
        case              22:   return QStringLiteral( "SUPDUP-OUTPUT" );       break;
        case              23:   return QStringLiteral( "SEND-LOCATION" );       break;
        case OPT_TERMINAL_TYPE: return QStringLiteral( "TERMINAL-TYPE" );       break;
        case         OPT_EOR:   return QStringLiteral( "END-OF-RECORD" );       break;
        case              26:   return QStringLiteral( "TUID" );                break;
        case              27:   return QStringLiteral( "OUTPUT-MARK" );         break;
        case              28:   return QStringLiteral( "TTY-LOCATION" );        break;
        case              29:   return QStringLiteral( "3270-REGIME" );         break;
        case              30:   return QStringLiteral( "X-3-PAD" );             break;
        case        OPT_NAWS:   return QStringLiteral( "NAWS" );                break;
        case              32:   return QStringLiteral( "TERM-SPEED" );          break;
        case              33:   return QStringLiteral( "FLOW-CNTRL" );          break;
        case              34:   return QStringLiteral( "LINE-MODE" );           break;
        case              35:   return QStringLiteral( "X-DISPL-LOC" );         break;
        case              36:   return QStringLiteral( "ENVIRONMENT" );         break;
        case              37:   return QStringLiteral( "AUTHENTICATION" );      break;
        case              38:   return QStringLiteral( "ENCRYPTION" );          break;
        case              39:   return QStringLiteral( "NEW-ENVIRONMENT" );     break;
        case              40:   return QStringLiteral( "TN3270E" );             break;
        case              41:   return QStringLiteral( "X-AUTH" );              break;
        case              42:   return QStringLiteral( "CHARSET" );             break;
        case              43:   return QStringLiteral( "RSP" );                 break;
        case              44:   return QStringLiteral( "COMM-PORT-CNTRL" );     break;
        case              45:   return QStringLiteral( "SUPRESS-L-ECHO" );      break;
        case              46:   return QStringLiteral( "START-TLS" );           break;
        case              47:   return QStringLiteral( "KERMIT" );              break;
        case              48:   return QStringLiteral( "SEND_URL" );            break;
        case              49:   return QStringLiteral( "FORWARD-X" );           break;
        case              69:   return QStringLiteral( "MSDP" );                break;
        case              70:   return QStringLiteral( "MSSP" );                break;
        case              85:   return QStringLiteral( "COMPRESS" );            break;
        case              86:   return QStringLiteral( "COMPRESS2" );           break;
        case              90:   return QStringLiteral( "MSP" );                 break;
        case              91:   return QStringLiteral( "MXP" );                 break;
        case             102:   return QStringLiteral( "AARDWOLF102" );         break;
        case             138:   return QStringLiteral( "TELOP-PRAGMA-LOGON" );  break;
        case             139:   return QStringLiteral( "TELOP-SSPI-LOGON" );    break;
        case             140:   return QStringLiteral( "TELOP-PRAGMA-HEARTBEAT" );    break;
        case             200:   return QStringLiteral( "ATCP" );                break;
        case             201:   return QStringLiteral( "GMCP" );                break;
        case             255:   return QStringLiteral( "EXT-OPT" );             break;
        default:
        {
            QString result = QString( "<%1>" ).arg( option, 3, 10, QLatin1Char('0') );
            return result;
        }
    }
}

