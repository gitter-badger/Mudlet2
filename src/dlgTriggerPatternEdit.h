#ifndef _DLG_TRIGGER_PATTERN_EDIT_H
#define _DLG_TRIGGER_PATTERN_EDIT_H
/***************************************************************************
 *   Copyright (C) 2008 by Heiko Koehn                                     *
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



#include <QWidget>
#include "ui_trigger_pattern_edit.h"

class dlgTriggerPatternEdit : public QWidget , public Ui::trigger_pattern_edit
{
    Q_OBJECT

public:
    dlgTriggerPatternEdit( QWidget* );
    int mRow;


signals:


public slots:


};


#endif //_DLG_TRIGGER_PATTERN_EDIT_H
