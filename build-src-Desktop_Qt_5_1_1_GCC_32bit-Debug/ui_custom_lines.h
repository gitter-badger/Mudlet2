/********************************************************************************
** Form generated from reading UI file 'custom_lines.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOM_LINES_H
#define UI_CUSTOM_LINES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_roomExits
{
public:
    QGridLayout *gridLayout_3;
    QFrame *frame_all;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_specialExits;
    QGridLayout *gridLayout_4;
    QTreeWidget *specialExits;
    QLabel *label_guidance;
    QGroupBox *groupBox_normalExits;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_intra_normalExits_9;
    QPushButton *nw;
    QSpacerItem *horizontalSpacer_intra_normalExits_3;
    QPushButton *n;
    QSpacerItem *horizontalSpacer_intra_normalExits_2;
    QPushButton *ne;
    QSpacerItem *horizontalSpacer_intra_normalExits_6;
    QSpacerItem *horizontalSpacer_intra_normalExits_7;
    QPushButton *up;
    QSpacerItem *horizontalSpacer_intra_normalExits_8;
    QSpacerItem *horizontalSpacer_intra_normalExits_10;
    QPushButton *w;
    QPushButton *e;
    QPushButton *in;
    QSpacerItem *horizontalSpacer_intra_normalExits_5;
    QPushButton *out;
    QPushButton *sw;
    QPushButton *s;
    QPushButton *se;
    QPushButton *down;
    QGroupBox *groupBox_settings;
    QGridLayout *gridLayout_style;
    QSpacerItem *horizontalSpacer_intra_normalExits;
    QCheckBox *arrow;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *lineColor;
    QComboBox *lineStyle;
    QSpacerItem *horizontalSpacer_intra_normalExits_4;
    QPushButton *button_cancel;

    void setupUi(QDialog *roomExits)
    {
        if (roomExits->objectName().isEmpty())
            roomExits->setObjectName(QStringLiteral("roomExits"));
        roomExits->resize(606, 427);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/mudlet_custom_exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        roomExits->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(roomExits);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        frame_all = new QFrame(roomExits);
        frame_all->setObjectName(QStringLiteral("frame_all"));
        gridLayout_2 = new QGridLayout(frame_all);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_specialExits = new QGroupBox(frame_all);
        groupBox_specialExits->setObjectName(QStringLiteral("groupBox_specialExits"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_specialExits->sizePolicy().hasHeightForWidth());
        groupBox_specialExits->setSizePolicy(sizePolicy);
        groupBox_specialExits->setMinimumSize(QSize(0, 140));
        gridLayout_4 = new QGridLayout(groupBox_specialExits);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        specialExits = new QTreeWidget(groupBox_specialExits);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignRight|Qt::AlignVCenter);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        specialExits->setHeaderItem(__qtreewidgetitem);
        specialExits->setObjectName(QStringLiteral("specialExits"));
        sizePolicy.setHeightForWidth(specialExits->sizePolicy().hasHeightForWidth());
        specialExits->setSizePolicy(sizePolicy);
        specialExits->setMinimumSize(QSize(0, 80));
        specialExits->setSizeIncrement(QSize(1, 10));
        specialExits->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        specialExits->setLayoutDirection(Qt::LeftToRight);
        specialExits->setAlternatingRowColors(true);
        specialExits->setUniformRowHeights(true);
        specialExits->setAllColumnsShowFocus(true);
        specialExits->setWordWrap(true);
        specialExits->setColumnCount(3);
        specialExits->header()->setDefaultSectionSize(100);
        specialExits->header()->setMinimumSectionSize(100);

        gridLayout_4->addWidget(specialExits, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_specialExits, 3, 0, 1, 1);

        label_guidance = new QLabel(frame_all);
        label_guidance->setObjectName(QStringLiteral("label_guidance"));
        label_guidance->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_guidance->sizePolicy().hasHeightForWidth());
        label_guidance->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        label_guidance->setFont(font);
        label_guidance->setAutoFillBackground(false);

        gridLayout_2->addWidget(label_guidance, 0, 0, 1, 1, Qt::AlignLeft);

        groupBox_normalExits = new QGroupBox(frame_all);
        groupBox_normalExits->setObjectName(QStringLiteral("groupBox_normalExits"));
        sizePolicy.setHeightForWidth(groupBox_normalExits->sizePolicy().hasHeightForWidth());
        groupBox_normalExits->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox_normalExits);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_intra_normalExits_9 = new QSpacerItem(0, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_intra_normalExits_9, 0, 0, 1, 1);

        nw = new QPushButton(groupBox_normalExits);
        nw->setObjectName(QStringLiteral("nw"));
        nw->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(nw, 0, 1, 1, 1);

        horizontalSpacer_intra_normalExits_3 = new QSpacerItem(80, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_intra_normalExits_3, 0, 2, 1, 1);

        n = new QPushButton(groupBox_normalExits);
        n->setObjectName(QStringLiteral("n"));
        n->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(n, 0, 3, 1, 1);

        horizontalSpacer_intra_normalExits_2 = new QSpacerItem(80, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_intra_normalExits_2, 0, 4, 1, 1);

        ne = new QPushButton(groupBox_normalExits);
        ne->setObjectName(QStringLiteral("ne"));
        ne->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(ne, 0, 5, 1, 1);

        horizontalSpacer_intra_normalExits_6 = new QSpacerItem(80, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_intra_normalExits_6, 0, 6, 1, 1);

        horizontalSpacer_intra_normalExits_7 = new QSpacerItem(80, 22, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_intra_normalExits_7, 0, 7, 1, 1);

        up = new QPushButton(groupBox_normalExits);
        up->setObjectName(QStringLiteral("up"));
        up->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(up, 0, 8, 1, 1);

        horizontalSpacer_intra_normalExits_8 = new QSpacerItem(80, 22, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_intra_normalExits_8, 0, 9, 1, 1);

        horizontalSpacer_intra_normalExits_10 = new QSpacerItem(0, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_intra_normalExits_10, 0, 10, 1, 1);

        w = new QPushButton(groupBox_normalExits);
        w->setObjectName(QStringLiteral("w"));
        w->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(w, 1, 1, 1, 1);

        e = new QPushButton(groupBox_normalExits);
        e->setObjectName(QStringLiteral("e"));
        e->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(e, 1, 5, 1, 1);

        in = new QPushButton(groupBox_normalExits);
        in->setObjectName(QStringLiteral("in"));
        in->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(in, 1, 7, 1, 1);

        horizontalSpacer_intra_normalExits_5 = new QSpacerItem(80, 22, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_intra_normalExits_5, 1, 8, 1, 1);

        out = new QPushButton(groupBox_normalExits);
        out->setObjectName(QStringLiteral("out"));
        out->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(out, 1, 9, 1, 1);

        sw = new QPushButton(groupBox_normalExits);
        sw->setObjectName(QStringLiteral("sw"));
        sw->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(sw, 2, 1, 1, 1);

        s = new QPushButton(groupBox_normalExits);
        s->setObjectName(QStringLiteral("s"));
        s->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(s, 2, 3, 1, 1);

        se = new QPushButton(groupBox_normalExits);
        se->setObjectName(QStringLiteral("se"));
        se->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(se, 2, 5, 1, 1);

        down = new QPushButton(groupBox_normalExits);
        down->setObjectName(QStringLiteral("down"));
        down->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(down, 2, 8, 1, 1);


        gridLayout_2->addWidget(groupBox_normalExits, 2, 0, 1, 1);

        groupBox_settings = new QGroupBox(frame_all);
        groupBox_settings->setObjectName(QStringLiteral("groupBox_settings"));
        sizePolicy1.setHeightForWidth(groupBox_settings->sizePolicy().hasHeightForWidth());
        groupBox_settings->setSizePolicy(sizePolicy1);
        gridLayout_style = new QGridLayout(groupBox_settings);
        gridLayout_style->setObjectName(QStringLiteral("gridLayout_style"));
        horizontalSpacer_intra_normalExits = new QSpacerItem(80, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_style->addItem(horizontalSpacer_intra_normalExits, 0, 3, 1, 1);

        arrow = new QCheckBox(groupBox_settings);
        arrow->setObjectName(QStringLiteral("arrow"));
        arrow->setMinimumSize(QSize(160, 0));
        arrow->setSizeIncrement(QSize(0, 0));
        arrow->setLayoutDirection(Qt::RightToLeft);

        gridLayout_style->addWidget(arrow, 0, 8, 1, 1);

        label_2 = new QLabel(groupBox_settings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(40, 0));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_style->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox_settings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(40, 0));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_style->addWidget(label_3, 0, 4, 1, 1);

        lineColor = new QPushButton(groupBox_settings);
        lineColor->setObjectName(QStringLiteral("lineColor"));
        lineColor->setMinimumSize(QSize(80, 0));
        lineColor->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_style->addWidget(lineColor, 0, 6, 1, 1);

        lineStyle = new QComboBox(groupBox_settings);
        lineStyle->setObjectName(QStringLiteral("lineStyle"));
        lineStyle->setMinimumSize(QSize(80, 0));
        lineStyle->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_style->addWidget(lineStyle, 0, 1, 1, 2);

        horizontalSpacer_intra_normalExits_4 = new QSpacerItem(77, 11, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_style->addItem(horizontalSpacer_intra_normalExits_4, 0, 7, 1, 1);


        gridLayout_2->addWidget(groupBox_settings, 1, 0, 1, 1);

        button_cancel = new QPushButton(frame_all);
        button_cancel->setObjectName(QStringLiteral("button_cancel"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(button_cancel->sizePolicy().hasHeightForWidth());
        button_cancel->setSizePolicy(sizePolicy2);
        button_cancel->setMinimumSize(QSize(50, 20));
        button_cancel->setLayoutDirection(Qt::RightToLeft);
        button_cancel->setChecked(false);

        gridLayout_2->addWidget(button_cancel, 4, 0, 1, 1);


        gridLayout_3->addWidget(frame_all, 0, 0, 1, 1);

        QWidget::setTabOrder(button_cancel, lineStyle);
        QWidget::setTabOrder(lineStyle, lineColor);
        QWidget::setTabOrder(lineColor, arrow);
        QWidget::setTabOrder(arrow, n);
        QWidget::setTabOrder(n, e);
        QWidget::setTabOrder(e, s);
        QWidget::setTabOrder(s, w);
        QWidget::setTabOrder(w, up);
        QWidget::setTabOrder(up, down);
        QWidget::setTabOrder(down, ne);
        QWidget::setTabOrder(ne, se);
        QWidget::setTabOrder(se, sw);
        QWidget::setTabOrder(sw, nw);
        QWidget::setTabOrder(nw, in);
        QWidget::setTabOrder(in, out);

        retranslateUi(roomExits);

        QMetaObject::connectSlotsByName(roomExits);
    } // setupUi

    void retranslateUi(QDialog *roomExits)
    {
        roomExits->setWindowTitle(QApplication::translate("roomExits", "Custom Line selection", 0));
#ifndef QT_NO_TOOLTIP
        groupBox_specialExits->setToolTip(QApplication::translate("roomExits", "Select a special exit to commence drawing a line for it, the first column is checked if the exit already has such a custom line.", 0));
#endif // QT_NO_TOOLTIP
        groupBox_specialExits->setTitle(QApplication::translate("roomExits", "Special Exits:", 0));
        QTreeWidgetItem *___qtreewidgetitem = specialExits->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("roomExits", " Command", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("roomExits", " Destination ", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("roomExits", "Has\n"
"Custom Line?", 0));
#ifndef QT_NO_TOOLTIP
        ___qtreewidgetitem->setToolTip(2, QApplication::translate("roomExits", "The command or LUA script that goes to the given room.", 0));
        ___qtreewidgetitem->setToolTip(1, QApplication::translate("roomExits", "The room this special exit leads to.", 0));
        ___qtreewidgetitem->setToolTip(0, QApplication::translate("roomExits", "Indicates if there is already a custom line for this special exit, will be replaced if the exit is selected.", 0));
#endif // QT_NO_TOOLTIP
        label_guidance->setText(QApplication::translate("roomExits", "Choose line format, color and arrow option THEN select exit...", 0));
        label_guidance->setProperty("tooltip", QVariant(QApplication::translate("roomExits", "Selecting an exit immediately proceeds to drawing the first line segment from the centre point of the room.", 0)));
#ifndef QT_NO_TOOLTIP
        groupBox_normalExits->setToolTip(QApplication::translate("roomExits", "Select a normal exit to commence drawing a line for it, buttons are shown depressed if they already have such a custom line and disabled if there is not exit in that direction.", 0));
#endif // QT_NO_TOOLTIP
        groupBox_normalExits->setTitle(QApplication::translate("roomExits", "Normal Exits:", 0));
        nw->setText(QApplication::translate("roomExits", "NW", 0));
        n->setText(QApplication::translate("roomExits", "N", 0));
        ne->setText(QApplication::translate("roomExits", "NE", 0));
        up->setText(QApplication::translate("roomExits", "UP", 0));
        w->setText(QApplication::translate("roomExits", "W", 0));
        e->setText(QApplication::translate("roomExits", "E", 0));
        in->setText(QApplication::translate("roomExits", "IN", 0));
        out->setText(QApplication::translate("roomExits", "OUT", 0));
        sw->setText(QApplication::translate("roomExits", "SW", 0));
        s->setText(QApplication::translate("roomExits", "S", 0));
        se->setText(QApplication::translate("roomExits", "SE", 0));
        down->setText(QApplication::translate("roomExits", "DOWN", 0));
#ifndef QT_NO_TOOLTIP
        groupBox_settings->setToolTip(QApplication::translate("roomExits", "Select Style, Color and whether to end the line with an arrow head BEFORE then choosing the exit to draw the line for...", 0));
#endif // QT_NO_TOOLTIP
        groupBox_settings->setTitle(QApplication::translate("roomExits", "Line Settings:", 0));
        arrow->setText(QApplication::translate("roomExits", "Ends with an arrow:", 0));
        label_2->setText(QApplication::translate("roomExits", "Style:", 0));
        label_3->setText(QApplication::translate("roomExits", "Color:", 0));
        lineColor->setText(QString());
#ifndef QT_NO_TOOLTIP
        button_cancel->setToolTip(QApplication::translate("roomExits", "To remove a custom line, select it and right-click to obtain a \"delete\" option.", 0));
#endif // QT_NO_TOOLTIP
        button_cancel->setText(QApplication::translate("roomExits", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class roomExits: public Ui_roomExits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOM_LINES_H
