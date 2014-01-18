/***************************************************************************
 *   Copyright (C) 2012 by Heiko Koehn (KoehnHeiko@googlemail.com)         *
 *                                                                         *
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


#include <QDebug>
#include <QDataStream>
#include <QStringBuilder>
#include <QVector3D>
#include "TArea.h"
#include "TMap.h"
#include "TRoom.h"
#include "TRoomDB.h"




TRoom::TRoom(TRoomDB * pRDB )
: x( 0 )
, y( 0 )
, z( 0 )
, environment( -1 )
, isLocked( false )
, min_x( 0 )
, min_y( 0 )
, max_x( 0 )
, max_y( 0 )
, c( 0 )
, highlight( false )
, highlightColor( QColor( 255,150,0 ) )
, rendered( false )
, id( 0 )
, areaId( 0 )
, weight( 1 )
, north( -1 )
, northeast( -1 )
, east( -1 )
, southeast( -1 )
, south( -1 )
, southwest( -1 )
, west( -1 )
, northwest( -1 )
, up( -1 )
, down( -1 )
, in( -1 )
, out( -1 )
, mpRoomDB( pRDB )
{
}

TRoom::~TRoom()
{
    mpRoomDB->__removeRoom( id );
}

bool TRoom::hasExitStub(int direction)
{
    if (exitStubs.contains(direction))
        return true;
    else
        return false;
}

// status was an int - but logically it is a boolean
void TRoom::setExitStub(int direction, bool status)
{
    if(status)
    {
        if( ! hasExit(direction) )
        {
            if( ! exitStubs.contains(direction) )
            {
                // Previous code did not check for an existing entry for given
                // direction and QList container permits duplicates of same value!
                exitStubs.append(direction);
            }
        }
        else
            qDebug("TRoom::setExitStub(): cannot set an exit stub in given direction in RoomID(%d) - there is already an exit there!", getId() );
    }
    else
        exitStubs.removeAll(direction);
}

int TRoom::getExitWeight( QString cmd )
{
    if( exitWeights.contains( cmd ) )
    {
        return exitWeights[cmd];
    }
    else
        return weight; // NOTE: if no exit weight has been set: exit weight = room weight
}

// NOTE: needed so dialogRoomExit code can tell if an exit weight has been set
// now that they are private!
bool TRoom::hasExitWeight(QString cmd)
{
    if( exitWeights.contains(cmd) )
    {
        if( exitWeights.value(cmd) > 0 )
            return true;
        else
        {
            exitWeights.remove(cmd); // Fixup - removes any bogus (zero or less) values
            return false;
        }
    }
    else
        return false;
}
void TRoom::setWeight( int w )
{
    if( w < 1 )
        w = 1;
    weight = w;
}

// Previous implimentation did not allow for REMOVAL of an exit weight (by
// setting it to zero)
void TRoom::setExitWeight(QString cmd, int w)
{
    if( w > 0 )
        exitWeights[cmd] = w;
    else if( exitWeights.contains( cmd ) )
        exitWeights.remove( cmd );
    if( mpRoomDB )
        mpRoomDB->mpMap->mMapGraphNeedsUpdate = true;
}

// Declared in header but was missing!
// Uses lower case initials for normal xy-plane exits: n,ne,e,se,s,sw,w,nw
// Use "up", "down", "in", "out" for the non-xy plane ones
// Will use (un 0/1 prefixed) command for specials
void TRoom::setDoor( QString cmd, int doorStatus)
{
    if( doorStatus > 0 && doorStatus <=3 )
        doors[cmd] = doorStatus;
    else if ( doors.contains( cmd ) && doorStatus == 0 )
        doors.remove( cmd );

    if( mpRoomDB )
        mpRoomDB->mpMap->mMapGraphNeedsUpdate = true;
}

int TRoom::getDoor( QString cmd )
{
    if( doors.contains( cmd ) )
        return doors.value( cmd );
    else
        return 0;
}

// This is currently trivial but could need additional code if used
// on a non-new room to update anything that used the old id value...
void TRoom::setId( int _id )
{
    id = _id;
}

// FIXME: THIS IS SERIOUSLY FLAWED - IS CAUSING PROBLEMS IN THE WILD IF _areaId
// IS NOT VALID OR THE ROOM HAS ALREADY BEEN PLACED IN AN AREA
void TRoom::setAreaId( int _areaId )
{
    areaId = _areaId;
    TArea * pA = mpRoomDB->getArea( areaId );
    if( !pA )
    {
        mpRoomDB->addArea( areaId );
        pA = mpRoomDB->getArea( areaId );
        if( !pA )
        {
            QString error = "TRoom::setArea(): No area created! requested area ID=%1. Note: area IDs must be > 0";
            mpRoomDB->mpMap->logError(error);
            return;
        }
    }

    pA->addRoom( id );
    pA->fast_ausgaengeBestimmen(id);
    pA->fast_calcSpan(id);
}


/* The original code below was not used and seems to indicate whether the room
 * already has a conventional exit to the given ROOMID
 *
 * Revisions to the dlgRoomExits class may have a need for a hasExit()
 * method to merely find out if there is an exit in a particular direction
 * without care for where it actually goes...
 *
 *bool TRoom::hasExit( int _id )
 *{
 *    if( north == _id )
 *        return true;
 *    else if( south == _id )
 *        return true;
 *    else if( northwest == _id )
 *        return true;
 *    else if( northeast == _id )
 *        return true;
 *    else if( southwest == _id )
 *        return true;
 *    else if( southeast == _id )
 *        return true;
 *    else if( east == _id )
 *        return true;
 *    else if( west == _id )
 *        return true;
 *    else if( up == _id )
 *        return true;
 *    else if( down == _id )
 *        return true;
 *    else if( out == _id )
 *        return true;
 *    else if( in == _id )
 *        return true;
 *    else
 *        return false;
 *}
 *
 * The new method does not actually check for a VALID exit, i.e. if the
 * examined destination room appears in the mpRoomDB->rooms QMap, that could be
 * done but would require a call to the parent TRoomDB class...
 */
bool TRoom::hasExit( int direction )
{
    switch( direction )
    {
        case DIR_NORTH:     if( north > 0 )     return true; break;
        case DIR_EAST:      if( east > 0 )      return true; break;
        case DIR_SOUTH:     if( south > 0 )     return true; break;
        case DIR_WEST:      if( west > 0 )      return true; break;
        case DIR_UP:        if( up > 0 )        return true; break;
        case DIR_DOWN:      if( down > 0 )      return true; break;
        case DIR_NORTHEAST: if( northeast > 0 ) return true; break;
        case DIR_NORTHWEST: if( northwest > 0 ) return true; break;
        case DIR_SOUTHEAST: if( southeast > 0 ) return true; break;
        case DIR_SOUTHWEST: if( southwest > 0 ) return true; break;
        case DIR_IN:        if( in > 0 )        return true; break;
        case DIR_OUT:       if( out > 0 )       return true; break;
    }
    return false;
}

void TRoom::setExitLock( int direction, bool locked )
{
    if( ! locked )
    {
        exitLocks.removeAll( direction );
        return;
    }
    if( exitLocks.contains( direction ) )
        return; // Already present thus no need to add it (QList container
                // permits multiple instances of same value!)
    switch( direction )
    {
        case DIR_NORTH: exitLocks.push_back(DIR_NORTH); break;
        case DIR_NORTHEAST: exitLocks.push_back(DIR_NORTHEAST); break;
        case DIR_NORTHWEST: exitLocks.push_back(DIR_NORTHWEST); break;
        case DIR_SOUTHEAST: exitLocks.push_back(DIR_SOUTHEAST); break;
        case DIR_SOUTHWEST: exitLocks.push_back(DIR_SOUTHWEST); break;
        case DIR_SOUTH: exitLocks.push_back(DIR_SOUTH); break;
        case DIR_EAST: exitLocks.push_back(DIR_EAST); break;
        case DIR_WEST: exitLocks.push_back(DIR_WEST); break;
        case DIR_UP: exitLocks.push_back(DIR_UP); break;
        case DIR_DOWN: exitLocks.push_back(DIR_DOWN); break;
        case DIR_IN: exitLocks.push_back(DIR_IN); break;
        case DIR_OUT: exitLocks.push_back(DIR_OUT); break;
    }
}

// These are convenience functions allowing access to all normal exits by a variable
// rather than by individual exit specific calls
bool TRoom::setExit( int to, int direction )
{
    switch(direction){
    case DIR_NORTH:     north     = to; return true; break;
    case DIR_NORTHEAST: northeast = to; return true; break;
    case DIR_NORTHWEST: northwest = to; return true; break;
    case DIR_EAST:      east      = to; return true; break;
    case DIR_WEST:      west      = to; return true; break;
    case DIR_SOUTH:     south     = to; return true; break;
    case DIR_SOUTHEAST: southeast = to; return true; break;
    case DIR_SOUTHWEST: southwest = to; return true; break;
    case DIR_UP:        up        = to; return true; break;
    case DIR_DOWN:      down      = to; return true; break;
    case DIR_IN:        in        = to; return true; break;
    case DIR_OUT:       out       = to; return true;
    }
    return false;
}


int TRoom::getExit( int direction )
{
    switch(direction){
    case DIR_NORTH:     return north    ; break;
    case DIR_NORTHEAST: return northeast; break;
    case DIR_NORTHWEST: return northwest; break;
    case DIR_EAST:      return east     ; break;
    case DIR_WEST:      return west     ; break;
    case DIR_SOUTH:     return south    ; break;
    case DIR_SOUTHEAST: return southeast; break;
    case DIR_SOUTHWEST: return southwest; break;
    case DIR_UP:        return up       ; break;
    case DIR_DOWN:      return down     ; break;
    case DIR_IN:        return in       ; break;
    case DIR_OUT:       return out      ;
    }
    return -1;
}


// The need for "to" seems superfluous here, cmd is the decisive factor
void TRoom::setSpecialExitLock(int to, QString cmd, bool doLock)
{
    QMapIterator<int, QString> it( other );
    while( it.hasNext() )
    {
        it.next();
        if( it.key() != to )
            continue;
        if( it.value().size() < 1 )
            continue;
        if( it.value().mid(1) != cmd )
        {
            if( it.value() != cmd )
            {
                continue;
            }
        }
        if( doLock )
        {
            QString _cmd = it.value();
            _cmd.replace( 0, 1, '1' );
            other.replace( to, _cmd );
        }
        else
        {
            QString _cmd = it.value();
            _cmd.replace( 0, 1, '0');
            other.replace( to, _cmd );
        }
        return;
    }
}

bool TRoom::hasExitLock( int direction )
{
    return exitLocks.contains( direction );
}


// The need for "to" also seems superfluous here, cmd is the decisive factor
// 0=offen 1=zu
bool TRoom::hasSpecialExitLock( int to, QString cmd )
{
    if( other.contains( to ) )
    {
        QMapIterator<int, QString> it( other );
        while( it.hasNext() )
        {
            it.next();
            if( it.key() != to )
                continue;
            if( it.value().size() < 2 )
                continue;
            if( it.value().mid(1) != cmd )
                continue;
            return it.value().mid(0,1) == "1";
        }
        return false;
    }
    else
        return false;
}

// Original code had flaw that it might be used to change an existing but
// expect the "to" of an existing special exit to be the same - it needn't be
// so...
void TRoom::addSpecialExit( int to, QString cmd )
{
    QString _strippedCmd;
    QString _prefix= "";

    if( cmd.startsWith('0') || cmd.startsWith('1') )
    {
        _strippedCmd = cmd.mid(1);
        _prefix = cmd.mid(0,1);
    }
    else
    {
        _strippedCmd = cmd;
    }

    if( _strippedCmd.isEmpty() )
        return; // Refuse to create an unnamed special exit!!!
    // replace if this special exit exists, otherwise add
    QMutableMapIterator<int, QString> it( other );
    while(it.hasNext() )
    {
        it.next();
        if( ! it.value().size() )
            continue;

        if( Q_LIKELY( it.value().startsWith('0') || it.value().startsWith('1') ) )
        {
            if( it.value().mid(1) != _strippedCmd )
                continue;
            else
            { // Found the matching command, preserve the existing lock state
              // unless overriden in command and also the old destination to
              // note which areas are affected
                if( _prefix.isEmpty() )
                {
                    _prefix = it.value().mid(0,1);
                }
                it.remove(); // Despite this being a Mutable iterator that does
                             // not allow us to change the KEY - we only can
                             // remove the entry to add-in a new one later.
                break;
            }
        }
        else
        {
            if( it.value() != _strippedCmd )
                continue;
            else
            { // Found the matching command, but this is an old one with no lock state prefix
                if( _prefix.isEmpty() )
                    _prefix = '0'; // Assume default unlock case if not set
                it.remove();
                break;
            }

        }
    }
    // Have definately removed the existing case of this command
    // Now add it to map

    if( _prefix.isEmpty() )
        _prefix = '0';

    QString finalCmd = _prefix % _strippedCmd;
    other.insertMulti(to, finalCmd);

    TArea * pA = mpRoomDB->getArea( areaId );
    if( pA )
    {
        pA->fast_ausgaengeBestimmen( id );
    }
}


bool TRoom::hasSpecialExit( QString cmd )
{
    QString _strippedCmd;
    QString _prefix= "";

    if( cmd.startsWith('0') || cmd.startsWith('1') )
    {
        _strippedCmd = cmd.mid(1);
        _prefix = cmd.mid(0,1);
    }
    else
    {
        _strippedCmd = cmd;
    }

    if( _strippedCmd.isEmpty() )
        return false; // Refuse to process an unnamed special exit!!!

    QMapIterator<int, QString> it( other );
    while(it.hasNext() )
    {
        it.next();
        if( ! it.value().size() )
            continue;

        if( Q_LIKELY( it.value().startsWith('0') || it.value().startsWith('1') ) )
        {
            if( it.value().mid(1) != _strippedCmd )
                continue;
            else
            { // Found the matching command
                return true;
                break;
            }
        }
        else
        {
            if( it.value() != _strippedCmd )
                continue;
            else
            { // Found the matching command, this is an old one with no lock state prefix
                return true;
                break;
            }

        }
    }
    return false;
}

// Replacement method without a to argument
void TRoom::setSpecialExitLock(QString cmd, bool doLock)
{
    QMapIterator<int, QString> it( other );
    while( it.hasNext() )
    {
        it.next();

        if( ! it.value().size() )
            continue;

        if( it.value().mid(1) != cmd )
        { // Check new (with lock code prefix) form
            if( it.value() != cmd )
            { // Check old (without the single character prefix) form
                continue;
            }
        }

        int to = it.key();
        QString _cmd = it.value();

        if( doLock )
        {
            _cmd.replace( 0, 1, '1' );
            other.replace( to, _cmd );
        }
        else
        {
            _cmd.replace( 0, 1, '0');
            other.replace( to, _cmd );
        }
        return;
    }
}


bool TRoom::removeSpecialExit( QString cmd )
{
    QString _strippedCmd;
    QString _prefix= "";
    bool isFound = false;

    if( cmd.startsWith('0') || cmd.startsWith('1') )
    {
        _strippedCmd = cmd.mid(1);
        _prefix = cmd.mid(0,1);
    }
    else
    {
        _strippedCmd = cmd;
    }

    if( _strippedCmd.isEmpty() )
        return isFound; // Refuse to delete an unnamed special exit!!!

    QMutableMapIterator<int, QString> it( other );
    while(it.hasNext() )
    {
        it.next();
        if( ! it.value().size() )
            continue;

        if( Q_LIKELY( it.value().startsWith('0') || it.value().startsWith('1') ) )
        {
            if( it.value().mid(1) != _strippedCmd )
                continue;
            else
            { // Found the matching command
                it.remove();
                isFound = true;
                break;
            }
        }
        else
        {
            if( it.value() != _strippedCmd )
                continue;
            else
            { // Found the matching command, this is an old one with no lock state prefix
                it.remove();
                isFound = true;
                break;
            }

        }
    }
    // Have definately removed the existing case of this command

    TArea * pA = mpRoomDB->getArea( areaId );
    if( pA )
    {
        pA->ausgaengeBestimmen();
        // The fast_ausgaengeBestimmen() method is only suitable for ADDING rooms/exits
    }
    return isFound;
}


void TRoom::removeAllSpecialExitsToRoom( int _id )
{
    QList<int> keyList = other.keys();
    QList<QString> valList = other.values();
    for( int i=0; i<keyList.size(); i++ )
    {
        if( keyList[i] == _id )
        {
            // guaranteed to be in synch according to Qt docs
            other.remove(keyList[i], valList[i]);
        }
    }
    TArea * pA = mpRoomDB->getArea( areaId );
    if( pA )
    {  // The fast_ version one DOES handle the LOSS of exits FROM the subject room
        pA->fast_ausgaengeBestimmen( id );
    }
}

void TRoom::calcRoomDimensions()
{
    min_x = 0;
    min_y = 0;
    max_x = 0;
    max_y = 0; // Ensure hold sensible values even if nothing to do

    if( customLines.size() < 1 )
        return;

    int _min_x = x;
    int _min_y = y;
    int _max_x = x;
    int _max_y = y;

    qDebug("TRoom::calcRoomDimensions(): Room ID(%i) (%i.000,%i.000,%i.000):", id, x, y, z);

    QMapIterator<QString, QList<QPointF> > it(customLines);
    while( it.hasNext() )
    {
        it.next();
        const QList<QPointF> & _pL= it.value();
        if( ! _pL.size() )
        {
            qWarning("TRoom::calcRoomDimensions(): WARNING: Room ID(%i) has a custom Exit Line (%s) with no points",
                     id,
                     qPrintable(it.key()) );
            continue; // Ought to purge such entries (custom lines with no points!)
        }
        if( ! it.key().trimmed().length() )
        {
            qWarning("TRoom::calcRoomDimensions(): WARNING: Room ID(%i) has a custom Exit Line with an invalid name(key)", id);
            continue; // Ought to purge such entries (custom lines with nil, empty or only whitespace name!)
        }
        for( int i=0; i<_pL.size(); i++ )
        {
            if( i )
            {
                qDebug("      segment(%i): (%0.3f,%0.3f) --> (%0.3f,%0.3f):", i, _pL[i-1].x(), _pL[i-1].y(), _pL[i].x(), _pL[i].y());
            }
            else
            {
                qDebug("   %s:", qPrintable(it.key()));
                qDebug("      segment(0): (%i.000,%i.000) --> (%0.3f,%0.3f):", x, y, _pL[0].x(), _pL[0].y());
            }

            if( _pL[i].x() < _min_x )
                _min_x = _pL[i].x();
            if( _pL[i].x() > _max_x )
                _max_x = _pL[i].x();
            if( _pL[i].y() < _min_y )
                _min_y = _pL[i].y();
            if( _pL[i].y() > _max_y )
                _max_y = _pL[i].y();
        }
    }
    if( _min_x < x )
        min_x = _min_x - x;
    if( _max_x > x )
        max_x = _max_x - x;
    if( _min_y < y )
        min_y = _min_y - y;
    if( _max_y > y )
        max_y = _max_y - y;
    qDebug("         overall extremes relative to room centre: x(%0.3f<-->%0.3f) y(%0.3f<-->%0.3f)", min_x, max_x, min_y, max_y);
}


// Include of QDataStream moved from here
/*bool - N/U: no return value created or used */
void TRoom::restore( QDataStream & ifs, int roomId, int version )
{

    id = roomId;
    ifs >> areaId;
    ifs >> x;
    ifs >> y;
    ifs >> z;
    ifs >> north;
    ifs >> northeast;
    ifs >> east;
    ifs >> southeast;
    ifs >> south;
    ifs >> southwest;
    ifs >> west;
    ifs >> northwest;
    ifs >> up;
    ifs >> down;
    ifs >> in;
    ifs >> out;
    ifs >> environment;
    ifs >> weight;

    // force room weight >= 1 otherwise pathfinding choses random pathes.
    if( weight < 1 )
    {
        weight = 1;
    }

    if( version < 8 )
    {
        float f1,f2,f3,f4;
        ifs >> f1;//rooms[i]->xRot;
        ifs >> f2;//rooms[i]->yRot;
        ifs >> f3;//rooms[i]->zRot;
        ifs >> f4;//rooms[i]->zoom;
    }
    ifs >> name;
    ifs >> isLocked;
    if( version >= 6 )
    {
        ifs >> other;
    }
    if( version >= 9 )
    {
        ifs >> c;
    }
    if( version >= 10 )
    {
        ifs >> userData;
    }
    if( version >= 11 )
    {
        ifs >> customLines;
        ifs >> customLinesArrow;
        ifs >> customLinesColor;
        ifs >> customLinesStyle;
        ifs >> exitLocks;
    }
    if( version >= 13 )
    {
        ifs >> exitStubs;
    }
    if( version >= 16 )
    {
        ifs >> exitWeights;
        ifs >> doors;
    }
    calcRoomDimensions();
}

void TRoom::auditExits()
{
    if( north != -1 && ! mpRoomDB->getRoom(north) )
    {
        qWarning("TRoom::auditExits() WARNING: roomID:%6i REMOVING invalid (general) exit: \"north\"", id);
        north = -1;
    }
    if( south != -1 && ! mpRoomDB->getRoom(south) )
    {
        qWarning("TRoom::auditExits() WARNING: roomID:%6i REMOVING invalid (general) exit: \"south\"", id);
        south = -1;
    }
    if( northwest != -1 && ! mpRoomDB->getRoom(northwest) )
    {
        qWarning("TRoom::auditExits() WARNING: roomID:%6i REMOVING invalid (general) exit: \"northwest\"", id);
        northwest = -1;
    }
    if( northeast != -1 && ! mpRoomDB->getRoom(northeast) )
    {
        qWarning("TRoom::auditExits() WARNING: roomID:%6i REMOVING invalid (general) exit: \"northeast\"", id);
        northeast = -1;
    }
    if( southwest != -1 && ! mpRoomDB->getRoom(southwest) )
    {
        qWarning("TRoom::auditExits() WARNING: roomID:%6i REMOVING invalid (general) exit: \"southwest\"", id);
        southwest = -1;
    }
    if( southeast != -1 && ! mpRoomDB->getRoom(southeast) )
    {
        qWarning("TRoom::auditExits() WARNING: roomID:%6i REMOVING invalid (general) exit: \"southeast\"", id);
        southeast = -1;
    }
    if( west != -1 && ! mpRoomDB->getRoom(west) )
    {
        qWarning("TRoom::auditExits() WARNING: roomID:%6i REMOVING invalid (general) exit: \"west\"", id);
        west = -1;
    }
    if( east != -1 && ! mpRoomDB->getRoom(east) )
    {
        qWarning("TRoom::auditExits() WARNING: roomID:%6i REMOVING invalid (general) exit: \"east\"", id);
        east = -1;
    }
    if( in != -1 && ! mpRoomDB->getRoom(in) )
    {
        qWarning("TRoom::auditExits() WARNING: roomID:%6i REMOVING invalid (general) exit: \"in\"", id);
        in = -1;
    }
    if( out != -1 && ! mpRoomDB->getRoom(out) )
    {
        qWarning("TRoom::auditExits() WARNING: roomID:%6i REMOVING invalid (general) exit: \"out\"", id);
        out = -1;
    }
    if( up != -1 && ! mpRoomDB->getRoom(up) )
    {
        qWarning("TRoom::auditExits() WARNING: roomID:%6i REMOVING invalid (general) exit: \"up\"", id);
        up = -1;
    }
    if( down != -1 && ! mpRoomDB->getRoom(down) )
    {
        qWarning("TRoom::auditExits() WARNING: roomID:%6i REMOVING invalid (general) exit: \"down\"", id);
        down = -1;
    }
    // These last two were missing!

// If we use the Mutable iterator we don't have to restart after a deletion
    QMutableMapIterator<int, QString> it( other );
    while( it.hasNext() )
    {
        it.next();
        QString _cmd = it.value();
        if( _cmd.size() <= 0 )
        {
            qWarning("TRoom::auditExits() WARNING: roomID:%6i REMOVING invalid (special) exit to %i.", id, it.key());
            // If size is less than or equal to 0 then there is nothing to print!!!
            other.remove( it.key(), it.value() );
        }
        else if( ! ( _cmd.startsWith('1') || _cmd.startsWith('0') ) )
        {
            QString _nc = it.value();
            int _nk = it.key();
            _nc.prepend('0');
            // Old, prepatched special exit could not have a lock
            other.remove( it.key(), it.value() );
            other.insertMulti( _nk, _nc );
            qWarning("TRoom::auditExits() WARNING: roomID:%6i PATCHING invalid (special) exit to %i, was:%s now:%s.",
                     id,
                     _nk,
                     qPrintable(_cmd),
                     qPrintable(_nc));
        }
    }
}



