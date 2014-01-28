#ifndef _TEASY_BUTTON_BAR_H
#define _TEASY_BUTTON_BAR_H
/***************************************************************************
 *   Copyright (C) 2008-2009 by Heiko Koehn                                *
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



#include <list>
#include <QDebug>
#include <QDockWidget>
#include <QGridLayout>
#include <QString>
#include <QWidget>

class Host;
class TFlipButton;
class TAction;

class TEasyButtonBar : public QWidget
{
Q_OBJECT

public:
                     TEasyButtonBar( TAction *, QString, QWidget * pW = 0 );
    void             addButton( TFlipButton * pW );
    void             setVerticalOrientation(){ mVerticalOrientation = true; }
    void             setHorizontalOrientation(){ mVerticalOrientation = false; }
    void             clear();
    void             finalize();
    TAction *        mpTAction;
    void             recordMove(){ mRecordMove = true; }

//private:

    bool             mVerticalOrientation;
    QWidget *        mpWidget;
    QString          mName;
    bool             mRecordMove;
    QGridLayout *    mpLayout;
    int              mItemCount;
    QWidget *        mpBar;
    std::list<TFlipButton *> mButtonList;

signals:


public slots:
    void slot_pressed();

};


#endif //_TEASY_BUTTON_BAR_H
