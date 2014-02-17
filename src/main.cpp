/***************************************************************************
 *   Copyright (C) 2008-2009 by Heiko Koehn                                     *
 *   KoehnHeiko@googlemail.com                                             *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/


//#include <QtCore>
#include <QApplication>
#include <QDir>
//#include <QFile>
//#include <QFontDatabase>
#include <QSplashScreen>
#include <QStringBuilder>
#include "TConsole.h"
#include "TMap.h"
#include "mudlet.h"
#include "FontManager.h"
#include "HostManager.h"

#define MUDLET_HOME "/usr/local/share/mudlet/"

using namespace std;

TConsole *  spDebugConsole = 0;

//#ifdef QT_DEBUG
//    QFile debugStreamFile("C:\\mudletDebugStream.txt");;
//    QTextStream debugStream(&debugStreamFile);
//#endif

void debugOutput(QtMsgType type, const char *msg)
{
    //debugStream << msg << endl;
    ;
//    switch (type)
//    {
//    case QtDebugMsg:
//        cout << msg << endl;

//        /*if( mudlet::mpDebugConsole )
//        {
//            ;//mudlet::mpDebugConsole->print( msg );
//        }
//        else
//        {
//            fprintf(stderr, "Debug: %s\n", msg);
//        }*/
//        break;
//    case QtWarningMsg:
//        fprintf(stderr, "Warning: %s\n", msg);
//        break;
//    case QtCriticalMsg:
//        fprintf(stderr, "Critical: %s\n", msg);
//        break;
//    case QtFatalMsg:
//        fprintf(stderr, "Fatal: %s\n", msg);
//        abort();
//        break;
//    }
}

QStringList gSysErrors;

extern Q_CORE_EXPORT int qt_ntfs_permission_lookup;

QCoreApplication * createApplication(int &argc, char *argv[], unsigned int &action)
{
    action = 0;

#if defined(Q_OS_LINUX) || defined(Q_OS_WIN32) || defined(Q_OS_MAC)
// Not pretty but the clearest way to detect other currently unconsidered OSs
#else
    return new QApplication(argc, argv);
#endif

    for(int i = 1; i < argc; ++i)
    {
#if defined(Q_OS_LINUX) || defined(Q_OS_MAC)
        if( qstrcmp(argv[i], "--") == 0 )
            break; // Bail out on end of option type arguments
#endif

        char argument = 0;
        bool isOption = false;
#if defined(Q_OS_LINUX) || defined(Q_OS_MAC)
        if( strlen(argv[i]) > 2 && strncmp(argv[i], "--", 2) == 0 )
        {
            argument = argv[i][2];
            isOption = true;
        }
        else if( strlen(argv[i]) > 1 && strncmp(argv[i], "-", 1) == 0 )
        {
            argument = argv[i][1];
            isOption = true;
        }
#elif defined(Q_OS_WIN32)
        if( strlen(argv[i]) > 1 && strncmp(argv[i], "/", 1) == 0 )
        {
            argument = argv[i][1];
            isOption = true;
        }
#endif

        if( isOption )
        {
            if(tolower(argument) == 'v')
            {
                action = 2; // Make this the only action to do and do it directly
                break;
            }

            if(tolower(argument) == 'h' || argument == '?')
            {
                action = 1; // Make this the only action to do and do it directly
                break;
            }

            if(tolower(argument) == 'q')
            {
                action |= 4;
            }

        }
    }

    if( (action) & ( 1 | 2) )
        return new QCoreApplication(argc, argv);
    else
        return new QApplication(argc, argv);
}

int main(int argc, char *argv[])
{
//    #ifdef QT_DEBUG
//        debugStreamFile.open(QFile::WriteOnly | QFile::Truncate);
//    #endif

    //FIXME qInstallMsgHandler( debugOutput );
    spDebugConsole = 0;
    unsigned int startupAction = 0;

    Q_INIT_RESOURCE(mudlet_alpha);
    QScopedPointer<QCoreApplication> initApp(createApplication(argc, argv, startupAction));

    QApplication * app = qobject_cast<QApplication *>(initApp.data());

// Non-GUI actions --help and --version as suggested by GNU coding standards,
// section 4.7: http://www.gnu.org/prep/standards/standards.html#Command_002dLine-Interfaces
    if( app == 0 )
    {
        if( startupAction & 2 )
        {
            // Do "version" action
            std::cout << APP_TARGET << " " << APP_VERSION << APP_BUILD << std::endl;
            std::cout << "Qt libraries " << QT_VERSION_STR << "(compilation) " << qVersion() << "(runtime)" << std::endl;
            std::cout << "Copyright (C) 2008-" << std::string(__DATE__).substr(7, 4) << " Heiko Koehn." << std::endl;
            std::cout << "Licence GPLv2+: GNU GPL version 2 or later <http://gnu.org/licenses/gpl.html>" << std::endl;
            std::cout << "This is free software: you are free to change and redistribute it." << std::endl;
            std::cout << "There is NO WARRANTY, to the extent permitted by law." << std::endl;
        }
        if( startupAction & 1 )
        {
            // Do "help" action
            std::cout << "Usage: " << std::string(APP_TARGET) << "[OPTION...]" <<std::endl;
            std::cout << "   -h, --help      display this message." << std::endl;
            std::cout << "   -v, --version   display version information." << std::endl;
            std::cout << "   -q, --quiet     no splash screen on startup." << std::endl;
            std::cout << "There are other inherited options that arise from the Qt Libraries which" << std::endl;
            std::cout << "are not likely to be useful for normal use of this application:" << std::endl;
            std::cout << "        -nograb    the application should never grab the mouse or the"<< std::endl;
#if defined( Q_OS_LINUX )
            std::cout << "                   keyboard. This option is set by default when Mudlet is" << std::endl;
            std::cout << "                   running in the gdb debugger under Linux." << std::endl;
#else
            std::cout << "                   keyboard." << std::endl;
#endif
            std::cout << "        -dograb    ignore any implicit or explicit -nograb." << std::endl;
            std::cout << "                   -dograb wins over -nograb even when" << std::endl;
            std::cout << "                   -nograb is last on the command line." << std::endl;
            std::cout << "        -reverse   reverse the default horizontal direction, typically" << std::endl;
            std::cout << "                   for languages written right to left." << std::endl;
#ifdef Q_OS_UNIX
            std::cout << "        -sync      runs Mudlet in X synchronous mode. Synchronous mode" << std::endl;
            std::cout << "                   forces the X server to perform each X client request" << std::endl;
            std::cout << "                   immediately and not use buffer optimization. It makes" << std::endl;
            std::cout << "                   the program easier to debug and often much slower. The" << std::endl;
            std::cout << "                   -sync option is only valid for the X11 version of Qt." << std::endl;
#endif
            std::cout << std::endl;
            std::cout << "Report bugs to: <http://launchpad.mudlet.org/>" << std::endl;
            std::cout << "pkg home page: <http://mudlet.sourceforge.net/>, also see <http://www.mudlet.org/>"<< std::endl;
        }
        return 0;
    }

    int splashScreenTextAnimationInterval = 100; // mSeconds
    QPixmap pixmap(":/Mudlet_splashscreen_main.png");
    QSplashScreen splash(pixmap, Qt::WindowStaysOnTopHint);
    const int startupMessageSize = splash.height() / splash.fontMetrics().lineSpacing();
    app->setOverrideCursor(QCursor(Qt::WaitCursor));
    if( startupAction & 4 )
    {
        // Start quietly - no splash screen - "quiet" action
        splashScreenTextAnimationInterval = 0;
        splash.hide();
    }

    app->setOrganizationName("Mudlet");
    app->setApplicationName("Mudlet");
    app->setApplicationVersion(APP_VERSION);

    QStringList startupMessage;
    QTime t;
    if( splashScreenTextAnimationInterval )
    {
//    qDebug("main(): Splashscreen is %i high and the font has a linespacing of %i giving space for %i lines.",
//           splash.height(), splash.fontMetrics().lineSpacing(), startupMessageSize);
        // This should adjust to the number of lines to fill the splashscreen
        // graphic - hope there is not too variation in the font size between
        // difference systems...
        startupMessage.reserve(startupMessageSize);
        for( int i = 0; i < startupMessageSize; i++ )
            startupMessage << " ";

        startupMessage[startupMessageSize-1] = QString("Copyright ") % QChar(169) % QString("2008-2014   Heiko K") % QChar(246) % QString("hn");
        splash.show();
        splash.showMessage(startupMessage.join("\n"), Qt::AlignHCenter|Qt::AlignBottom);
        app->processEvents();

        t.start();
        int interval = 4 * splashScreenTextAnimationInterval;
        while( t.elapsed() < interval ) {} // Do nothing here for a bit

        // GUI actions splash-screen messages partly as suggested by GNU coding standards,
        // Following is suggested by end of GPL 3 document: https://www.gnu.org/licenses/gpl-3.0.html#howto
        if( QByteArray( APP_BUILD ).isEmpty() )
            startupMessage[startupMessageSize-5] = QString("(Release version: ") % APP_VERSION % QString(")");
        else
            startupMessage[startupMessageSize-5] = QString("(Development version: ") % APP_VERSION % APP_BUILD % QString(")");
        splash.showMessage(startupMessage.join("\n"), Qt::AlignHCenter|Qt::AlignBottom);
        app->processEvents();
        t.restart();
        interval = 2 * splashScreenTextAnimationInterval;
        while( t.elapsed() < interval ) {}

        startupMessage[startupMessageSize-7] = QString("select the 'About' item for details.");
        startupMessage[startupMessageSize-8] = QString("redistribute it under certain conditions;");
        startupMessage[startupMessageSize-9] = QString("This is free software, and you are welcome to");
        splash.showMessage(startupMessage.join("\n"), Qt::AlignHCenter|Qt::AlignBottom);
        app->processEvents();
        t.restart();
        interval = 2 * splashScreenTextAnimationInterval;
        while( t.elapsed() < interval ) {}

        startupMessage[startupMessageSize-11] = QString("ABSOLUTELY NO WARRANTY");
        startupMessage[startupMessageSize-12] = QString("Mudlet comes with");
        splash.showMessage(startupMessage.join("\n"), Qt::AlignHCenter|Qt::AlignBottom);
        app->processEvents();
        t.restart();
        interval = 5 * splashScreenTextAnimationInterval;
        while( t.elapsed() < interval ) {}

        startupMessage[1] = QString("Loading profiles... ");
        splash.showMessage(startupMessage.join("\n"), Qt::AlignHCenter|Qt::AlignBottom);
        app->processEvents();
        t.restart();
        interval = 5 * splashScreenTextAnimationInterval;
        while( t.elapsed() < interval ) {}
    }

    //qt_ntfs_permission_lookup++; // turn permission checking on on NTFS file systems
    QString directory = QDir::homePath()+"/.config/mudlet";
    QDir dir;
    if( ! dir.exists( directory ) )
    {
        dir.mkpath( directory );
    }

    // QFile file_doc(":/mudlet_documentation.html");
    // QFile file_doc_old;
    // file_doc_old.setFileName( directory+"/mudlet_documentation.html" );
    // if( file_doc_old.exists() )
    // {
        //NOTE: B. von Roeder found out that the removal of old versions may *sometimes* fail on windows 7 due permission issues
        // if( ! file_doc_old.setPermissions( QFile::WriteOwner | QFile::ReadOwner | QFile::ReadUser | QFile::WriteUser | QFile::ReadOther | QFile::WriteOther ) )
        // {
            // cout << "[ERROR] could not set file permissions of the old version of the manual" << endl;
            // gSysErrors << "[ERROR] could not set file permissions of the old version of the manual";
        // }
        // string old_man_path = directory.toLatin1().data();
        // old_man_path += "/mudlet_documentation.html";
        // bool ok=file_doc_old.remove();
        // if( ok )
        // {
            // cout << "[INFO] deleted old version of the manual: " << old_man_path << endl;
        // }
        // else
        // {
            // cout << "[ERROR] could not remove old version of the manual: " << old_man_path << endl;
            // QString _m = "[ERROR] could not remove old version of the manual: ";
            // _m.append( old_man_path.c_str() );
            // gSysErrors << _m;
        // }
    // }
    // else
    // {
        // gSysErrors << "[INFO] no old version of the manual found";
    // }
    // if( file_doc.copy( directory+"/mudlet_documentation.html" ) )
    // {
        // cout << "[OK] successfully copied new version of the manual" << endl;
        // QString _m = "[INFO] local manual: ";
        // _m.append( directory );
        // gSysErrors << _m;
    // }
    // else
    // {
        // cout << "[ERROR] copy of new version of the manual failed" << endl;
        // gSysErrors << "[ERROR] copy of new version of the manual failed";
    // }
    // QFile file_lua(":/LuaGlobal.lua");

    // QFile file_lua_old( directory+"/LuaGlobal.lua" );
    // if( ! file_lua_old.setPermissions( QFile::WriteOwner | QFile::ReadOwner | QFile::ReadUser | QFile::WriteUser | QFile::ReadOther | QFile::WriteOther ) )
    // {
        // cout << "[ERROR] failed to set file permissions for the old version of LuaGlobal.lua" << endl;
        // gSysErrors << "[ERROR] failed to set file permissions for the old version of LuaGlobal.lua";
    // }
    // else
    // {
        // cout << "[OK] successfully set file permissions for the old version of LuaGlobal.lua" << endl;
    // }
    // if( file_lua_old.remove() )
    // {
        // cout << "[OK] old LuaGlobal.lua removed successfully" << endl;
        // gSysErrors << "[INFO] old LuaGlobal.lua removed successfully";
    // }
    // else
    // {
        // cout << "[ERROR] failed to remove the old version of LuaGlobal.lua" << endl;
        // gSysErrors << "[ERROR] failed to remove the old version of LuaGlobal.lua";
    // }
    // if( file_lua.copy( directory+"/LuaGlobal.lua" ) )
    // {
        // cout << "[OK] new version of LuaGlobal.lua copied successfully" << endl;
        // gSysErrors << "[INFO] LuaGlobal.lua restored successfully";
        // QFile file_lua_new(directory+"/LuaGlobal.lua");
        // if( ! file_lua_new.setPermissions( QFile::WriteOwner | QFile::ReadOwner | QFile::ReadUser | QFile::WriteUser | QFile::ReadOther | QFile::WriteOther ) )
        // {
            // cout << "[ERROR] failed to set file permissions for the new version of LuaGlobal.lua" << endl;
            // gSysErrors << "[ERROR] failed to set file permissions for the new version of LuaGlobal.lua";
        // }
        // else
        // {
            // cout << "[OK] successfully set file permissions for the new version of LuaGlobal.lua" << endl;
        // }
    // }

    // QFile file_db(":/db.lua");

    // QFile file_db_old( directory+"/db.lua" );
    // if( ! file_db_old.setPermissions( QFile::WriteOwner | QFile::ReadOwner | QFile::ReadUser | QFile::WriteUser | QFile::ReadOther | QFile::WriteOther ) )
    // {
        // cout << "[ERROR] failed to set file permissions for the old version of db.lua" << endl;
        // gSysErrors << "[ERROR] failed to set file permissions for the old version of db.lua";
    // }
    // else
    // {
        // cout << "[OK] successfully set file permissions for the old version of db.lua" << endl;
    // }
    // if( file_db_old.remove() )
    // {
        // cout << "[OK] old db.lua removed successfully" << endl;
        // gSysErrors << "[INFO] old db.lua removed successfully";
    // }
    // else
    // {
        // cout << "[ERROR] failed to remove the old version of db.lua" << endl;
        // gSysErrors << "[ERROR] failed to remove the old version of db.lua";
    // }
    // if( file_db.copy( directory+"/db.lua" ) )
    // {
        // cout << "[OK] new version of db.lua copied successfully" << endl;
        // gSysErrors << "[INFO] db.lua restored successfully";
        // QFile file_db_new(directory+"/db.lua");
        // if( ! file_db_new.setPermissions( QFile::WriteOwner | QFile::ReadOwner | QFile::ReadUser | QFile::WriteUser | QFile::ReadOther | QFile::WriteOther ) )
        // {
            // cout << "[ERROR] failed to set file permissions for the new version of db.lua" << endl;
            // gSysErrors << "[ERROR] failed to set file permissions for the new version of db.lua";
        // }
        // else
        // {
            // cout << "[OK] successfully set file permissions for the new version of db.lua" << endl;
        // }
    // }

    if( splashScreenTextAnimationInterval )
    {
        startupMessage[1].append(QString("Done."));
        startupMessage[2] = QString("Loading font files... ");
        splash.showMessage(startupMessage.join("\n"), Qt::AlignHCenter|Qt::AlignBottom);
        app->processEvents();
        t.restart();
        int interval = 5 * splashScreenTextAnimationInterval;
        while( t.elapsed() < interval ) {}
    }

    QFile file_f1(":/fonts/ttf-bitstream-vera-1.10/COPYRIGHT.TXT");
    file_f1.copy( directory+"/COPYRIGHT.TXT" );

    QFile file_f2(":/fonts/ttf-bitstream-vera-1.10/RELEASENOTES.TXT");
    file_f2.copy( directory+"/RELEASENOTES.TXT" );

    QFile file_f3(":/fonts/ttf-bitstream-vera-1.10/VeraMoIt.ttf");
    file_f3.copy( directory+"/VeraMoIt.ttf" );

    QFile file_f4(":/fonts/ttf-bitstream-vera-1.10/local.conf");
    file_f4.copy( directory+"/local.conf" );

    QFile file_f5(":/fonts/ttf-bitstream-vera-1.10/VeraMoBd.ttf");
    file_f5.copy( directory+"/VeraMoBd.ttf" );

    QFile file_f6(":/fonts/ttf-bitstream-vera-1.10/VeraMoBd.ttf");
    file_f6.copy( directory+"/VeraMoBd.ttf" );

    QFile file_f7(":/fonts/ttf-bitstream-vera-1.10/README.TXT");
    file_f7.copy( directory+"/README.TXT" );

    QFile file_f8(":/fonts/ttf-bitstream-vera-1.10/VeraMoBI.ttf");
    file_f8.copy( directory+"/VeraMoBI.ttf" );

    QFile file_f9(":/fonts/ttf-bitstream-vera-1.10/VeraMono.ttf");
    file_f9.copy( directory+"/VeraMono.ttf" );

    /*QFile file_f(":/fonts/ttf-bitstream-vera-1.10/");
    file_f.copy( directory+"/" );

    QFile file_f(":/fonts/ttf-bitstream-vera-1.10/");
    file_f.copy( directory+"/" );

    QFile file_f(":/fonts/ttf-bitstream-vera-1.10/");
    file_f.copy( directory+"/" );  */
    if( splashScreenTextAnimationInterval )
    {
        startupMessage[2].append(QString("Done."));
        startupMessage[3] = QString("All data has been loaded successfully.");
        splash.showMessage(startupMessage.join("\n"), Qt::AlignHCenter|Qt::AlignBottom);
        app->processEvents();
        t.restart();
        int interval = 1 * splashScreenTextAnimationInterval;
        while( t.elapsed() < interval ) {}

        startupMessage[4] = QString("Starting...                              ");
        splash.showMessage(startupMessage.join("\n"), Qt::AlignHCenter|Qt::AlignBottom);
        app->processEvents();
        t.restart();
        interval = 1 * splashScreenTextAnimationInterval;
        while( t.elapsed() < interval ) {}

        startupMessage[4] = QString("Starting...                     Have fun!");
        splash.showMessage(startupMessage.join("\n"), Qt::AlignHCenter|Qt::AlignBottom);
        app->processEvents();
        t.restart();
        interval = 5 * splashScreenTextAnimationInterval;
        while( t.elapsed() < interval ) {}

        interval = 1 * splashScreenTextAnimationInterval;
        for( int i = startupMessageSize - 1; i > 0 ; i-- )
        {
            QString temp = " ";
            startupMessage[0].swap(temp);
            for( int j = 1; j <= i ; j++ )
            {
                startupMessage[j-1].swap(startupMessage[j]);
            }
            splash.showMessage(startupMessage.join("\n"), Qt::AlignHCenter|Qt::AlignBottom);
            app->processEvents();
            t.restart();

            while( t.elapsed() < interval ) {}
        }
        startupMessage[0] = QString(" ");
        splash.showMessage(startupMessage.join("\n"), Qt::AlignHCenter|Qt::AlignBottom);
        app->processEvents();

        splash.finish( mudlet::self() );  // This seems to be the point at which instance of mudlet is created!!!
    }

    mudlet::debugMode = false;
    HostManager::self();
    FontManager fm;
    fm.addFonts();
    QString home = QDir::homePath()+"/.config/mudlet";
    QString homeLink = QDir::homePath()+"/mudlet-data";
    QFile::link(home, homeLink);
    mudlet::self()->show();
    app->restoreOverrideCursor();
    app->exec();
}



