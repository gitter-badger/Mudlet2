#ifndef _TMAP_H
#define _TMAP_H
/***************************************************************************
 *   Copyright (C) 2008-2011 by Heiko Koehn  KoehnHeiko@googlemail.com     *
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



#include <vector>
#include <QColor>
#include <QDataStream>
#include <QList>
#include <QMap>
#include <QPixmap>
#include <QPointF>
#include <QSizeF>
#include <QString>
#include <QVector3D>
#include "TAstar.h"


class GLWidget;
class Host;
class TRoomDB;
class dlgMapper;


class TMapLabel
{
public:
                TMapLabel(){ hilite=false; showOnTop=false; noScaling=false; }
    QVector3D   pos;
    QPointF     pointer;
    QSizeF      size;
    QSizeF      clickSize;
    QString     text;
    QColor      fgColor;
    QColor      bgColor;
    QPixmap     pix;
    bool        hilite;
    bool        showOnTop;
    bool        noScaling;
};


class TMap
{
public:
                TMap( Host *);
    void        mapClear();
    int         createMapLabelID( int areaId );
    int         createMapImageLabel( int areaId, QString filePath, float x, float y, float z, float width, float height, float zoom, bool showOnTop, bool noScaling );
    int         createMapLabel( int areaId, QString text, float x, float y, float z, QColor fg, QColor bg, bool showOnTop=true, bool noScaling=true, qreal zoom=15.0, int fontSize=15 );
    void        deleteMapLabel( int areaId, int labelID );
    bool        addRoom( int id=0 );
    void        setRoomArea( int id, int areaId );
    //void deleteRoom( int id );
    void        deleteArea( int id );
    int         createNewRoomID();
    void        logError( QString &msg );
    bool        fixExits2( int );
    void        tidyMap( int areaId );
    void        getConnectedNodesGreaterThanX( int id, int x );
    void        getConnectedNodesSmallerThanX( int id, int x );
    void        getConnectedNodesGreaterThanY( int id, int x );
    void        getConnectedNodesSmallerThanY( int id, int x );
    bool        plausabilitaetsCheck( int area );
    void        astBreitenAnpassung( int id, int );
    void        astHoehenAnpassung( int id, int );
    bool        setExit( int from, int to, int dir );
    bool        setRoomCoordinates( int id, int x, int y, int z );
    void        init( Host * );
    bool        fixExits( int id, int dir );
    QList<int>  detectRoomCollisions( int id );
    void        solveRoomCollision( int id, int creationDirection, bool PCheck=true );
    void        setRoom( int );
    bool        findPath( int from, int to );
    bool        gotoRoom( int );
    bool        gotoRoom( int, int );
    void        setView( float, float, float, float );
    bool        serialize( QDataStream & );
    bool        restore( QString location );
    void        initGraph();
    void        exportMapToDatabase();
    void        importMapFromDatabase();
    void        connectExitStub( int roomId, int dirType );
    TRoomDB *   mpRoomDB;
    QMap<int, int> envColors;
    QVector3D   span;
    Host *      mpHost;
    int         mRoomId;
    bool        m2DPanMode;
    bool        mLeftDown;
    bool        mRightDown;
    float       m2DPanXStart;
    float       m2DPanYStart;
    int         mViewArea;
    //mapVar      mVars[20];
    //mapVar <int>    mvRoomId;
    //QMap<QString, mVarTypes>    mVars;
    //QMap<QString, *QVariant>    mVars;
    //mVars.insert("RoomId", &mRoomId);
    int         mTargetID;
    QList<int>  mPathList;
    QList<QString>  mDirList;
    QMap<int,QColor>    customEnvColors;
    QMap<int, QVector3D>    unitVectors;
    QMap<int, int>  reverseDirections; //contains complementary directions of dirs on TRoom.h
    GLWidget *  mpM;
    dlgMapper * mpMapper;
    QList<int>  mTestedNodes;
    QList<int>  conList;
    QMap<int, int>  roomidToIndex;
    QMap<int, int>  indexToRoomid;
    int         mPlausaOptOut;

    QMap<QString, int>  pixNameTable;
    QMap<int, QPixmap>  pixTable;
    typedef adjacency_list<listS, vecS, directedS, no_property, property<edge_weight_t, cost> > mygraph_t;
    typedef property_map<mygraph_t, edge_weight_t>::type                                        WeightMap;
    typedef mygraph_t::vertex_descriptor                                                        vertex;
    typedef mygraph_t::edge_descriptor                                                          edge_descriptor;
    typedef mygraph_t::vertex_iterator                                                          vertex_iterator;
    typedef std::pair<int, int>                                                                 edge;
    mygraph_t   g;
    WeightMap   weightmap;
    std::vector<location>   locations;
    bool        mMapGraphNeedsUpdate;
    bool        mNewMove;
    QMap<qint32, QMap<qint32, TMapLabel> >  mapLabels;

    int         version; //map file format version
};


#endif //_TMAP_H
