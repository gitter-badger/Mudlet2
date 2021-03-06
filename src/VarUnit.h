#ifndef _VAR_UNIT_H
#define _VAR_UNIT_H
/***************************************************************************
 *   Copyright (C) 2013 by Chris Mitchell                                  *
 *   <email Chris>                                                         *
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



#include <QMap>
#include <QSet>
#include <QString>
#include <QStringList>
#include <QTreeWidgetItem>

class TVar;

class VarUnit
{
public:
                VarUnit();
    QStringList varName( TVar * );
    QStringList shortVarName( TVar * );
    bool        varExists( TVar * );
    bool        shouldSave( QTreeWidgetItem * );
    bool        shouldSave( TVar * );
    void        addVariable( TVar * );
    void        addTempVar( QTreeWidgetItem * , TVar * );
    void        removeTempVar( QTreeWidgetItem * );
    void        removeVariable( TVar * );
    void        setBase( TVar * );
    TVar *      getBase();
    void        clear();
    void        clearTemp();
    void        buildVarTree( QTreeWidgetItem *, TVar *, bool );
    TVar *      getWVar( QTreeWidgetItem * );
    TVar *      getTVar( QTreeWidgetItem * );
    void        addTreeItem( QTreeWidgetItem *, TVar * );
    void        addSavedVar( TVar * );
    void        removeSavedVar( TVar * );
    void        removeHidden( TVar * );
    void        addHidden( TVar *, int );
    void        addHidden( QString );
    bool        isHidden( TVar * );
    bool        isSaved( TVar * );
    void        addPointer( const void * );

    QSet< QString > hidden;
    QSet< QString > hiddenByUser;



private:
    TVar *              base;
    QSet< QString >     varList;
    QMap< QTreeWidgetItem *, TVar * > wVars;
    QMap< QTreeWidgetItem *, TVar * > tVars;
    QSet< QString >     savedVars;
    QSet<const void*>   pointers;
};


#endif //_VAR_UNIT_H
