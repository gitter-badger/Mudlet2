/********************************************************************************
** Form generated from reading UI file 'room_exits.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOM_EXITS_H
#define UI_ROOM_EXITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include "exitstreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_roomExits
{
public:
    QGridLayout *gridLayout_all;
    QGroupBox *groupBox_normalExits;
    QGridLayout *gridLayout_normalExits;
    QFrame *frame_nw;
    QGridLayout *gridLayout_nw;
    QCheckBox *noroute_nw;
    QCheckBox *stub_nw;
    QLineEdit *nw;
    QSpinBox *weight_nw;
    QRadioButton *doortype_none_nw;
    QRadioButton *doortype_open_nw;
    QRadioButton *doortype_closed_nw;
    QRadioButton *doortype_locked_nw;
    QFrame *frame_n;
    QGridLayout *gridLayout_n;
    QCheckBox *noroute_n;
    QCheckBox *stub_n;
    QLineEdit *n;
    QSpinBox *weight_n;
    QRadioButton *doortype_none_n;
    QRadioButton *doortype_open_n;
    QRadioButton *doortype_closed_n;
    QRadioButton *doortype_locked_n;
    QFrame *frame_ne;
    QGridLayout *gridLayout_ne;
    QCheckBox *noroute_ne;
    QCheckBox *stub_ne;
    QLineEdit *ne;
    QSpinBox *weight_ne;
    QRadioButton *doortype_none_ne;
    QRadioButton *doortype_open_ne;
    QRadioButton *doortype_closed_ne;
    QRadioButton *doortype_locked_ne;
    QFrame *frame_up;
    QGridLayout *gridLayout_up;
    QCheckBox *noroute_up;
    QCheckBox *stub_up;
    QLineEdit *up;
    QSpinBox *weight_up;
    QRadioButton *doortype_none_up;
    QRadioButton *doortype_open_up;
    QRadioButton *doortype_closed_up;
    QRadioButton *doortype_locked_up;
    QFrame *frame_w;
    QGridLayout *gridLayout_w;
    QCheckBox *noroute_w;
    QCheckBox *stub_w;
    QLineEdit *w;
    QSpinBox *weight_w;
    QRadioButton *doortype_none_w;
    QRadioButton *doortype_open_w;
    QRadioButton *doortype_closed_w;
    QRadioButton *doortype_locked_w;
    QFrame *frame_id;
    QGridLayout *gridLayout_id;
    QLabel *label_roomID;
    QLineEdit *roomID;
    QLabel *label_roomWeight;
    QLineEdit *roomWeight;
    QFrame *frame_e;
    QGridLayout *gridLayout_e;
    QCheckBox *noroute_e;
    QCheckBox *stub_e;
    QLineEdit *e;
    QSpinBox *weight_e;
    QRadioButton *doortype_none_e;
    QRadioButton *doortype_open_e;
    QRadioButton *doortype_closed_e;
    QRadioButton *doortype_locked_e;
    QFrame *frame_down;
    QGridLayout *gridLayout_down;
    QCheckBox *noroute_down;
    QCheckBox *stub_down;
    QLineEdit *down;
    QSpinBox *weight_down;
    QRadioButton *doortype_none_down;
    QRadioButton *doortype_open_down;
    QRadioButton *doortype_closed_down;
    QRadioButton *doortype_locked_down;
    QFrame *frame_sw;
    QGridLayout *gridLayout_sw;
    QCheckBox *noroute_sw;
    QCheckBox *stub_sw;
    QLineEdit *sw;
    QSpinBox *weight_sw;
    QRadioButton *doortype_none_sw;
    QRadioButton *doortype_open_sw;
    QRadioButton *doortype_closed_sw;
    QRadioButton *doortype_locked_sw;
    QFrame *frame_s;
    QGridLayout *gridLayout_s;
    QCheckBox *noroute_s;
    QCheckBox *stub_s;
    QLineEdit *s;
    QSpinBox *weight_s;
    QRadioButton *doortype_none_s;
    QRadioButton *doortype_open_s;
    QRadioButton *doortype_closed_s;
    QRadioButton *doortype_locked_s;
    QFrame *frame_se;
    QGridLayout *gridLayout_se;
    QCheckBox *noroute_se;
    QCheckBox *stub_se;
    QLineEdit *se;
    QSpinBox *weight_se;
    QRadioButton *doortype_none_se;
    QRadioButton *doortype_open_se;
    QRadioButton *doortype_closed_se;
    QRadioButton *doortype_locked_se;
    QFrame *frame_in;
    QGridLayout *gridLayout_in;
    QCheckBox *noroute_in;
    QCheckBox *stub_in;
    QLineEdit *in;
    QSpinBox *weight_in;
    QRadioButton *doortype_none_in;
    QRadioButton *doortype_open_in;
    QRadioButton *doortype_locked_in;
    QRadioButton *doortype_closed_in;
    QFrame *frame_out;
    QGridLayout *gridLayout_out;
    QCheckBox *noroute_out;
    QCheckBox *stub_out;
    QLineEdit *out;
    QSpinBox *weight_out;
    QRadioButton *doortype_none_out;
    QRadioButton *doortype_open_out;
    QRadioButton *doortype_closed_out;
    QRadioButton *doortype_locked_out;
    QFrame *frame_key;
    QGridLayout *gridLayout;
    QLabel *label_key;
    QCheckBox *noroute_key;
    QCheckBox *stub_key;
    QLineEdit *key;
    QSpinBox *weight_key;
    QRadioButton *doortype_none_key;
    QRadioButton *doortype_open_key;
    QRadioButton *doortype_closed_key;
    QRadioButton *doortype_locked_key;
    QSpacerItem *horizontalSpacer_controlButtons;
    QPushButton *button_save;
    QPushButton *button_cancel;
    QGroupBox *groupBox_specialExits;
    QGridLayout *gridLayout_specialExits;
    ExitsTreeWidget *specialExits;
    QPushButton *button_addSpecialExit;
    QPushButton *button_endEditing;
    QButtonGroup *doortype_n;
    QButtonGroup *doortype_ne;
    QButtonGroup *doortype_nw;
    QButtonGroup *doortype_se;
    QButtonGroup *doortype_out;
    QButtonGroup *doortype_sw;
    QButtonGroup *doortype_s;
    QButtonGroup *doortype_in;
    QButtonGroup *doortype_up;
    QButtonGroup *doortype_down;
    QButtonGroup *doortype_e;
    QButtonGroup *doortype_w;

    void setupUi(QDialog *roomExits)
    {
        if (roomExits->objectName().isEmpty())
            roomExits->setObjectName(QStringLiteral("roomExits"));
        roomExits->resize(942, 561);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/mudlet_room_exits.png"), QSize(), QIcon::Normal, QIcon::Off);
        roomExits->setWindowIcon(icon);
        gridLayout_all = new QGridLayout(roomExits);
        gridLayout_all->setObjectName(QStringLiteral("gridLayout_all"));
        gridLayout_all->setContentsMargins(6, 6, 6, 6);
        groupBox_normalExits = new QGroupBox(roomExits);
        groupBox_normalExits->setObjectName(QStringLiteral("groupBox_normalExits"));
        groupBox_normalExits->setFocusPolicy(Qt::StrongFocus);
        gridLayout_normalExits = new QGridLayout(groupBox_normalExits);
        gridLayout_normalExits->setObjectName(QStringLiteral("gridLayout_normalExits"));
        frame_nw = new QFrame(groupBox_normalExits);
        frame_nw->setObjectName(QStringLiteral("frame_nw"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_nw->sizePolicy().hasHeightForWidth());
        frame_nw->setSizePolicy(sizePolicy);
        frame_nw->setAutoFillBackground(false);
        frame_nw->setFrameShape(QFrame::StyledPanel);
        frame_nw->setFrameShadow(QFrame::Raised);
        gridLayout_nw = new QGridLayout(frame_nw);
        gridLayout_nw->setObjectName(QStringLiteral("gridLayout_nw"));
        noroute_nw = new QCheckBox(frame_nw);
        noroute_nw->setObjectName(QStringLiteral("noroute_nw"));
        noroute_nw->setCursor(QCursor(Qt::PointingHandCursor));
        noroute_nw->setFocusPolicy(Qt::NoFocus);
        noroute_nw->setCheckable(true);

        gridLayout_nw->addWidget(noroute_nw, 0, 0, 1, 1);

        stub_nw = new QCheckBox(frame_nw);
        stub_nw->setObjectName(QStringLiteral("stub_nw"));
        stub_nw->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_nw->addWidget(stub_nw, 0, 1, 1, 1);

        nw = new QLineEdit(frame_nw);
        nw->setObjectName(QStringLiteral("nw"));

        gridLayout_nw->addWidget(nw, 0, 2, 1, 4);

        weight_nw = new QSpinBox(frame_nw);
        weight_nw->setObjectName(QStringLiteral("weight_nw"));
        weight_nw->setCursor(QCursor(Qt::SizeVerCursor));
        weight_nw->setMaximum(9999);

        gridLayout_nw->addWidget(weight_nw, 1, 0, 1, 2);

        doortype_none_nw = new QRadioButton(frame_nw);
        doortype_nw = new QButtonGroup(roomExits);
        doortype_nw->setObjectName(QStringLiteral("doortype_nw"));
        doortype_nw->addButton(doortype_none_nw);
        doortype_none_nw->setObjectName(QStringLiteral("doortype_none_nw"));
        doortype_none_nw->setCursor(QCursor(Qt::PointingHandCursor));
        doortype_none_nw->setChecked(true);

        gridLayout_nw->addWidget(doortype_none_nw, 1, 2, 1, 1);

        doortype_open_nw = new QRadioButton(frame_nw);
        doortype_nw->addButton(doortype_open_nw);
        doortype_open_nw->setObjectName(QStringLiteral("doortype_open_nw"));
        doortype_open_nw->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_nw->addWidget(doortype_open_nw, 1, 3, 1, 1);

        doortype_closed_nw = new QRadioButton(frame_nw);
        doortype_nw->addButton(doortype_closed_nw);
        doortype_closed_nw->setObjectName(QStringLiteral("doortype_closed_nw"));
        doortype_closed_nw->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_nw->addWidget(doortype_closed_nw, 1, 4, 1, 1);

        doortype_locked_nw = new QRadioButton(frame_nw);
        doortype_nw->addButton(doortype_locked_nw);
        doortype_locked_nw->setObjectName(QStringLiteral("doortype_locked_nw"));
        doortype_locked_nw->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_nw->addWidget(doortype_locked_nw, 1, 5, 1, 1);


        gridLayout_normalExits->addWidget(frame_nw, 0, 0, 1, 1);

        frame_n = new QFrame(groupBox_normalExits);
        frame_n->setObjectName(QStringLiteral("frame_n"));
        sizePolicy.setHeightForWidth(frame_n->sizePolicy().hasHeightForWidth());
        frame_n->setSizePolicy(sizePolicy);
        frame_n->setFrameShape(QFrame::StyledPanel);
        frame_n->setFrameShadow(QFrame::Raised);
        gridLayout_n = new QGridLayout(frame_n);
        gridLayout_n->setObjectName(QStringLiteral("gridLayout_n"));
        noroute_n = new QCheckBox(frame_n);
        noroute_n->setObjectName(QStringLiteral("noroute_n"));
        noroute_n->setCursor(QCursor(Qt::PointingHandCursor));
        noroute_n->setFocusPolicy(Qt::NoFocus);
        noroute_n->setCheckable(true);

        gridLayout_n->addWidget(noroute_n, 0, 0, 1, 1);

        stub_n = new QCheckBox(frame_n);
        stub_n->setObjectName(QStringLiteral("stub_n"));
        stub_n->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_n->addWidget(stub_n, 0, 1, 1, 1);

        n = new QLineEdit(frame_n);
        n->setObjectName(QStringLiteral("n"));

        gridLayout_n->addWidget(n, 0, 2, 1, 4);

        weight_n = new QSpinBox(frame_n);
        weight_n->setObjectName(QStringLiteral("weight_n"));
        weight_n->setCursor(QCursor(Qt::SizeVerCursor));
        weight_n->setMaximum(9999);

        gridLayout_n->addWidget(weight_n, 1, 0, 1, 2);

        doortype_none_n = new QRadioButton(frame_n);
        doortype_n = new QButtonGroup(roomExits);
        doortype_n->setObjectName(QStringLiteral("doortype_n"));
        doortype_n->addButton(doortype_none_n);
        doortype_none_n->setObjectName(QStringLiteral("doortype_none_n"));
        doortype_none_n->setCursor(QCursor(Qt::PointingHandCursor));
        doortype_none_n->setChecked(true);

        gridLayout_n->addWidget(doortype_none_n, 1, 2, 1, 1);

        doortype_open_n = new QRadioButton(frame_n);
        doortype_n->addButton(doortype_open_n);
        doortype_open_n->setObjectName(QStringLiteral("doortype_open_n"));
        doortype_open_n->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_n->addWidget(doortype_open_n, 1, 3, 1, 1);

        doortype_closed_n = new QRadioButton(frame_n);
        doortype_n->addButton(doortype_closed_n);
        doortype_closed_n->setObjectName(QStringLiteral("doortype_closed_n"));
        doortype_closed_n->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_n->addWidget(doortype_closed_n, 1, 4, 1, 1);

        doortype_locked_n = new QRadioButton(frame_n);
        doortype_n->addButton(doortype_locked_n);
        doortype_locked_n->setObjectName(QStringLiteral("doortype_locked_n"));
        doortype_locked_n->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_n->addWidget(doortype_locked_n, 1, 5, 1, 1);


        gridLayout_normalExits->addWidget(frame_n, 0, 1, 1, 1);

        frame_ne = new QFrame(groupBox_normalExits);
        frame_ne->setObjectName(QStringLiteral("frame_ne"));
        sizePolicy.setHeightForWidth(frame_ne->sizePolicy().hasHeightForWidth());
        frame_ne->setSizePolicy(sizePolicy);
        frame_ne->setFrameShape(QFrame::StyledPanel);
        frame_ne->setFrameShadow(QFrame::Raised);
        gridLayout_ne = new QGridLayout(frame_ne);
        gridLayout_ne->setObjectName(QStringLiteral("gridLayout_ne"));
        noroute_ne = new QCheckBox(frame_ne);
        noroute_ne->setObjectName(QStringLiteral("noroute_ne"));
        noroute_ne->setCursor(QCursor(Qt::PointingHandCursor));
        noroute_ne->setFocusPolicy(Qt::NoFocus);
        noroute_ne->setCheckable(true);

        gridLayout_ne->addWidget(noroute_ne, 0, 0, 1, 1);

        stub_ne = new QCheckBox(frame_ne);
        stub_ne->setObjectName(QStringLiteral("stub_ne"));
        stub_ne->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_ne->addWidget(stub_ne, 0, 1, 1, 1);

        ne = new QLineEdit(frame_ne);
        ne->setObjectName(QStringLiteral("ne"));

        gridLayout_ne->addWidget(ne, 0, 2, 1, 4);

        weight_ne = new QSpinBox(frame_ne);
        weight_ne->setObjectName(QStringLiteral("weight_ne"));
        weight_ne->setCursor(QCursor(Qt::SizeVerCursor));
        weight_ne->setMaximum(9999);

        gridLayout_ne->addWidget(weight_ne, 1, 0, 1, 2);

        doortype_none_ne = new QRadioButton(frame_ne);
        doortype_ne = new QButtonGroup(roomExits);
        doortype_ne->setObjectName(QStringLiteral("doortype_ne"));
        doortype_ne->addButton(doortype_none_ne);
        doortype_none_ne->setObjectName(QStringLiteral("doortype_none_ne"));
        doortype_none_ne->setCursor(QCursor(Qt::PointingHandCursor));
        doortype_none_ne->setChecked(true);

        gridLayout_ne->addWidget(doortype_none_ne, 1, 2, 1, 1);

        doortype_open_ne = new QRadioButton(frame_ne);
        doortype_ne->addButton(doortype_open_ne);
        doortype_open_ne->setObjectName(QStringLiteral("doortype_open_ne"));
        doortype_open_ne->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_ne->addWidget(doortype_open_ne, 1, 3, 1, 1);

        doortype_closed_ne = new QRadioButton(frame_ne);
        doortype_ne->addButton(doortype_closed_ne);
        doortype_closed_ne->setObjectName(QStringLiteral("doortype_closed_ne"));
        doortype_closed_ne->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_ne->addWidget(doortype_closed_ne, 1, 4, 1, 1);

        doortype_locked_ne = new QRadioButton(frame_ne);
        doortype_ne->addButton(doortype_locked_ne);
        doortype_locked_ne->setObjectName(QStringLiteral("doortype_locked_ne"));
        doortype_locked_ne->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_ne->addWidget(doortype_locked_ne, 1, 5, 1, 1);


        gridLayout_normalExits->addWidget(frame_ne, 0, 2, 1, 1);

        frame_up = new QFrame(groupBox_normalExits);
        frame_up->setObjectName(QStringLiteral("frame_up"));
        sizePolicy.setHeightForWidth(frame_up->sizePolicy().hasHeightForWidth());
        frame_up->setSizePolicy(sizePolicy);
        frame_up->setFrameShape(QFrame::StyledPanel);
        frame_up->setFrameShadow(QFrame::Raised);
        gridLayout_up = new QGridLayout(frame_up);
        gridLayout_up->setObjectName(QStringLiteral("gridLayout_up"));
        noroute_up = new QCheckBox(frame_up);
        noroute_up->setObjectName(QStringLiteral("noroute_up"));
        noroute_up->setCursor(QCursor(Qt::PointingHandCursor));
        noroute_up->setFocusPolicy(Qt::NoFocus);
        noroute_up->setCheckable(true);

        gridLayout_up->addWidget(noroute_up, 0, 0, 1, 1);

        stub_up = new QCheckBox(frame_up);
        stub_up->setObjectName(QStringLiteral("stub_up"));
        stub_up->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_up->addWidget(stub_up, 0, 1, 1, 1);

        up = new QLineEdit(frame_up);
        up->setObjectName(QStringLiteral("up"));

        gridLayout_up->addWidget(up, 0, 2, 1, 4);

        weight_up = new QSpinBox(frame_up);
        weight_up->setObjectName(QStringLiteral("weight_up"));
        weight_up->setCursor(QCursor(Qt::SizeVerCursor));
        weight_up->setMaximum(9999);

        gridLayout_up->addWidget(weight_up, 1, 0, 1, 2);

        doortype_none_up = new QRadioButton(frame_up);
        doortype_up = new QButtonGroup(roomExits);
        doortype_up->setObjectName(QStringLiteral("doortype_up"));
        doortype_up->addButton(doortype_none_up);
        doortype_none_up->setObjectName(QStringLiteral("doortype_none_up"));
        doortype_none_up->setCursor(QCursor(Qt::PointingHandCursor));
        doortype_none_up->setChecked(true);

        gridLayout_up->addWidget(doortype_none_up, 1, 2, 1, 1);

        doortype_open_up = new QRadioButton(frame_up);
        doortype_up->addButton(doortype_open_up);
        doortype_open_up->setObjectName(QStringLiteral("doortype_open_up"));
        doortype_open_up->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_up->addWidget(doortype_open_up, 1, 3, 1, 1);

        doortype_closed_up = new QRadioButton(frame_up);
        doortype_up->addButton(doortype_closed_up);
        doortype_closed_up->setObjectName(QStringLiteral("doortype_closed_up"));
        doortype_closed_up->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_up->addWidget(doortype_closed_up, 1, 4, 1, 1);

        doortype_locked_up = new QRadioButton(frame_up);
        doortype_up->addButton(doortype_locked_up);
        doortype_locked_up->setObjectName(QStringLiteral("doortype_locked_up"));
        doortype_locked_up->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_up->addWidget(doortype_locked_up, 1, 5, 1, 1);


        gridLayout_normalExits->addWidget(frame_up, 0, 3, 1, 1);

        frame_w = new QFrame(groupBox_normalExits);
        frame_w->setObjectName(QStringLiteral("frame_w"));
        sizePolicy.setHeightForWidth(frame_w->sizePolicy().hasHeightForWidth());
        frame_w->setSizePolicy(sizePolicy);
        frame_w->setFrameShape(QFrame::StyledPanel);
        frame_w->setFrameShadow(QFrame::Raised);
        gridLayout_w = new QGridLayout(frame_w);
        gridLayout_w->setObjectName(QStringLiteral("gridLayout_w"));
        noroute_w = new QCheckBox(frame_w);
        noroute_w->setObjectName(QStringLiteral("noroute_w"));
        noroute_w->setCursor(QCursor(Qt::PointingHandCursor));
        noroute_w->setFocusPolicy(Qt::NoFocus);
        noroute_w->setCheckable(true);

        gridLayout_w->addWidget(noroute_w, 0, 0, 1, 1);

        stub_w = new QCheckBox(frame_w);
        stub_w->setObjectName(QStringLiteral("stub_w"));
        stub_w->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_w->addWidget(stub_w, 0, 1, 1, 1);

        w = new QLineEdit(frame_w);
        w->setObjectName(QStringLiteral("w"));

        gridLayout_w->addWidget(w, 0, 2, 1, 4);

        weight_w = new QSpinBox(frame_w);
        weight_w->setObjectName(QStringLiteral("weight_w"));
        weight_w->setCursor(QCursor(Qt::SizeVerCursor));
        weight_w->setMaximum(9999);

        gridLayout_w->addWidget(weight_w, 1, 0, 1, 2);

        doortype_none_w = new QRadioButton(frame_w);
        doortype_w = new QButtonGroup(roomExits);
        doortype_w->setObjectName(QStringLiteral("doortype_w"));
        doortype_w->addButton(doortype_none_w);
        doortype_none_w->setObjectName(QStringLiteral("doortype_none_w"));
        doortype_none_w->setCursor(QCursor(Qt::PointingHandCursor));
        doortype_none_w->setChecked(true);

        gridLayout_w->addWidget(doortype_none_w, 1, 2, 1, 1);

        doortype_open_w = new QRadioButton(frame_w);
        doortype_w->addButton(doortype_open_w);
        doortype_open_w->setObjectName(QStringLiteral("doortype_open_w"));
        doortype_open_w->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_w->addWidget(doortype_open_w, 1, 3, 1, 1);

        doortype_closed_w = new QRadioButton(frame_w);
        doortype_w->addButton(doortype_closed_w);
        doortype_closed_w->setObjectName(QStringLiteral("doortype_closed_w"));
        doortype_closed_w->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_w->addWidget(doortype_closed_w, 1, 4, 1, 1);

        doortype_locked_w = new QRadioButton(frame_w);
        doortype_w->addButton(doortype_locked_w);
        doortype_locked_w->setObjectName(QStringLiteral("doortype_locked_w"));
        doortype_locked_w->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_w->addWidget(doortype_locked_w, 1, 5, 1, 1);


        gridLayout_normalExits->addWidget(frame_w, 1, 0, 1, 1);

        frame_id = new QFrame(groupBox_normalExits);
        frame_id->setObjectName(QStringLiteral("frame_id"));
        sizePolicy.setHeightForWidth(frame_id->sizePolicy().hasHeightForWidth());
        frame_id->setSizePolicy(sizePolicy);
        frame_id->setCursor(QCursor(Qt::ForbiddenCursor));
        frame_id->setFrameShape(QFrame::StyledPanel);
        frame_id->setFrameShadow(QFrame::Plain);
        gridLayout_id = new QGridLayout(frame_id);
        gridLayout_id->setObjectName(QStringLiteral("gridLayout_id"));
        label_roomID = new QLabel(frame_id);
        label_roomID->setObjectName(QStringLiteral("label_roomID"));
        label_roomID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_id->addWidget(label_roomID, 0, 0, 1, 1);

        roomID = new QLineEdit(frame_id);
        roomID->setObjectName(QStringLiteral("roomID"));
        roomID->setCursor(QCursor(Qt::ForbiddenCursor));
        roomID->setReadOnly(true);

        gridLayout_id->addWidget(roomID, 0, 1, 1, 1);

        label_roomWeight = new QLabel(frame_id);
        label_roomWeight->setObjectName(QStringLiteral("label_roomWeight"));
        label_roomWeight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_id->addWidget(label_roomWeight, 1, 0, 1, 1);

        roomWeight = new QLineEdit(frame_id);
        roomWeight->setObjectName(QStringLiteral("roomWeight"));
        roomWeight->setCursor(QCursor(Qt::ForbiddenCursor));
        roomWeight->setReadOnly(true);

        gridLayout_id->addWidget(roomWeight, 1, 1, 1, 1);

        gridLayout_id->setColumnStretch(0, 4);
        gridLayout_id->setColumnStretch(1, 5);

        gridLayout_normalExits->addWidget(frame_id, 1, 1, 1, 1);

        frame_e = new QFrame(groupBox_normalExits);
        frame_e->setObjectName(QStringLiteral("frame_e"));
        sizePolicy.setHeightForWidth(frame_e->sizePolicy().hasHeightForWidth());
        frame_e->setSizePolicy(sizePolicy);
        frame_e->setFrameShape(QFrame::StyledPanel);
        frame_e->setFrameShadow(QFrame::Raised);
        gridLayout_e = new QGridLayout(frame_e);
        gridLayout_e->setObjectName(QStringLiteral("gridLayout_e"));
        noroute_e = new QCheckBox(frame_e);
        noroute_e->setObjectName(QStringLiteral("noroute_e"));
        noroute_e->setCursor(QCursor(Qt::PointingHandCursor));
        noroute_e->setFocusPolicy(Qt::NoFocus);
        noroute_e->setCheckable(true);

        gridLayout_e->addWidget(noroute_e, 0, 0, 1, 1);

        stub_e = new QCheckBox(frame_e);
        stub_e->setObjectName(QStringLiteral("stub_e"));
        stub_e->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_e->addWidget(stub_e, 0, 1, 1, 1);

        e = new QLineEdit(frame_e);
        e->setObjectName(QStringLiteral("e"));

        gridLayout_e->addWidget(e, 0, 2, 1, 4);

        weight_e = new QSpinBox(frame_e);
        weight_e->setObjectName(QStringLiteral("weight_e"));
        weight_e->setMaximum(9999);

        gridLayout_e->addWidget(weight_e, 1, 0, 1, 2);

        doortype_none_e = new QRadioButton(frame_e);
        doortype_e = new QButtonGroup(roomExits);
        doortype_e->setObjectName(QStringLiteral("doortype_e"));
        doortype_e->addButton(doortype_none_e);
        doortype_none_e->setObjectName(QStringLiteral("doortype_none_e"));
        doortype_none_e->setCursor(QCursor(Qt::PointingHandCursor));
        doortype_none_e->setChecked(true);

        gridLayout_e->addWidget(doortype_none_e, 1, 2, 1, 1);

        doortype_open_e = new QRadioButton(frame_e);
        doortype_e->addButton(doortype_open_e);
        doortype_open_e->setObjectName(QStringLiteral("doortype_open_e"));
        doortype_open_e->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_e->addWidget(doortype_open_e, 1, 3, 1, 1);

        doortype_closed_e = new QRadioButton(frame_e);
        doortype_e->addButton(doortype_closed_e);
        doortype_closed_e->setObjectName(QStringLiteral("doortype_closed_e"));
        doortype_closed_e->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_e->addWidget(doortype_closed_e, 1, 4, 1, 1);

        doortype_locked_e = new QRadioButton(frame_e);
        doortype_e->addButton(doortype_locked_e);
        doortype_locked_e->setObjectName(QStringLiteral("doortype_locked_e"));
        doortype_locked_e->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_e->addWidget(doortype_locked_e, 1, 5, 1, 1);


        gridLayout_normalExits->addWidget(frame_e, 1, 2, 1, 1);

        frame_down = new QFrame(groupBox_normalExits);
        frame_down->setObjectName(QStringLiteral("frame_down"));
        sizePolicy.setHeightForWidth(frame_down->sizePolicy().hasHeightForWidth());
        frame_down->setSizePolicy(sizePolicy);
        frame_down->setFrameShape(QFrame::StyledPanel);
        frame_down->setFrameShadow(QFrame::Raised);
        gridLayout_down = new QGridLayout(frame_down);
        gridLayout_down->setObjectName(QStringLiteral("gridLayout_down"));
        noroute_down = new QCheckBox(frame_down);
        noroute_down->setObjectName(QStringLiteral("noroute_down"));
        noroute_down->setCursor(QCursor(Qt::PointingHandCursor));
        noroute_down->setFocusPolicy(Qt::NoFocus);
        noroute_down->setCheckable(true);

        gridLayout_down->addWidget(noroute_down, 0, 0, 1, 1);

        stub_down = new QCheckBox(frame_down);
        stub_down->setObjectName(QStringLiteral("stub_down"));
        stub_down->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_down->addWidget(stub_down, 0, 1, 1, 1);

        down = new QLineEdit(frame_down);
        down->setObjectName(QStringLiteral("down"));

        gridLayout_down->addWidget(down, 0, 2, 1, 4);

        weight_down = new QSpinBox(frame_down);
        weight_down->setObjectName(QStringLiteral("weight_down"));
        weight_down->setCursor(QCursor(Qt::SizeVerCursor));
        weight_down->setMaximum(9999);

        gridLayout_down->addWidget(weight_down, 1, 0, 1, 2);

        doortype_none_down = new QRadioButton(frame_down);
        doortype_down = new QButtonGroup(roomExits);
        doortype_down->setObjectName(QStringLiteral("doortype_down"));
        doortype_down->addButton(doortype_none_down);
        doortype_none_down->setObjectName(QStringLiteral("doortype_none_down"));
        doortype_none_down->setCursor(QCursor(Qt::PointingHandCursor));
        doortype_none_down->setChecked(true);

        gridLayout_down->addWidget(doortype_none_down, 1, 2, 1, 1);

        doortype_open_down = new QRadioButton(frame_down);
        doortype_down->addButton(doortype_open_down);
        doortype_open_down->setObjectName(QStringLiteral("doortype_open_down"));
        doortype_open_down->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_down->addWidget(doortype_open_down, 1, 3, 1, 1);

        doortype_closed_down = new QRadioButton(frame_down);
        doortype_down->addButton(doortype_closed_down);
        doortype_closed_down->setObjectName(QStringLiteral("doortype_closed_down"));
        doortype_closed_down->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_down->addWidget(doortype_closed_down, 1, 4, 1, 1);

        doortype_locked_down = new QRadioButton(frame_down);
        doortype_down->addButton(doortype_locked_down);
        doortype_locked_down->setObjectName(QStringLiteral("doortype_locked_down"));
        doortype_locked_down->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_down->addWidget(doortype_locked_down, 1, 5, 1, 1);


        gridLayout_normalExits->addWidget(frame_down, 1, 3, 1, 1);

        frame_sw = new QFrame(groupBox_normalExits);
        frame_sw->setObjectName(QStringLiteral("frame_sw"));
        sizePolicy.setHeightForWidth(frame_sw->sizePolicy().hasHeightForWidth());
        frame_sw->setSizePolicy(sizePolicy);
        frame_sw->setFrameShape(QFrame::StyledPanel);
        frame_sw->setFrameShadow(QFrame::Raised);
        gridLayout_sw = new QGridLayout(frame_sw);
        gridLayout_sw->setObjectName(QStringLiteral("gridLayout_sw"));
        noroute_sw = new QCheckBox(frame_sw);
        noroute_sw->setObjectName(QStringLiteral("noroute_sw"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(noroute_sw->sizePolicy().hasHeightForWidth());
        noroute_sw->setSizePolicy(sizePolicy1);
        noroute_sw->setCursor(QCursor(Qt::PointingHandCursor));
        noroute_sw->setFocusPolicy(Qt::NoFocus);
        noroute_sw->setCheckable(true);

        gridLayout_sw->addWidget(noroute_sw, 0, 0, 1, 1);

        stub_sw = new QCheckBox(frame_sw);
        stub_sw->setObjectName(QStringLiteral("stub_sw"));
        sizePolicy1.setHeightForWidth(stub_sw->sizePolicy().hasHeightForWidth());
        stub_sw->setSizePolicy(sizePolicy1);
        stub_sw->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_sw->addWidget(stub_sw, 0, 1, 1, 1);

        sw = new QLineEdit(frame_sw);
        sw->setObjectName(QStringLiteral("sw"));

        gridLayout_sw->addWidget(sw, 0, 2, 1, 4);

        weight_sw = new QSpinBox(frame_sw);
        weight_sw->setObjectName(QStringLiteral("weight_sw"));
        sizePolicy1.setHeightForWidth(weight_sw->sizePolicy().hasHeightForWidth());
        weight_sw->setSizePolicy(sizePolicy1);
        weight_sw->setCursor(QCursor(Qt::SizeVerCursor));
        weight_sw->setMaximum(9999);

        gridLayout_sw->addWidget(weight_sw, 1, 0, 1, 2);

        doortype_none_sw = new QRadioButton(frame_sw);
        doortype_sw = new QButtonGroup(roomExits);
        doortype_sw->setObjectName(QStringLiteral("doortype_sw"));
        doortype_sw->addButton(doortype_none_sw);
        doortype_none_sw->setObjectName(QStringLiteral("doortype_none_sw"));
        doortype_none_sw->setCursor(QCursor(Qt::PointingHandCursor));
        doortype_none_sw->setChecked(true);

        gridLayout_sw->addWidget(doortype_none_sw, 1, 2, 1, 1);

        doortype_open_sw = new QRadioButton(frame_sw);
        doortype_sw->addButton(doortype_open_sw);
        doortype_open_sw->setObjectName(QStringLiteral("doortype_open_sw"));
        doortype_open_sw->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_sw->addWidget(doortype_open_sw, 1, 3, 1, 1);

        doortype_closed_sw = new QRadioButton(frame_sw);
        doortype_sw->addButton(doortype_closed_sw);
        doortype_closed_sw->setObjectName(QStringLiteral("doortype_closed_sw"));
        doortype_closed_sw->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_sw->addWidget(doortype_closed_sw, 1, 4, 1, 1);

        doortype_locked_sw = new QRadioButton(frame_sw);
        doortype_sw->addButton(doortype_locked_sw);
        doortype_locked_sw->setObjectName(QStringLiteral("doortype_locked_sw"));
        doortype_locked_sw->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_sw->addWidget(doortype_locked_sw, 1, 5, 1, 1);


        gridLayout_normalExits->addWidget(frame_sw, 2, 0, 1, 1);

        frame_s = new QFrame(groupBox_normalExits);
        frame_s->setObjectName(QStringLiteral("frame_s"));
        sizePolicy.setHeightForWidth(frame_s->sizePolicy().hasHeightForWidth());
        frame_s->setSizePolicy(sizePolicy);
        frame_s->setFrameShape(QFrame::StyledPanel);
        frame_s->setFrameShadow(QFrame::Raised);
        gridLayout_s = new QGridLayout(frame_s);
        gridLayout_s->setObjectName(QStringLiteral("gridLayout_s"));
        noroute_s = new QCheckBox(frame_s);
        noroute_s->setObjectName(QStringLiteral("noroute_s"));
        noroute_s->setCursor(QCursor(Qt::PointingHandCursor));
        noroute_s->setFocusPolicy(Qt::NoFocus);
        noroute_s->setCheckable(true);

        gridLayout_s->addWidget(noroute_s, 0, 0, 1, 1);

        stub_s = new QCheckBox(frame_s);
        stub_s->setObjectName(QStringLiteral("stub_s"));
        stub_s->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_s->addWidget(stub_s, 0, 1, 1, 1);

        s = new QLineEdit(frame_s);
        s->setObjectName(QStringLiteral("s"));

        gridLayout_s->addWidget(s, 0, 2, 1, 4);

        weight_s = new QSpinBox(frame_s);
        weight_s->setObjectName(QStringLiteral("weight_s"));
        weight_s->setCursor(QCursor(Qt::SizeVerCursor));
        weight_s->setMaximum(9999);

        gridLayout_s->addWidget(weight_s, 1, 0, 1, 2);

        doortype_none_s = new QRadioButton(frame_s);
        doortype_s = new QButtonGroup(roomExits);
        doortype_s->setObjectName(QStringLiteral("doortype_s"));
        doortype_s->addButton(doortype_none_s);
        doortype_none_s->setObjectName(QStringLiteral("doortype_none_s"));
        doortype_none_s->setCursor(QCursor(Qt::PointingHandCursor));
        doortype_none_s->setChecked(true);

        gridLayout_s->addWidget(doortype_none_s, 1, 2, 1, 1);

        doortype_open_s = new QRadioButton(frame_s);
        doortype_s->addButton(doortype_open_s);
        doortype_open_s->setObjectName(QStringLiteral("doortype_open_s"));
        doortype_open_s->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_s->addWidget(doortype_open_s, 1, 3, 1, 1);

        doortype_closed_s = new QRadioButton(frame_s);
        doortype_s->addButton(doortype_closed_s);
        doortype_closed_s->setObjectName(QStringLiteral("doortype_closed_s"));
        doortype_closed_s->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_s->addWidget(doortype_closed_s, 1, 4, 1, 1);

        doortype_locked_s = new QRadioButton(frame_s);
        doortype_s->addButton(doortype_locked_s);
        doortype_locked_s->setObjectName(QStringLiteral("doortype_locked_s"));
        doortype_locked_s->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_s->addWidget(doortype_locked_s, 1, 5, 1, 1);


        gridLayout_normalExits->addWidget(frame_s, 2, 1, 1, 1);

        frame_se = new QFrame(groupBox_normalExits);
        frame_se->setObjectName(QStringLiteral("frame_se"));
        sizePolicy.setHeightForWidth(frame_se->sizePolicy().hasHeightForWidth());
        frame_se->setSizePolicy(sizePolicy);
        frame_se->setFrameShape(QFrame::StyledPanel);
        frame_se->setFrameShadow(QFrame::Raised);
        gridLayout_se = new QGridLayout(frame_se);
        gridLayout_se->setObjectName(QStringLiteral("gridLayout_se"));
        noroute_se = new QCheckBox(frame_se);
        noroute_se->setObjectName(QStringLiteral("noroute_se"));
        noroute_se->setCursor(QCursor(Qt::PointingHandCursor));
        noroute_se->setFocusPolicy(Qt::NoFocus);
        noroute_se->setCheckable(true);

        gridLayout_se->addWidget(noroute_se, 0, 0, 1, 1);

        stub_se = new QCheckBox(frame_se);
        stub_se->setObjectName(QStringLiteral("stub_se"));
        stub_se->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_se->addWidget(stub_se, 0, 1, 1, 1);

        se = new QLineEdit(frame_se);
        se->setObjectName(QStringLiteral("se"));

        gridLayout_se->addWidget(se, 0, 2, 1, 4);

        weight_se = new QSpinBox(frame_se);
        weight_se->setObjectName(QStringLiteral("weight_se"));
        weight_se->setCursor(QCursor(Qt::SizeVerCursor));
        weight_se->setMaximum(9999);

        gridLayout_se->addWidget(weight_se, 1, 0, 1, 2);

        doortype_none_se = new QRadioButton(frame_se);
        doortype_se = new QButtonGroup(roomExits);
        doortype_se->setObjectName(QStringLiteral("doortype_se"));
        doortype_se->addButton(doortype_none_se);
        doortype_none_se->setObjectName(QStringLiteral("doortype_none_se"));
        doortype_none_se->setCursor(QCursor(Qt::PointingHandCursor));
        doortype_none_se->setChecked(true);

        gridLayout_se->addWidget(doortype_none_se, 1, 2, 1, 1);

        doortype_open_se = new QRadioButton(frame_se);
        doortype_se->addButton(doortype_open_se);
        doortype_open_se->setObjectName(QStringLiteral("doortype_open_se"));
        doortype_open_se->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_se->addWidget(doortype_open_se, 1, 3, 1, 1);

        doortype_closed_se = new QRadioButton(frame_se);
        doortype_se->addButton(doortype_closed_se);
        doortype_closed_se->setObjectName(QStringLiteral("doortype_closed_se"));
        doortype_closed_se->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_se->addWidget(doortype_closed_se, 1, 4, 1, 1);

        doortype_locked_se = new QRadioButton(frame_se);
        doortype_se->addButton(doortype_locked_se);
        doortype_locked_se->setObjectName(QStringLiteral("doortype_locked_se"));
        doortype_locked_se->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_se->addWidget(doortype_locked_se, 1, 5, 1, 1);


        gridLayout_normalExits->addWidget(frame_se, 2, 2, 1, 1);

        frame_in = new QFrame(groupBox_normalExits);
        frame_in->setObjectName(QStringLiteral("frame_in"));
        sizePolicy.setHeightForWidth(frame_in->sizePolicy().hasHeightForWidth());
        frame_in->setSizePolicy(sizePolicy);
        frame_in->setFrameShape(QFrame::StyledPanel);
        frame_in->setFrameShadow(QFrame::Raised);
        gridLayout_in = new QGridLayout(frame_in);
        gridLayout_in->setObjectName(QStringLiteral("gridLayout_in"));
        noroute_in = new QCheckBox(frame_in);
        noroute_in->setObjectName(QStringLiteral("noroute_in"));
        noroute_in->setCursor(QCursor(Qt::PointingHandCursor));
        noroute_in->setFocusPolicy(Qt::NoFocus);
        noroute_in->setCheckable(true);

        gridLayout_in->addWidget(noroute_in, 0, 0, 1, 1);

        stub_in = new QCheckBox(frame_in);
        stub_in->setObjectName(QStringLiteral("stub_in"));
        stub_in->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_in->addWidget(stub_in, 0, 1, 1, 1);

        in = new QLineEdit(frame_in);
        in->setObjectName(QStringLiteral("in"));

        gridLayout_in->addWidget(in, 0, 2, 1, 4);

        weight_in = new QSpinBox(frame_in);
        weight_in->setObjectName(QStringLiteral("weight_in"));
        weight_in->setCursor(QCursor(Qt::SizeVerCursor));
        weight_in->setMaximum(9999);

        gridLayout_in->addWidget(weight_in, 1, 0, 1, 2);

        doortype_none_in = new QRadioButton(frame_in);
        doortype_in = new QButtonGroup(roomExits);
        doortype_in->setObjectName(QStringLiteral("doortype_in"));
        doortype_in->addButton(doortype_none_in);
        doortype_none_in->setObjectName(QStringLiteral("doortype_none_in"));
        doortype_none_in->setCursor(QCursor(Qt::PointingHandCursor));
        doortype_none_in->setChecked(true);

        gridLayout_in->addWidget(doortype_none_in, 1, 2, 1, 1);

        doortype_open_in = new QRadioButton(frame_in);
        doortype_in->addButton(doortype_open_in);
        doortype_open_in->setObjectName(QStringLiteral("doortype_open_in"));
        doortype_open_in->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_in->addWidget(doortype_open_in, 1, 3, 1, 1);

        doortype_locked_in = new QRadioButton(frame_in);
        doortype_in->addButton(doortype_locked_in);
        doortype_locked_in->setObjectName(QStringLiteral("doortype_locked_in"));
        doortype_locked_in->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_in->addWidget(doortype_locked_in, 1, 4, 1, 1);

        doortype_closed_in = new QRadioButton(frame_in);
        doortype_in->addButton(doortype_closed_in);
        doortype_closed_in->setObjectName(QStringLiteral("doortype_closed_in"));
        doortype_closed_in->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_in->addWidget(doortype_closed_in, 1, 5, 1, 1);


        gridLayout_normalExits->addWidget(frame_in, 2, 3, 1, 1);

        frame_out = new QFrame(groupBox_normalExits);
        frame_out->setObjectName(QStringLiteral("frame_out"));
        sizePolicy.setHeightForWidth(frame_out->sizePolicy().hasHeightForWidth());
        frame_out->setSizePolicy(sizePolicy);
        frame_out->setFrameShape(QFrame::StyledPanel);
        frame_out->setFrameShadow(QFrame::Raised);
        gridLayout_out = new QGridLayout(frame_out);
        gridLayout_out->setObjectName(QStringLiteral("gridLayout_out"));
        noroute_out = new QCheckBox(frame_out);
        noroute_out->setObjectName(QStringLiteral("noroute_out"));
        noroute_out->setCursor(QCursor(Qt::PointingHandCursor));
        noroute_out->setFocusPolicy(Qt::NoFocus);
        noroute_out->setCheckable(true);

        gridLayout_out->addWidget(noroute_out, 0, 0, 1, 1);

        stub_out = new QCheckBox(frame_out);
        stub_out->setObjectName(QStringLiteral("stub_out"));
        stub_out->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_out->addWidget(stub_out, 0, 1, 1, 1);

        out = new QLineEdit(frame_out);
        out->setObjectName(QStringLiteral("out"));

        gridLayout_out->addWidget(out, 0, 2, 1, 4);

        weight_out = new QSpinBox(frame_out);
        weight_out->setObjectName(QStringLiteral("weight_out"));
        weight_out->setCursor(QCursor(Qt::SizeVerCursor));
        weight_out->setMaximum(9999);

        gridLayout_out->addWidget(weight_out, 1, 0, 1, 2);

        doortype_none_out = new QRadioButton(frame_out);
        doortype_out = new QButtonGroup(roomExits);
        doortype_out->setObjectName(QStringLiteral("doortype_out"));
        doortype_out->addButton(doortype_none_out);
        doortype_none_out->setObjectName(QStringLiteral("doortype_none_out"));
        doortype_none_out->setCursor(QCursor(Qt::PointingHandCursor));
        doortype_none_out->setChecked(true);

        gridLayout_out->addWidget(doortype_none_out, 1, 2, 1, 1);

        doortype_open_out = new QRadioButton(frame_out);
        doortype_out->addButton(doortype_open_out);
        doortype_open_out->setObjectName(QStringLiteral("doortype_open_out"));
        doortype_open_out->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_out->addWidget(doortype_open_out, 1, 3, 1, 1);

        doortype_closed_out = new QRadioButton(frame_out);
        doortype_out->addButton(doortype_closed_out);
        doortype_closed_out->setObjectName(QStringLiteral("doortype_closed_out"));
        doortype_closed_out->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_out->addWidget(doortype_closed_out, 1, 4, 1, 1);

        doortype_locked_out = new QRadioButton(frame_out);
        doortype_out->addButton(doortype_locked_out);
        doortype_locked_out->setObjectName(QStringLiteral("doortype_locked_out"));
        doortype_locked_out->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_out->addWidget(doortype_locked_out, 1, 5, 1, 1);


        gridLayout_normalExits->addWidget(frame_out, 3, 3, 1, 1);

        frame_key = new QFrame(groupBox_normalExits);
        frame_key->setObjectName(QStringLiteral("frame_key"));
        frame_key->setEnabled(false);
        sizePolicy.setHeightForWidth(frame_key->sizePolicy().hasHeightForWidth());
        frame_key->setSizePolicy(sizePolicy);
        frame_key->setCursor(QCursor(Qt::WhatsThisCursor));
        gridLayout = new QGridLayout(frame_key);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_key = new QLabel(frame_key);
        label_key->setObjectName(QStringLiteral("label_key"));
        label_key->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(label_key, 0, 0, 1, 1);

        noroute_key = new QCheckBox(frame_key);
        noroute_key->setObjectName(QStringLiteral("noroute_key"));
        QFont font;
        font.setPointSize(8);
        noroute_key->setFont(font);
        noroute_key->setFocusPolicy(Qt::NoFocus);
        noroute_key->setCheckable(true);

        gridLayout->addWidget(noroute_key, 1, 0, 1, 1);

        stub_key = new QCheckBox(frame_key);
        stub_key->setObjectName(QStringLiteral("stub_key"));
        stub_key->setFont(font);

        gridLayout->addWidget(stub_key, 1, 1, 1, 1);

        key = new QLineEdit(frame_key);
        key->setObjectName(QStringLiteral("key"));
        key->setFont(font);

        gridLayout->addWidget(key, 1, 2, 1, 4);

        weight_key = new QSpinBox(frame_key);
        weight_key->setObjectName(QStringLiteral("weight_key"));
        weight_key->setFont(font);
        weight_key->setMaximum(9999);

        gridLayout->addWidget(weight_key, 2, 0, 1, 2);

        doortype_none_key = new QRadioButton(frame_key);
        doortype_none_key->setObjectName(QStringLiteral("doortype_none_key"));
        doortype_none_key->setFont(font);
        doortype_none_key->setChecked(true);

        gridLayout->addWidget(doortype_none_key, 2, 2, 1, 1);

        doortype_open_key = new QRadioButton(frame_key);
        doortype_open_key->setObjectName(QStringLiteral("doortype_open_key"));
        doortype_open_key->setFont(font);

        gridLayout->addWidget(doortype_open_key, 2, 3, 1, 1);

        doortype_closed_key = new QRadioButton(frame_key);
        doortype_closed_key->setObjectName(QStringLiteral("doortype_closed_key"));
        doortype_closed_key->setFont(font);

        gridLayout->addWidget(doortype_closed_key, 2, 4, 1, 1);

        doortype_locked_key = new QRadioButton(frame_key);
        doortype_locked_key->setObjectName(QStringLiteral("doortype_locked_key"));
        doortype_locked_key->setFont(font);

        gridLayout->addWidget(doortype_locked_key, 2, 5, 1, 1);


        gridLayout_normalExits->addWidget(frame_key, 3, 0, 1, 3);

        gridLayout_normalExits->setRowStretch(0, 1);
        gridLayout_normalExits->setRowStretch(1, 1);
        gridLayout_normalExits->setRowStretch(2, 1);
        gridLayout_normalExits->setRowStretch(3, 1);
        gridLayout_normalExits->setColumnStretch(0, 1);
        gridLayout_normalExits->setColumnStretch(1, 1);
        gridLayout_normalExits->setColumnStretch(2, 1);
        gridLayout_normalExits->setColumnStretch(3, 1);

        gridLayout_all->addWidget(groupBox_normalExits, 0, 0, 1, 5);

        horizontalSpacer_controlButtons = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_all->addItem(horizontalSpacer_controlButtons, 2, 2, 1, 1);

        button_save = new QPushButton(roomExits);
        button_save->setObjectName(QStringLiteral("button_save"));
        button_save->setEnabled(false);

        gridLayout_all->addWidget(button_save, 2, 3, 1, 1);

        button_cancel = new QPushButton(roomExits);
        button_cancel->setObjectName(QStringLiteral("button_cancel"));

        gridLayout_all->addWidget(button_cancel, 2, 4, 1, 1);

        groupBox_specialExits = new QGroupBox(roomExits);
        groupBox_specialExits->setObjectName(QStringLiteral("groupBox_specialExits"));
        gridLayout_specialExits = new QGridLayout(groupBox_specialExits);
        gridLayout_specialExits->setObjectName(QStringLiteral("gridLayout_specialExits"));
        specialExits = new ExitsTreeWidget(groupBox_specialExits);
        specialExits->setObjectName(QStringLiteral("specialExits"));
        specialExits->setFocusPolicy(Qt::StrongFocus);
        specialExits->setFrameShadow(QFrame::Raised);
        specialExits->setRootIsDecorated(false);
        specialExits->setItemsExpandable(false);
        specialExits->setSortingEnabled(false);
        specialExits->setWordWrap(true);
        specialExits->setColumnCount(8);
        specialExits->header()->setDefaultSectionSize(80);
        specialExits->header()->setMinimumSectionSize(40);
        specialExits->header()->setProperty("showSortIndicator", QVariant(false));
        specialExits->header()->setStretchLastSection(true);

        gridLayout_specialExits->addWidget(specialExits, 0, 0, 1, 1);


        gridLayout_all->addWidget(groupBox_specialExits, 1, 0, 1, 5);

        button_addSpecialExit = new QPushButton(roomExits);
        button_addSpecialExit->setObjectName(QStringLiteral("button_addSpecialExit"));

        gridLayout_all->addWidget(button_addSpecialExit, 2, 0, 1, 1);

        button_endEditing = new QPushButton(roomExits);
        button_endEditing->setObjectName(QStringLiteral("button_endEditing"));
        button_endEditing->setEnabled(false);

        gridLayout_all->addWidget(button_endEditing, 2, 1, 1, 1);

        gridLayout_all->setRowStretch(0, 1);
        gridLayout_all->setRowStretch(1, 1);
        QWidget::setTabOrder(button_addSpecialExit, button_save);
        QWidget::setTabOrder(button_save, button_cancel);

        retranslateUi(roomExits);
        QObject::connect(button_cancel, SIGNAL(clicked()), roomExits, SLOT(reject()));

        QMetaObject::connectSlotsByName(roomExits);
    } // setupUi

    void retranslateUi(QDialog *roomExits)
    {
        roomExits->setWindowTitle(QApplication::translate("roomExits", "Exits for Room \"\" [*]", 0));
        groupBox_normalExits->setTitle(QApplication::translate("roomExits", "General exits:", 0));
#ifndef QT_NO_TOOLTIP
        noroute_nw->setToolTip(QApplication::translate("roomExits", "Prevent a route being created via this exit, equivalent to an infinite exit weight", 0));
#endif // QT_NO_TOOLTIP
        noroute_nw->setText(QString());
#ifndef QT_NO_TOOLTIP
        stub_nw->setToolTip(QApplication::translate("roomExits", "Create an exit in this direction with unknown destination, mutually exclusive with an actual exit roomID", 0));
#endif // QT_NO_TOOLTIP
        stub_nw->setText(QString());
#ifndef QT_NO_TOOLTIP
        nw->setToolTip(QApplication::translate("roomExits", "Set the number of the room northwest of this one, will be blue for a valid number or red for invalid", 0));
#endif // QT_NO_TOOLTIP
        nw->setPlaceholderText(QApplication::translate("roomExits", "NW exit...", 0));
#ifndef QT_NO_TOOLTIP
        weight_nw->setToolTip(QApplication::translate("roomExits", "Set to a positive value to overide the default (Room) Weight for using this Exit route, zero value assigns the default.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        doortype_none_nw->setToolTip(QApplication::translate("roomExits", "No door symbol is drawn on 2D Map for this exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_none_nw->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_open_nw->setToolTip(QApplication::translate("roomExits", "Green (Open) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_open_nw->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_closed_nw->setToolTip(QApplication::translate("roomExits", "Orange (Closed) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_closed_nw->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_locked_nw->setToolTip(QApplication::translate("roomExits", "Red (Locked) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_locked_nw->setText(QString());
#ifndef QT_NO_TOOLTIP
        noroute_n->setToolTip(QApplication::translate("roomExits", "Prevent a route being created via this exit, equivalent to an infinite exit weight", 0));
#endif // QT_NO_TOOLTIP
        noroute_n->setText(QString());
#ifndef QT_NO_TOOLTIP
        stub_n->setToolTip(QApplication::translate("roomExits", "Create an exit in this direction with unknown destination, mutually exclusive with an actual exit roomID", 0));
#endif // QT_NO_TOOLTIP
        stub_n->setText(QString());
#ifndef QT_NO_TOOLTIP
        n->setToolTip(QApplication::translate("roomExits", "Set the number of the room north of this one, will be blue for a valid number or red for invalid", 0));
#endif // QT_NO_TOOLTIP
        n->setPlaceholderText(QApplication::translate("roomExits", "N exit...", 0));
#ifndef QT_NO_TOOLTIP
        weight_n->setToolTip(QApplication::translate("roomExits", "Set to a positive value to overide the default (Room) Weight for using this Exit route, zero value assigns the default.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        doortype_none_n->setToolTip(QApplication::translate("roomExits", "No door symbol is drawn on 2D Map for this exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_none_n->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_open_n->setToolTip(QApplication::translate("roomExits", "Green (Open) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_open_n->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_closed_n->setToolTip(QApplication::translate("roomExits", "Orange (Closed) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_closed_n->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_locked_n->setToolTip(QApplication::translate("roomExits", "Red (Locked) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_locked_n->setText(QString());
#ifndef QT_NO_TOOLTIP
        noroute_ne->setToolTip(QApplication::translate("roomExits", "Prevent a route being created via this exit, equivalent to an infinite exit weight", 0));
#endif // QT_NO_TOOLTIP
        noroute_ne->setText(QString());
#ifndef QT_NO_TOOLTIP
        stub_ne->setToolTip(QApplication::translate("roomExits", "Create an exit in this direction with unknown destination, mutually exclusive with an actual exit roomID", 0));
#endif // QT_NO_TOOLTIP
        stub_ne->setText(QString());
#ifndef QT_NO_TOOLTIP
        ne->setToolTip(QApplication::translate("roomExits", "Set the number of the room northeast of this one, will be blue for a valid number or red for invalid", 0));
#endif // QT_NO_TOOLTIP
        ne->setPlaceholderText(QApplication::translate("roomExits", "NE exit...", 0));
#ifndef QT_NO_TOOLTIP
        weight_ne->setToolTip(QApplication::translate("roomExits", "Set to a positive value to overide the default (Room) Weight for using this Exit route, zero value assigns the default.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        doortype_none_ne->setToolTip(QApplication::translate("roomExits", "No door symbol is drawn on 2D Map for this exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_none_ne->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_open_ne->setToolTip(QApplication::translate("roomExits", "Green (Open) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_open_ne->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_closed_ne->setToolTip(QApplication::translate("roomExits", "Orange (Closed) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_closed_ne->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_locked_ne->setToolTip(QApplication::translate("roomExits", "Red (Locked) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_locked_ne->setText(QString());
#ifndef QT_NO_TOOLTIP
        noroute_up->setToolTip(QApplication::translate("roomExits", "Prevent a route being created via this exit, equivalent to an infinite exit weight", 0));
#endif // QT_NO_TOOLTIP
        noroute_up->setText(QString());
#ifndef QT_NO_TOOLTIP
        stub_up->setToolTip(QApplication::translate("roomExits", "Create an exit in this direction with unknown destination, mutually exclusive with an actual exit roomID", 0));
#endif // QT_NO_TOOLTIP
        stub_up->setText(QString());
#ifndef QT_NO_TOOLTIP
        up->setToolTip(QApplication::translate("roomExits", "Set the number of the room up from this one, will be blue for a valid number or red for invalid", 0));
#endif // QT_NO_TOOLTIP
        up->setPlaceholderText(QApplication::translate("roomExits", "Up exit...", 0));
#ifndef QT_NO_TOOLTIP
        weight_up->setToolTip(QApplication::translate("roomExits", "Set to a positive value to overide the default (Room) Weight for using this Exit route, zero value assigns the default.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        doortype_none_up->setToolTip(QApplication::translate("roomExits", "No door symbol is drawn on 2D Map for this exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_none_up->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_open_up->setToolTip(QApplication::translate("roomExits", "Green (Open) door symbol would be drawn on 2D Map (but not currently), can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_open_up->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_closed_up->setToolTip(QApplication::translate("roomExits", "Orange (Closed) door symbol would be drawn on 2D Map (but not currently), can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_closed_up->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_locked_up->setToolTip(QApplication::translate("roomExits", "Red (Locked) door symbol would be drawn on 2D Map (but not currently), can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_locked_up->setText(QString());
#ifndef QT_NO_TOOLTIP
        noroute_w->setToolTip(QApplication::translate("roomExits", "Prevent a route being created via this exit, equivalent to an infinite exit weight", 0));
#endif // QT_NO_TOOLTIP
        noroute_w->setText(QString());
#ifndef QT_NO_TOOLTIP
        stub_w->setToolTip(QApplication::translate("roomExits", "Create an exit in this direction with unknown destination, mutually exclusive with an actual exit roomID", 0));
#endif // QT_NO_TOOLTIP
        stub_w->setText(QString());
#ifndef QT_NO_TOOLTIP
        w->setToolTip(QApplication::translate("roomExits", "Set the number of the room west of this one, will be blue for a valid number or red for invalid", 0));
#endif // QT_NO_TOOLTIP
        w->setText(QString());
        w->setPlaceholderText(QApplication::translate("roomExits", "W exit...", 0));
#ifndef QT_NO_TOOLTIP
        weight_w->setToolTip(QApplication::translate("roomExits", "Set to a positive value to overide the default (Room) Weight for using this Exit route, zero value assigns the default.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        doortype_none_w->setToolTip(QApplication::translate("roomExits", "No door symbol is drawn on 2D Map for this exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_none_w->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_open_w->setToolTip(QApplication::translate("roomExits", "Green (Open) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_open_w->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_closed_w->setToolTip(QApplication::translate("roomExits", "Orange (Closed) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_closed_w->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_locked_w->setToolTip(QApplication::translate("roomExits", "Red (Locked) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_locked_w->setText(QString());
        label_roomID->setText(QApplication::translate("roomExits", "ID:", 0));
#ifndef QT_NO_TOOLTIP
        roomID->setToolTip(QApplication::translate("roomExits", "This is the Room ID Number for this room - it cannot be changed here!", 0));
#endif // QT_NO_TOOLTIP
        label_roomWeight->setText(QApplication::translate("roomExits", "Weight:", 0));
#ifndef QT_NO_TOOLTIP
        roomWeight->setToolTip(QApplication::translate("roomExits", "This is the default weight for this room, which will be used for any exit which does not have its own value set - it cannot be changed here.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        noroute_e->setToolTip(QApplication::translate("roomExits", "Prevent a route being created via this exit, equivalent to an infinite exit weight", 0));
#endif // QT_NO_TOOLTIP
        noroute_e->setText(QString());
#ifndef QT_NO_TOOLTIP
        stub_e->setToolTip(QApplication::translate("roomExits", "Create an exit in this direction with unknown destination, mutually exclusive with an actual exit roomID", 0));
#endif // QT_NO_TOOLTIP
        stub_e->setText(QString());
#ifndef QT_NO_TOOLTIP
        e->setToolTip(QApplication::translate("roomExits", "Set the number of the room east of this one, will be blue for a valid number or red for invalid", 0));
#endif // QT_NO_TOOLTIP
        e->setPlaceholderText(QApplication::translate("roomExits", "E exit...", 0));
#ifndef QT_NO_TOOLTIP
        doortype_none_e->setToolTip(QApplication::translate("roomExits", "No door symbol is drawn on 2D Map for this exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_none_e->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_open_e->setToolTip(QApplication::translate("roomExits", "Green (Open) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_open_e->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_closed_e->setToolTip(QApplication::translate("roomExits", "Orange (Closed) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_closed_e->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_locked_e->setToolTip(QApplication::translate("roomExits", "Red (Locked) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_locked_e->setText(QString());
#ifndef QT_NO_TOOLTIP
        noroute_down->setToolTip(QApplication::translate("roomExits", "Prevent a route being created via this exit, equivalent to an infinite exit weight", 0));
#endif // QT_NO_TOOLTIP
        noroute_down->setText(QString());
#ifndef QT_NO_TOOLTIP
        stub_down->setToolTip(QApplication::translate("roomExits", "Create an exit in this direction with unknown destination, mutually exclusive with an actual exit roomID", 0));
#endif // QT_NO_TOOLTIP
        stub_down->setText(QString());
#ifndef QT_NO_TOOLTIP
        down->setToolTip(QApplication::translate("roomExits", "Set the number of the room down from this one, will be blue for a valid number or red for invalid", 0));
#endif // QT_NO_TOOLTIP
        down->setPlaceholderText(QApplication::translate("roomExits", "Down exit...", 0));
#ifndef QT_NO_TOOLTIP
        weight_down->setToolTip(QApplication::translate("roomExits", "Set to a positive value to overide the default (Room) Weight for using this Exit route, zero value assigns the default.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        doortype_none_down->setToolTip(QApplication::translate("roomExits", "No door symbol is drawn on 2D Map for this exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_none_down->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_open_down->setToolTip(QApplication::translate("roomExits", "Green (Open) door symbol would be drawn on 2D Map (but not currently), can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_open_down->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_closed_down->setToolTip(QApplication::translate("roomExits", "Orange (Closed) door symbol would be drawn on 2D Map (but not currently), can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_closed_down->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_locked_down->setToolTip(QApplication::translate("roomExits", "Red (Locked) door symbol would be drawn on 2D Map (but not currently), can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_locked_down->setText(QString());
#ifndef QT_NO_TOOLTIP
        noroute_sw->setToolTip(QApplication::translate("roomExits", "Prevent a route being created via this exit, equivalent to an infinite exit weight", 0));
#endif // QT_NO_TOOLTIP
        noroute_sw->setText(QString());
#ifndef QT_NO_TOOLTIP
        stub_sw->setToolTip(QApplication::translate("roomExits", "Create an exit in this direction with unknown destination, mutually exclusive with an actual exit roomID", 0));
#endif // QT_NO_TOOLTIP
        stub_sw->setText(QString());
#ifndef QT_NO_TOOLTIP
        sw->setToolTip(QApplication::translate("roomExits", "Set the number of the room southwest of this one, will be blue for a valid number or red for invalid", 0));
#endif // QT_NO_TOOLTIP
        sw->setPlaceholderText(QApplication::translate("roomExits", "SW exit...", 0));
#ifndef QT_NO_TOOLTIP
        weight_sw->setToolTip(QApplication::translate("roomExits", "Set to a positive value to overide the default (Room) Weight for using this Exit route, zero value assigns the default.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        doortype_none_sw->setToolTip(QApplication::translate("roomExits", "No door symbol is drawn on 2D Map for this exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_none_sw->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_open_sw->setToolTip(QApplication::translate("roomExits", "Green (Open) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_open_sw->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_closed_sw->setToolTip(QApplication::translate("roomExits", "Orange (Closed) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_closed_sw->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_locked_sw->setToolTip(QApplication::translate("roomExits", "Red (Locked) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_locked_sw->setText(QString());
#ifndef QT_NO_TOOLTIP
        noroute_s->setToolTip(QApplication::translate("roomExits", "Prevent a route being created via this exit, equivalent to an infinite exit weight", 0));
#endif // QT_NO_TOOLTIP
        noroute_s->setText(QString());
#ifndef QT_NO_TOOLTIP
        stub_s->setToolTip(QApplication::translate("roomExits", "Create an exit in this direction with unknown destination, mutually exclusive with an actual exit roomID", 0));
#endif // QT_NO_TOOLTIP
        stub_s->setText(QString());
#ifndef QT_NO_TOOLTIP
        s->setToolTip(QApplication::translate("roomExits", "Set the number of the room south of this one, will be blue for a valid number or red for invalid", 0));
#endif // QT_NO_TOOLTIP
        s->setPlaceholderText(QApplication::translate("roomExits", "S exit...", 0));
#ifndef QT_NO_TOOLTIP
        weight_s->setToolTip(QApplication::translate("roomExits", "Set to a positive value to overide the default (Room) Weight for using this Exit route, zero value assigns the default.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        doortype_none_s->setToolTip(QApplication::translate("roomExits", "No door symbol is drawn on 2D Map for this exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_none_s->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_open_s->setToolTip(QApplication::translate("roomExits", "Green (Open) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_open_s->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_closed_s->setToolTip(QApplication::translate("roomExits", "Orange (Closed) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_closed_s->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_locked_s->setToolTip(QApplication::translate("roomExits", "Red (Locked) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_locked_s->setText(QString());
#ifndef QT_NO_TOOLTIP
        noroute_se->setToolTip(QApplication::translate("roomExits", "Prevent a route being created via this exit, equivalent to an infinite exit weight", 0));
#endif // QT_NO_TOOLTIP
        noroute_se->setText(QString());
#ifndef QT_NO_TOOLTIP
        stub_se->setToolTip(QApplication::translate("roomExits", "Create an exit in this direction with unknown destination, mutually exclusive with an actual exit roomID", 0));
#endif // QT_NO_TOOLTIP
        stub_se->setText(QString());
#ifndef QT_NO_TOOLTIP
        se->setToolTip(QApplication::translate("roomExits", "Set the number of the room southeast of this one, will be blue for a valid number or red for invalid", 0));
#endif // QT_NO_TOOLTIP
        se->setPlaceholderText(QApplication::translate("roomExits", "SE exit...", 0));
#ifndef QT_NO_TOOLTIP
        weight_se->setToolTip(QApplication::translate("roomExits", "Set to a positive value to overide the default (Room) Weight for using this Exit route, zero value assigns the default.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        doortype_none_se->setToolTip(QApplication::translate("roomExits", "No door symbol is drawn on 2D Map for this exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_none_se->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_open_se->setToolTip(QApplication::translate("roomExits", "Green (Open) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_open_se->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_closed_se->setToolTip(QApplication::translate("roomExits", "Orange (Closed) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_closed_se->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_locked_se->setToolTip(QApplication::translate("roomExits", "Red (Locked) door symbol is drawn on 2D Map, can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_locked_se->setText(QString());
#ifndef QT_NO_TOOLTIP
        noroute_in->setToolTip(QApplication::translate("roomExits", "Prevent a route being created via this exit, equivalent to an infinite exit weight", 0));
#endif // QT_NO_TOOLTIP
        noroute_in->setText(QString());
#ifndef QT_NO_TOOLTIP
        stub_in->setToolTip(QApplication::translate("roomExits", "Create an exit in this direction with unknown destination, mutually exclusive with an actual exit roomID", 0));
#endif // QT_NO_TOOLTIP
        stub_in->setText(QString());
#ifndef QT_NO_TOOLTIP
        in->setToolTip(QApplication::translate("roomExits", "Set the number of the room in from this one, will be blue for a valid number or red for invalid", 0));
#endif // QT_NO_TOOLTIP
        in->setPlaceholderText(QApplication::translate("roomExits", "In exit...", 0));
#ifndef QT_NO_TOOLTIP
        weight_in->setToolTip(QApplication::translate("roomExits", "Set to a positive value to overide the default (Room) Weight for using this Exit route, zero value assigns the default.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        doortype_none_in->setToolTip(QApplication::translate("roomExits", "No door symbol is drawn on 2D Map for this exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_none_in->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_open_in->setToolTip(QApplication::translate("roomExits", "Green (Open) door symbol would be drawn on 2D Map (but not currently), can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_open_in->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_locked_in->setToolTip(QApplication::translate("roomExits", "Orange (Closed) door symbol would be drawn on 2D Map (but not currently), can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_locked_in->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_closed_in->setToolTip(QApplication::translate("roomExits", "Red (Locked) door symbol would be drawn on 2D Map (but not currently), can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_closed_in->setText(QString());
#ifndef QT_NO_TOOLTIP
        noroute_out->setToolTip(QApplication::translate("roomExits", "Prevent a route being created via this exit, equivalent to an infinite exit weight", 0));
#endif // QT_NO_TOOLTIP
        noroute_out->setText(QString());
#ifndef QT_NO_TOOLTIP
        stub_out->setToolTip(QApplication::translate("roomExits", "Create an exit in this direction with unknown destination, mutually exclusive with an actual exit roomID", 0));
#endif // QT_NO_TOOLTIP
        stub_out->setText(QString());
#ifndef QT_NO_TOOLTIP
        out->setToolTip(QApplication::translate("roomExits", "Set the number of the room out from this one, will be blue for a valid number or red for invalid", 0));
#endif // QT_NO_TOOLTIP
        out->setPlaceholderText(QApplication::translate("roomExits", "Out exit...", 0));
#ifndef QT_NO_TOOLTIP
        weight_out->setToolTip(QApplication::translate("roomExits", "Set to a positive value to overide the default (Room) Weight for using this Exit route, zero value assigns the default.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        doortype_none_out->setToolTip(QApplication::translate("roomExits", "No door symbol is drawn on 2D Map for this exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_none_out->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_open_out->setToolTip(QApplication::translate("roomExits", "Green (Open) door symbol would be drawn on 2D Map (but not currently), can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_open_out->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_closed_out->setToolTip(QApplication::translate("roomExits", "Orange (Closed) door symbol would be drawn on 2D Map (but not currently), can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_closed_out->setText(QString());
#ifndef QT_NO_TOOLTIP
        doortype_locked_out->setToolTip(QApplication::translate("roomExits", "Red (Locked) door symbol would be drawn on 2D Map (but not currently), can be set on either a stub or a real exit", 0));
#endif // QT_NO_TOOLTIP
        doortype_locked_out->setText(QString());
        label_key->setText(QApplication::translate("roomExits", "Key:", 0));
        noroute_key->setText(QApplication::translate("roomExits", "No route", 0));
        stub_key->setText(QApplication::translate("roomExits", "Stub Exit", 0));
#ifndef QT_NO_TOOLTIP
        key->setToolTip(QApplication::translate("roomExits", "Set the number of the room that's to the southwest here", 0));
#endif // QT_NO_TOOLTIP
        key->setPlaceholderText(QApplication::translate("roomExits", "Exit RoomID number", 0));
        weight_key->setSpecialValueText(QApplication::translate("roomExits", "Exit Weight (0=No overide)", 0));
        doortype_none_key->setText(QApplication::translate("roomExits", "No door", 0));
        doortype_open_key->setText(QApplication::translate("roomExits", "Open door", 0));
        doortype_closed_key->setText(QApplication::translate("roomExits", "Closed door", 0));
        doortype_locked_key->setText(QApplication::translate("roomExits", "Locked door", 0));
#ifndef QT_NO_TOOLTIP
        button_save->setToolTip(QApplication::translate("roomExits", "Use this button to save any changes, will also remove any invalid Special exits.", 0));
#endif // QT_NO_TOOLTIP
        button_save->setText(QApplication::translate("roomExits", "Save", 0));
#ifndef QT_NO_TOOLTIP
        button_cancel->setToolTip(QApplication::translate("roomExits", "Use this button to close the dialogue without changing anything.", 0));
#endif // QT_NO_TOOLTIP
        button_cancel->setText(QApplication::translate("roomExits", "Cancel", 0));
        groupBox_specialExits->setTitle(QApplication::translate("roomExits", "Special exits:", 0));
        QTreeWidgetItem *___qtreewidgetitem = specialExits->headerItem();
        ___qtreewidgetitem->setText(7, QApplication::translate("roomExits", "Command\n"
"or LUA script", 0));
        ___qtreewidgetitem->setText(6, QApplication::translate("roomExits", "Door\n"
"Locked", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("roomExits", "Door\n"
"Closed", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("roomExits", "Door\n"
"Open", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("roomExits", "Door\n"
"None", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("roomExits", "Exit\n"
"Weight", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("roomExits", "No\n"
"Route", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("roomExits", "Exit\n"
"Room ID", 0));
#ifndef QT_NO_TOOLTIP
        ___qtreewidgetitem->setToolTip(7, QApplication::translate("roomExits", "(Lua scripts need to be prefixed with \"script:\")", 0));
        ___qtreewidgetitem->setToolTip(6, QApplication::translate("roomExits", "Red (Locked) door symbol would be drawn on 2D Map (but not currently).", 0));
        ___qtreewidgetitem->setToolTip(5, QApplication::translate("roomExits", "Orange (Closed) door symbol would be drawn on 2D Map (but not currently).", 0));
        ___qtreewidgetitem->setToolTip(4, QApplication::translate("roomExits", "Green (Open) door symbol would be drawn on 2D Map (but not currently).", 0));
        ___qtreewidgetitem->setToolTip(3, QApplication::translate("roomExits", "No door symbol is drawn on 2D Map for this exit (only functional choice currently).", 0));
        ___qtreewidgetitem->setToolTip(2, QApplication::translate("roomExits", "Set to a positive integer value to overide the default (Room) Weight for using this Exit route, a zero value assigns the default.", 0));
        ___qtreewidgetitem->setToolTip(1, QApplication::translate("roomExits", "Prevent a route being created via this exit, equivalent to an infinite exit weight", 0));
        ___qtreewidgetitem->setToolTip(0, QApplication::translate("roomExits", "Set the number of the room that this exit leads to, if set to zero the exit will be removed on saving the exits.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        specialExits->setToolTip(QApplication::translate("roomExits", "Click on an item to edit/change it, to DELETE a Special Exit set its Exit Room ID to zero", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        button_addSpecialExit->setToolTip(QApplication::translate("roomExits", "Add an empty item to Special exits to be edited as required", 0));
#endif // QT_NO_TOOLTIP
        button_addSpecialExit->setText(QApplication::translate("roomExits", "&Add special exit", 0));
#ifndef QT_NO_TOOLTIP
        button_endEditing->setToolTip(QApplication::translate("roomExits", "Press this button to deactivate the selection of a Special exit", 0));
#endif // QT_NO_TOOLTIP
        button_endEditing->setText(QApplication::translate("roomExits", "&End S. Exits editing", 0));
    } // retranslateUi

};

namespace Ui {
    class roomExits: public Ui_roomExits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOM_EXITS_H
