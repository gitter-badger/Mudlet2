#ifndef _GL_WIDGET_H
#define _GL_WIDGET_H
/***************************************************************************
 *   Copyright (C) 2010 by Heiko Koehn ( KoehnHeiko@googlemail.com )       *
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


#include <QtOpenGL/qgl.h> // For <QGLWidget> !!!
#include <QMouseEvent>
#include <QSize>
#include <QString>
#include <QWidget>
#include <QWheelEvent>

class TMap;
class Host;

class GLWidget : public QGLWidget
{
    Q_OBJECT

public:
                    GLWidget( QWidget *parent = 0 );
                    GLWidget( TMap * pM, QWidget *parent = 0 );
                    ~GLWidget();
    void            wheelEvent ( QWheelEvent * e );

    bool            is2DView;

    QSize           minimumSizeHint() const;
    QSize           sizeHint() const;

    int             mRID;
    int             mAID;
    int             mOx;
    int             mOy;
    int             mOz;
    bool            mShiftMode;
    bool            mShowInfo;

    float           xRot;
    float           yRot;
    float           zRot;
// N/U:    float           xDist;
// N/U:    float           yDist;
// N/U:    float           zDist;
    float           dehnung;
    int             mShowTopLevels;
    int             mShowBottomLevels;
// N/U:    QPoint          lastPos;
// N/U:    QColor          qtGreen;
// N/U:    QColor          qtPurple;

// N/U:    GLfloat         rotTri, rotQuad;
    float           mScale;
    TMap *          mpMap;
    int             mTarget;
    Host *          mpHost;
// N/U:    QMap<int,int>   mQuads;


public slots:
    void            showInfo();
    void            shiftUp();
    void            shiftDown();
    void            shiftLeft();
    void            shiftRight();
    void            shiftZup();
    void            shiftZdown();
    void            showArea( QString );
    void            setXRotation( int angle );
    void            setYRotation( int angle );
    void            setZRotation( int angle );
// N/U:    void            setXDist( int distance );
// N/U:    void            setYDist( int distance );
// N/U:    void            setZDist( int distance );
    void            setScale( int scale );
    void            goRoom( const QString & );
    void            fullView();
    void            singleView();
    void            increaseTop();
    void            reduceTop();
    void            increaseBottom();
    void            reduceBottom();
    void            defaultView();
    void            sideView();
    void            topView();

signals:
    void            xRotationChanged( int angle );
    void            yRotationChanged( int angle );
    void            zRotationChanged( int angle );
// N/U:    void            xDistChanged( int distance );
// N/U:    void            yDistChanged( int distance );
// N/U:    void            zDistChanged( int distance );

protected:
    void            initializeGL();
    void            paintGL();
    void            resizeGL( int width, int height );
    void            mousePressEvent( QMouseEvent * event );
    void            mouseMoveEvent( QMouseEvent * event );
    void            mouseReleaseEvent( QMouseEvent * event );

};


#endif //_GL_WIDGET_H
