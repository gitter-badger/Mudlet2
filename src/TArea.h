#ifndef _TAREA_H
#define _TAREA_H
/***************************************************************************
 *   Copyright (C) 2008 by Heiko Koehn (KoehnHeiko@googlemail.com)         *
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



#include <QList>
#include <QMap>
#include <QMultiMap>
#include <QPair>
#include <QVector3D>

class TMap;
class TRoomDB;

class TArea
{
public:
                                TArea( TMap *, TRoomDB * );
                                ~TArea();
    int                         getAreaID();
    void                        addRoom( int id );
    const QList<int> & getAreaRooms() const { return rooms; }
    const QList<int> getAreaExits() const { return exits.uniqueKeys(); }
    void                        calcSpan();
    void                        fast_calcSpan( int );
    void                        fast_ausgaengeBestimmen( int );
    QList<int>                  getCollisionNodes();
    QList<int>                  getRoomsByPosition( int x, int y, int z );
    QMap<int,QMap<int,QMultiMap<int,int> > > koordinatenSystem();
    void                        ausgaengeBestimmen();
    QMultiMap<int, QPair<int, int> > exits;
                                // rooms that border on this area:
                                // key=in_area room id,
                                // pair.first=out_of_area room id
                                // pair.second=direction
    QList<int>                  rooms; // rooms of this area
    QVector3D                   pos; // pos auf der map und 0 punkt des area internen koordinatensystems
    QVector3D                   span;
    int                         min_x;
    int                         min_y;
    int                         min_z;
    int                         max_x;
    int                         max_y;
    int                         max_z;
    QMap<int, int>              xminEbene;
    QMap<int, int>              xmaxEbene;
    QMap<int, int>              yminEbene;
    QMap<int, int>              ymaxEbene;
    QMap<int, int>              zminEbene; // Redundent, each value will be same as key
    QMap<int, int>              zmaxEbene; // Redundent, each value will be same as key
    QList<int>                  ebenen; // EN: level
    bool                        gridMode;
    bool                        isZone; // N/U
    int                         zoneAreaRef; // N/U
    TRoomDB *                   mpRoomDB;



private:
    TArea() { qFatal("FATAL: illegal default constructor use of TArea()"); };
    //QMap<int, TMapLabel>        labelMap;



};
// - gezeichnet werden erstmal die areas
//   unter berücksichtigung der an die area angrenzenden edges
// - der span der area ist unterschiedlich


#endif //_TAREA_H
