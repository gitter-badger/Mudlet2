/********************************************************************************
** Form generated from reading UI file 'mapper.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPPER_H
#define UI_MAPPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <T2DMap.h>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_mapper
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    T2DMap *mp2dMap;
    GLWidget *glWidget;
    QToolButton *togglePanel;
    QWidget *panel;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *shiftLeft;
    QPushButton *shiftUp;
    QPushButton *shiftDown;
    QPushButton *shiftRight;
    QPushButton *shiftZup;
    QPushButton *shiftZdown;
    QToolButton *dim2;
    QLabel *label_4;
    QComboBox *showArea;
    QWidget *a;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpinBox *roomSize;
    QLabel *label_3;
    QSpinBox *lineSize;
    QCheckBox *bubbles;
    QCheckBox *showInfo;
    QCheckBox *showRoomIDs;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QWidget *d3buttons;
    QGridLayout *gridLayout;
    QSlider *zRot;
    QSlider *yRot;
    QSlider *xRot;
    QToolButton *increaseTop;
    QToolButton *increaseBottom;
    QToolButton *reduceBottom;
    QToolButton *reduceTop;
    QToolButton *singleLevel;
    QToolButton *defaultView;
    QToolButton *topView;
    QToolButton *sideView;
    QToolButton *ortho;
    QSlider *scale;

    void setupUi(QWidget *mapper)
    {
        if (mapper->objectName().isEmpty())
            mapper->setObjectName(QStringLiteral("mapper"));
        mapper->resize(403, 387);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mapper->sizePolicy().hasHeightForWidth());
        mapper->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(mapper);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(mapper);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(230, 230, 230, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget->setPalette(palette);
        widget->setAutoFillBackground(true);
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mp2dMap = new T2DMap(widget);
        mp2dMap->setObjectName(QStringLiteral("mp2dMap"));
        sizePolicy.setHeightForWidth(mp2dMap->sizePolicy().hasHeightForWidth());
        mp2dMap->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(mp2dMap);

        glWidget = new GLWidget(widget);
        glWidget->setObjectName(QStringLiteral("glWidget"));
        sizePolicy.setHeightForWidth(glWidget->sizePolicy().hasHeightForWidth());
        glWidget->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(glWidget);

        togglePanel = new QToolButton(widget);
        togglePanel->setObjectName(QStringLiteral("togglePanel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(togglePanel->sizePolicy().hasHeightForWidth());
        togglePanel->setSizePolicy(sizePolicy1);
        togglePanel->setMaximumSize(QSize(16777215, 15));
        togglePanel->setCheckable(true);
        togglePanel->setChecked(true);

        verticalLayout_2->addWidget(togglePanel);

        panel = new QWidget(widget);
        panel->setObjectName(QStringLiteral("panel"));
        sizePolicy1.setHeightForWidth(panel->sizePolicy().hasHeightForWidth());
        panel->setSizePolicy(sizePolicy1);
        panel->setMaximumSize(QSize(16777215, 200));
        panel->setAutoFillBackground(true);
        verticalLayout_5 = new QVBoxLayout(panel);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        widget_4 = new QWidget(panel);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(0, 0));
        widget_4->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        sizePolicy1.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy1);
        widget_6->setMaximumSize(QSize(200, 22));
        horizontalLayout_2 = new QHBoxLayout(widget_6);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        shiftLeft = new QPushButton(widget_6);
        shiftLeft->setObjectName(QStringLiteral("shiftLeft"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(shiftLeft->sizePolicy().hasHeightForWidth());
        shiftLeft->setSizePolicy(sizePolicy2);
        shiftLeft->setMinimumSize(QSize(20, 20));
        shiftLeft->setMaximumSize(QSize(30, 20));
        shiftLeft->setBaseSize(QSize(0, 0));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        shiftLeft->setFont(font);
        shiftLeft->setAutoRepeat(true);
        shiftLeft->setAutoRepeatDelay(100);
        shiftLeft->setAutoRepeatInterval(1);

        horizontalLayout_2->addWidget(shiftLeft);

        shiftUp = new QPushButton(widget_6);
        shiftUp->setObjectName(QStringLiteral("shiftUp"));
        sizePolicy2.setHeightForWidth(shiftUp->sizePolicy().hasHeightForWidth());
        shiftUp->setSizePolicy(sizePolicy2);
        shiftUp->setMinimumSize(QSize(20, 20));
        shiftUp->setMaximumSize(QSize(30, 20));
        shiftUp->setBaseSize(QSize(0, 0));
        shiftUp->setAutoRepeat(true);
        shiftUp->setAutoRepeatDelay(100);
        shiftUp->setAutoRepeatInterval(1);

        horizontalLayout_2->addWidget(shiftUp);

        shiftDown = new QPushButton(widget_6);
        shiftDown->setObjectName(QStringLiteral("shiftDown"));
        sizePolicy2.setHeightForWidth(shiftDown->sizePolicy().hasHeightForWidth());
        shiftDown->setSizePolicy(sizePolicy2);
        shiftDown->setMinimumSize(QSize(20, 20));
        shiftDown->setMaximumSize(QSize(30, 20));
        shiftDown->setBaseSize(QSize(0, 0));
        shiftDown->setAutoRepeat(true);
        shiftDown->setAutoRepeatDelay(100);
        shiftDown->setAutoRepeatInterval(1);

        horizontalLayout_2->addWidget(shiftDown);

        shiftRight = new QPushButton(widget_6);
        shiftRight->setObjectName(QStringLiteral("shiftRight"));
        sizePolicy2.setHeightForWidth(shiftRight->sizePolicy().hasHeightForWidth());
        shiftRight->setSizePolicy(sizePolicy2);
        shiftRight->setMinimumSize(QSize(25, 20));
        shiftRight->setMaximumSize(QSize(30, 20));
        shiftRight->setBaseSize(QSize(0, 0));
        shiftRight->setAutoRepeat(true);
        shiftRight->setAutoRepeatDelay(100);
        shiftRight->setAutoRepeatInterval(1);

        horizontalLayout_2->addWidget(shiftRight);

        shiftZup = new QPushButton(widget_6);
        shiftZup->setObjectName(QStringLiteral("shiftZup"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(25);
        sizePolicy3.setVerticalStretch(20);
        sizePolicy3.setHeightForWidth(shiftZup->sizePolicy().hasHeightForWidth());
        shiftZup->setSizePolicy(sizePolicy3);
        shiftZup->setMinimumSize(QSize(25, 20));
        shiftZup->setMaximumSize(QSize(30, 20));
        shiftZup->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        shiftZup->setFont(font1);

        horizontalLayout_2->addWidget(shiftZup);

        shiftZdown = new QPushButton(widget_6);
        shiftZdown->setObjectName(QStringLiteral("shiftZdown"));
        sizePolicy2.setHeightForWidth(shiftZdown->sizePolicy().hasHeightForWidth());
        shiftZdown->setSizePolicy(sizePolicy2);
        shiftZdown->setMinimumSize(QSize(30, 20));
        shiftZdown->setMaximumSize(QSize(30, 20));
        shiftZdown->setBaseSize(QSize(0, 0));
        shiftZdown->setFont(font1);

        horizontalLayout_2->addWidget(shiftZdown);


        horizontalLayout->addWidget(widget_6);

        dim2 = new QToolButton(widget_4);
        dim2->setObjectName(QStringLiteral("dim2"));
        sizePolicy1.setHeightForWidth(dim2->sizePolicy().hasHeightForWidth());
        dim2->setSizePolicy(sizePolicy1);
        dim2->setMaximumSize(QSize(56, 20));

        horizontalLayout->addWidget(dim2);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(label_4);

        showArea = new QComboBox(widget_4);
        showArea->setObjectName(QStringLiteral("showArea"));
        sizePolicy1.setHeightForWidth(showArea->sizePolicy().hasHeightForWidth());
        showArea->setSizePolicy(sizePolicy1);
        showArea->setMaximumSize(QSize(16777215, 20));
        showArea->setInsertPolicy(QComboBox::InsertAlphabetically);
        showArea->setModelColumn(0);

        horizontalLayout->addWidget(showArea);


        verticalLayout_5->addWidget(widget_4);

        a = new QWidget(panel);
        a->setObjectName(QStringLiteral("a"));
        sizePolicy1.setHeightForWidth(a->sizePolicy().hasHeightForWidth());
        a->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(a);
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_2 = new QLabel(a);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        roomSize = new QSpinBox(a);
        roomSize->setObjectName(QStringLiteral("roomSize"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(roomSize->sizePolicy().hasHeightForWidth());
        roomSize->setSizePolicy(sizePolicy4);
        roomSize->setAlignment(Qt::AlignCenter);
        roomSize->setMinimum(1);
        roomSize->setMaximum(11);
        roomSize->setValue(5);

        horizontalLayout_3->addWidget(roomSize);

        label_3 = new QLabel(a);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineSize = new QSpinBox(a);
        lineSize->setObjectName(QStringLiteral("lineSize"));
        sizePolicy4.setHeightForWidth(lineSize->sizePolicy().hasHeightForWidth());
        lineSize->setSizePolicy(sizePolicy4);
        lineSize->setAlignment(Qt::AlignCenter);
        lineSize->setMinimum(2);
        lineSize->setMaximum(20);
        lineSize->setValue(7);

        horizontalLayout_3->addWidget(lineSize);

        bubbles = new QCheckBox(a);
        bubbles->setObjectName(QStringLiteral("bubbles"));

        horizontalLayout_3->addWidget(bubbles);

        showInfo = new QCheckBox(a);
        showInfo->setObjectName(QStringLiteral("showInfo"));
        sizePolicy2.setHeightForWidth(showInfo->sizePolicy().hasHeightForWidth());
        showInfo->setSizePolicy(sizePolicy2);
        showInfo->setMinimumSize(QSize(50, 0));

        horizontalLayout_3->addWidget(showInfo);

        showRoomIDs = new QCheckBox(a);
        showRoomIDs->setObjectName(QStringLiteral("showRoomIDs"));
        sizePolicy4.setHeightForWidth(showRoomIDs->sizePolicy().hasHeightForWidth());
        showRoomIDs->setSizePolicy(sizePolicy4);
        showRoomIDs->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_3->addWidget(showRoomIDs);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_5->addWidget(a);

        widget_2 = new QWidget(panel);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        d3buttons = new QWidget(widget_3);
        d3buttons->setObjectName(QStringLiteral("d3buttons"));
        sizePolicy1.setHeightForWidth(d3buttons->sizePolicy().hasHeightForWidth());
        d3buttons->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(d3buttons);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(2);
        gridLayout->setVerticalSpacing(0);
        zRot = new QSlider(d3buttons);
        zRot->setObjectName(QStringLiteral("zRot"));
        zRot->setMaximumSize(QSize(16777215, 25));
        zRot->setMinimum(-360);
        zRot->setMaximum(360);
        zRot->setPageStep(1);
        zRot->setValue(10);
        zRot->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(zRot, 4, 1, 1, 1);

        yRot = new QSlider(d3buttons);
        yRot->setObjectName(QStringLiteral("yRot"));
        yRot->setMaximumSize(QSize(16777215, 25));
        yRot->setMinimum(-360);
        yRot->setMaximum(360);
        yRot->setPageStep(1);
        yRot->setValue(5);
        yRot->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(yRot, 4, 2, 1, 1);

        xRot = new QSlider(d3buttons);
        xRot->setObjectName(QStringLiteral("xRot"));
        xRot->setMaximumSize(QSize(16777215, 25));
        xRot->setMinimum(-100);
        xRot->setMaximum(100);
        xRot->setPageStep(1);
        xRot->setValue(1);
        xRot->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(xRot, 4, 3, 1, 1);

        increaseTop = new QToolButton(d3buttons);
        increaseTop->setObjectName(QStringLiteral("increaseTop"));
        sizePolicy1.setHeightForWidth(increaseTop->sizePolicy().hasHeightForWidth());
        increaseTop->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(increaseTop, 1, 3, 1, 1);

        increaseBottom = new QToolButton(d3buttons);
        increaseBottom->setObjectName(QStringLiteral("increaseBottom"));
        sizePolicy1.setHeightForWidth(increaseBottom->sizePolicy().hasHeightForWidth());
        increaseBottom->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(increaseBottom, 1, 1, 1, 1);

        reduceBottom = new QToolButton(d3buttons);
        reduceBottom->setObjectName(QStringLiteral("reduceBottom"));
        sizePolicy1.setHeightForWidth(reduceBottom->sizePolicy().hasHeightForWidth());
        reduceBottom->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(reduceBottom, 1, 2, 1, 1);

        reduceTop = new QToolButton(d3buttons);
        reduceTop->setObjectName(QStringLiteral("reduceTop"));
        sizePolicy1.setHeightForWidth(reduceTop->sizePolicy().hasHeightForWidth());
        reduceTop->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(reduceTop, 1, 4, 1, 1);

        singleLevel = new QToolButton(d3buttons);
        singleLevel->setObjectName(QStringLiteral("singleLevel"));
        sizePolicy1.setHeightForWidth(singleLevel->sizePolicy().hasHeightForWidth());
        singleLevel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(singleLevel, 1, 0, 1, 1);

        defaultView = new QToolButton(d3buttons);
        defaultView->setObjectName(QStringLiteral("defaultView"));
        sizePolicy1.setHeightForWidth(defaultView->sizePolicy().hasHeightForWidth());
        defaultView->setSizePolicy(sizePolicy1);
        defaultView->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(defaultView, 0, 0, 1, 1);

        topView = new QToolButton(d3buttons);
        topView->setObjectName(QStringLiteral("topView"));
        sizePolicy1.setHeightForWidth(topView->sizePolicy().hasHeightForWidth());
        topView->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(topView, 0, 1, 1, 1);

        sideView = new QToolButton(d3buttons);
        sideView->setObjectName(QStringLiteral("sideView"));
        sizePolicy1.setHeightForWidth(sideView->sizePolicy().hasHeightForWidth());
        sideView->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(sideView, 0, 2, 1, 1);

        ortho = new QToolButton(d3buttons);
        ortho->setObjectName(QStringLiteral("ortho"));
        sizePolicy1.setHeightForWidth(ortho->sizePolicy().hasHeightForWidth());
        ortho->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(ortho, 0, 3, 1, 1);

        scale = new QSlider(d3buttons);
        scale->setObjectName(QStringLiteral("scale"));
        scale->setMaximumSize(QSize(16777215, 25));
        scale->setMinimum(0);
        scale->setMaximum(1000);
        scale->setPageStep(1);
        scale->setValue(1);
        scale->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(scale, 4, 0, 1, 1);


        verticalLayout_3->addWidget(d3buttons);


        verticalLayout_4->addWidget(widget_3);


        verticalLayout_5->addWidget(widget_2);


        verticalLayout_2->addWidget(panel);


        verticalLayout->addWidget(widget);


        retranslateUi(mapper);

        QMetaObject::connectSlotsByName(mapper);
    } // setupUi

    void retranslateUi(QWidget *mapper)
    {
        togglePanel->setText(QApplication::translate("mapper", "^", 0));
        shiftLeft->setText(QApplication::translate("mapper", "\342\227\200", 0));
        shiftUp->setText(QApplication::translate("mapper", "\342\226\274", 0));
        shiftDown->setText(QApplication::translate("mapper", "\342\226\262", 0));
        shiftRight->setText(QApplication::translate("mapper", "\342\226\272", 0));
        shiftZup->setText(QApplication::translate("mapper", "+", 0));
        shiftZdown->setText(QApplication::translate("mapper", "-", 0));
        dim2->setText(QApplication::translate("mapper", "2D/3D", 0));
        label_4->setText(QApplication::translate("mapper", "Area:", 0));
        label_2->setText(QApplication::translate("mapper", "Rooms", 0));
        label_3->setText(QApplication::translate("mapper", "Exits", 0));
        bubbles->setText(QApplication::translate("mapper", "Round", 0));
        showInfo->setText(QApplication::translate("mapper", "Info", 0));
        showRoomIDs->setText(QApplication::translate("mapper", "Room IDs", 0));
        increaseTop->setText(QApplication::translate("mapper", "top + 1", 0));
        increaseBottom->setText(QApplication::translate("mapper", "bottom + 1", 0));
        reduceBottom->setText(QApplication::translate("mapper", "bottom -1", 0));
        reduceTop->setText(QApplication::translate("mapper", "top - 1", 0));
        singleLevel->setText(QApplication::translate("mapper", "1 level", 0));
        defaultView->setText(QApplication::translate("mapper", "default", 0));
        topView->setText(QApplication::translate("mapper", "top view", 0));
        sideView->setText(QApplication::translate("mapper", "side view", 0));
        ortho->setText(QApplication::translate("mapper", "all levels", 0));
        Q_UNUSED(mapper);
    } // retranslateUi

};

namespace Ui {
    class mapper: public Ui_mapper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPPER_H
