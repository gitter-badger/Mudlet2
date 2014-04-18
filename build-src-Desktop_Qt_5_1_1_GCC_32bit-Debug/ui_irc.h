/********************************************************************************
** Form generated from reading UI file 'irc.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IRC_H
#define UI_IRC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_irc_dlg
{
public:
    QAction *actionAlias;
    QAction *toolButton_add_trigger_menu;
    QAction *actionVariable;
    QAction *actionAlias_2;
    QAction *toolButton_delete_trigger_menu;
    QAction *actionVariable_2;
    QAction *toolButton_add_trigger_group_menu;
    QAction *actionGroup;
    QAction *actionAliases;
    QAction *actionTriggers;
    QAction *actionVariables;
    QAction *actionScript_options;
    QAction *toolButton_search_area_2_menu;
    QAction *actionExpert_mode_menu;
    QWidget *ircWidget;
    QVBoxLayout *verticalLayout;
    QWidget *i1;
    QGridLayout *gridLayout_2;
    QWidget *i2;
    QVBoxLayout *verticalLayout_2;
    QWidget *i3;
    QVBoxLayout *verticalLayout_8;
    QSplitter *splitter;
    QFrame *left_frame;
    QVBoxLayout *verticalLayout_3;
    QWidget *irctext;
    QVBoxLayout *verticalLayout_6;
    QTextBrowser *irc;
    QLineEdit *lineEdit;
    QFrame *right_frame;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *nickList;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *irc_dlg)
    {
        if (irc_dlg->objectName().isEmpty())
            irc_dlg->setObjectName(QStringLiteral("irc_dlg"));
        irc_dlg->resize(621, 443);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(irc_dlg->sizePolicy().hasHeightForWidth());
        irc_dlg->setSizePolicy(sizePolicy);
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        irc_dlg->setFont(font);
        irc_dlg->setUnifiedTitleAndToolBarOnMac(true);
        actionAlias = new QAction(irc_dlg);
        actionAlias->setObjectName(QStringLiteral("actionAlias"));
        toolButton_add_trigger_menu = new QAction(irc_dlg);
        toolButton_add_trigger_menu->setObjectName(QStringLiteral("toolButton_add_trigger_menu"));
        actionVariable = new QAction(irc_dlg);
        actionVariable->setObjectName(QStringLiteral("actionVariable"));
        actionAlias_2 = new QAction(irc_dlg);
        actionAlias_2->setObjectName(QStringLiteral("actionAlias_2"));
        toolButton_delete_trigger_menu = new QAction(irc_dlg);
        toolButton_delete_trigger_menu->setObjectName(QStringLiteral("toolButton_delete_trigger_menu"));
        actionVariable_2 = new QAction(irc_dlg);
        actionVariable_2->setObjectName(QStringLiteral("actionVariable_2"));
        toolButton_add_trigger_group_menu = new QAction(irc_dlg);
        toolButton_add_trigger_group_menu->setObjectName(QStringLiteral("toolButton_add_trigger_group_menu"));
        actionGroup = new QAction(irc_dlg);
        actionGroup->setObjectName(QStringLiteral("actionGroup"));
        actionAliases = new QAction(irc_dlg);
        actionAliases->setObjectName(QStringLiteral("actionAliases"));
        actionAliases->setCheckable(true);
        actionTriggers = new QAction(irc_dlg);
        actionTriggers->setObjectName(QStringLiteral("actionTriggers"));
        actionTriggers->setCheckable(true);
        actionVariables = new QAction(irc_dlg);
        actionVariables->setObjectName(QStringLiteral("actionVariables"));
        actionVariables->setCheckable(true);
        actionScript_options = new QAction(irc_dlg);
        actionScript_options->setObjectName(QStringLiteral("actionScript_options"));
        actionScript_options->setCheckable(true);
        toolButton_search_area_2_menu = new QAction(irc_dlg);
        toolButton_search_area_2_menu->setObjectName(QStringLiteral("toolButton_search_area_2_menu"));
        toolButton_search_area_2_menu->setCheckable(true);
        actionExpert_mode_menu = new QAction(irc_dlg);
        actionExpert_mode_menu->setObjectName(QStringLiteral("actionExpert_mode_menu"));
        ircWidget = new QWidget(irc_dlg);
        ircWidget->setObjectName(QStringLiteral("ircWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ircWidget->sizePolicy().hasHeightForWidth());
        ircWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(ircWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        i1 = new QWidget(ircWidget);
        i1->setObjectName(QStringLiteral("i1"));
        sizePolicy1.setHeightForWidth(i1->sizePolicy().hasHeightForWidth());
        i1->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(i1);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        i2 = new QWidget(i1);
        i2->setObjectName(QStringLiteral("i2"));
        sizePolicy1.setHeightForWidth(i2->sizePolicy().hasHeightForWidth());
        i2->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(i2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 0, 3, 0);
        i3 = new QWidget(i2);
        i3->setObjectName(QStringLiteral("i3"));
        sizePolicy1.setHeightForWidth(i3->sizePolicy().hasHeightForWidth());
        i3->setSizePolicy(sizePolicy1);
        verticalLayout_8 = new QVBoxLayout(i3);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        splitter = new QSplitter(i3);
        splitter->setObjectName(QStringLiteral("splitter"));
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setLineWidth(0);
        splitter->setMidLineWidth(5);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(5);
        left_frame = new QFrame(splitter);
        left_frame->setObjectName(QStringLiteral("left_frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(left_frame->sizePolicy().hasHeightForWidth());
        left_frame->setSizePolicy(sizePolicy2);
        left_frame->setMinimumSize(QSize(0, 0));
        left_frame->setBaseSize(QSize(0, 0));
        left_frame->setFrameShape(QFrame::NoFrame);
        left_frame->setFrameShadow(QFrame::Plain);
        left_frame->setLineWidth(1);
        verticalLayout_3 = new QVBoxLayout(left_frame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        irctext = new QWidget(left_frame);
        irctext->setObjectName(QStringLiteral("irctext"));
        sizePolicy1.setHeightForWidth(irctext->sizePolicy().hasHeightForWidth());
        irctext->setSizePolicy(sizePolicy1);
        verticalLayout_6 = new QVBoxLayout(irctext);
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        irc = new QTextBrowser(irctext);
        irc->setObjectName(QStringLiteral("irc"));

        verticalLayout_6->addWidget(irc);

        lineEdit = new QLineEdit(irctext);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_6->addWidget(lineEdit);


        verticalLayout_3->addWidget(irctext);

        splitter->addWidget(left_frame);
        right_frame = new QFrame(splitter);
        right_frame->setObjectName(QStringLiteral("right_frame"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(right_frame->sizePolicy().hasHeightForWidth());
        right_frame->setSizePolicy(sizePolicy3);
        right_frame->setMaximumSize(QSize(16777215, 16777215));
        right_frame->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setStyleStrategy(QFont::PreferAntialias);
        right_frame->setFont(font1);
        right_frame->setFrameShape(QFrame::NoFrame);
        right_frame->setFrameShadow(QFrame::Plain);
        right_frame->setLineWidth(1);
        horizontalLayout_2 = new QHBoxLayout(right_frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        nickList = new QListWidget(right_frame);
        nickList->setObjectName(QStringLiteral("nickList"));
        nickList->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(nickList);

        splitter->addWidget(right_frame);

        verticalLayout_8->addWidget(splitter);


        verticalLayout_2->addWidget(i3);


        gridLayout_2->addWidget(i2, 0, 0, 1, 1);


        verticalLayout->addWidget(i1);

        irc_dlg->setCentralWidget(ircWidget);
        statusBar = new QStatusBar(irc_dlg);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        irc_dlg->setStatusBar(statusBar);

        retranslateUi(irc_dlg);

        QMetaObject::connectSlotsByName(irc_dlg);
    } // setupUi

    void retranslateUi(QMainWindow *irc_dlg)
    {
        irc_dlg->setWindowTitle(QApplication::translate("irc_dlg", "Script editor", 0));
        actionAlias->setText(QApplication::translate("irc_dlg", "Alias", 0));
        toolButton_add_trigger_menu->setText(QApplication::translate("irc_dlg", "Trigger", 0));
        actionVariable->setText(QApplication::translate("irc_dlg", "Variable", 0));
        actionAlias_2->setText(QApplication::translate("irc_dlg", "Alias", 0));
        toolButton_delete_trigger_menu->setText(QApplication::translate("irc_dlg", "Trigger", 0));
        actionVariable_2->setText(QApplication::translate("irc_dlg", "Variable", 0));
        toolButton_add_trigger_group_menu->setText(QApplication::translate("irc_dlg", "Group", 0));
        actionGroup->setText(QApplication::translate("irc_dlg", "Group", 0));
        actionAliases->setText(QApplication::translate("irc_dlg", "Aliases", 0));
        actionTriggers->setText(QApplication::translate("irc_dlg", "Triggers", 0));
        actionVariables->setText(QApplication::translate("irc_dlg", "Variables", 0));
        actionScript_options->setText(QApplication::translate("irc_dlg", "Script options", 0));
        toolButton_search_area_2_menu->setText(QApplication::translate("irc_dlg", "Search results", 0));
        actionExpert_mode_menu->setText(QApplication::translate("irc_dlg", "Expert mode", 0));
    } // retranslateUi

};

namespace Ui {
    class irc_dlg: public Ui_irc_dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IRC_H
