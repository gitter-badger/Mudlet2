#ifndef _TROOM_DB_H
#define _TROOM_DB_H
/***************************************************************************
 *   Copyright (C) 2008-2013 by Heiko Koehn - KoehnHeiko@googlemail.com    *
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



#include <QDataStream>
#include <QList>
#include <QMap>
#include <QString>

class TArea;
class TRoom;
class TMap;
class XMLExport;

class TRoomDB
{
public:
                                TRoomDB( TMap * );
    TRoom *                     getRoom( int id );
    TArea *                     getArea( int areaId );
    int                         getAreaId( TArea * pA );
    bool                        addRoom( int id );
    int                         size() { return rooms.size(); }
    bool                        removeRoom( int id );
    bool                        removeArea( int areaId );
    bool                        removeArea( QString name );
    void                        removeArea( TArea * );
    bool                        addArea( int areaId );
    int                         addArea( QString name );
    bool                        addArea( int areaId, QString name );
    void                        setAreaName( int areaId, QString name );
    const QList<TRoom *>        getRoomPtrList();
    const QList<TArea *>        getAreaPtrList();
    const QMap<int, TRoom *> &  getRoomMap() const { return rooms; }
    const QMap<int, TArea *> &  getAreaMap() const { return areas; }
    QList<int>                  getRoomIdList();
    QList<int>                  getAreaIdList();
    const QMap<int, QString> &  getAreaNamesMap() const { return areaNamesMap; }
    void                        buildAreas();
    void                        clearMapDB();
    void                        initAreasForOldMaps();
    void                        auditRooms();
    bool                        addRoom( int id, TRoom * pR );
    int                         getAreaID( TArea * pA );
    void                        restoreAreaMap( QDataStream & );
    void                        restoreSingleArea( QDataStream &, int, TArea * );
    void                        restoreSingleRoom( QDataStream &, int, TRoom * );
    QMap<QString,int>           hashTable;



private:
                                TRoomDB(){}
    int                         createNewAreaID();
    bool                        __removeRoom( int id );

    QMap<int, TRoom *>          rooms;
    QMap<int, TArea *>          areas;
    QMap<int, QString>          areaNamesMap;
    TMap *                      mpMap;

    friend class TRoom;
    friend class XMLexport;

};


#endif //_TROOM_DB_H
