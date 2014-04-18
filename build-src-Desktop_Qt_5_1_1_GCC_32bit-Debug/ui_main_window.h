/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *dactionConnect;
    QAction *dactionDisconnect;
    QAction *dactionReconnect;
    QAction *dactionOptions;
    QAction *dactionScriptEditor;
    QAction *dactionNotepad;
    QAction *dactionHelp;
    QAction *dactionForum_2;
    QAction *dactionAbout;
    QAction *dactionIRC;
    QAction *dactionVideo;
    QAction *dactionReplay;
    QAction *dactionForum;
    QAction *dactionDownload;
    QAction *dactionIRC_2;
    QAction *actionLive_Help_Chat;
    QAction *actionShow_Map;
    QAction *actionPackage_manager;
    QAction *actionTest1;
    QAction *actionAsdf;
    QAction *actionModule_manager;
    QAction *actionPackage_Exporter;
    QAction *dactionMultiView;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QMdiArea *mdiArea;
    QMenuBar *MenuBar;
    QMenu *menuEditor;
    QMenu *menuOptions;
    QMenu *menuHelp;
    QMenu *menuAbout;
    QMenu *menuGames;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(750, 502);
        MainWindow->setBaseSize(QSize(780, 590));
        QIcon icon;
        icon.addFile(QStringLiteral(":/mudlet_main_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(0, 0));
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::VerticalTabs);
        dactionConnect = new QAction(MainWindow);
        dactionConnect->setObjectName(QStringLiteral("dactionConnect"));
        dactionDisconnect = new QAction(MainWindow);
        dactionDisconnect->setObjectName(QStringLiteral("dactionDisconnect"));
        dactionReconnect = new QAction(MainWindow);
        dactionReconnect->setObjectName(QStringLiteral("dactionReconnect"));
        dactionOptions = new QAction(MainWindow);
        dactionOptions->setObjectName(QStringLiteral("dactionOptions"));
        dactionScriptEditor = new QAction(MainWindow);
        dactionScriptEditor->setObjectName(QStringLiteral("dactionScriptEditor"));
        dactionNotepad = new QAction(MainWindow);
        dactionNotepad->setObjectName(QStringLiteral("dactionNotepad"));
        dactionHelp = new QAction(MainWindow);
        dactionHelp->setObjectName(QStringLiteral("dactionHelp"));
        dactionForum_2 = new QAction(MainWindow);
        dactionForum_2->setObjectName(QStringLiteral("dactionForum_2"));
        dactionAbout = new QAction(MainWindow);
        dactionAbout->setObjectName(QStringLiteral("dactionAbout"));
        dactionIRC = new QAction(MainWindow);
        dactionIRC->setObjectName(QStringLiteral("dactionIRC"));
        dactionVideo = new QAction(MainWindow);
        dactionVideo->setObjectName(QStringLiteral("dactionVideo"));
        dactionReplay = new QAction(MainWindow);
        dactionReplay->setObjectName(QStringLiteral("dactionReplay"));
        dactionForum = new QAction(MainWindow);
        dactionForum->setObjectName(QStringLiteral("dactionForum"));
        dactionDownload = new QAction(MainWindow);
        dactionDownload->setObjectName(QStringLiteral("dactionDownload"));
        dactionIRC_2 = new QAction(MainWindow);
        dactionIRC_2->setObjectName(QStringLiteral("dactionIRC_2"));
        actionLive_Help_Chat = new QAction(MainWindow);
        actionLive_Help_Chat->setObjectName(QStringLiteral("actionLive_Help_Chat"));
        actionShow_Map = new QAction(MainWindow);
        actionShow_Map->setObjectName(QStringLiteral("actionShow_Map"));
        actionPackage_manager = new QAction(MainWindow);
        actionPackage_manager->setObjectName(QStringLiteral("actionPackage_manager"));
        actionTest1 = new QAction(MainWindow);
        actionTest1->setObjectName(QStringLiteral("actionTest1"));
        actionAsdf = new QAction(MainWindow);
        actionAsdf->setObjectName(QStringLiteral("actionAsdf"));
        actionModule_manager = new QAction(MainWindow);
        actionModule_manager->setObjectName(QStringLiteral("actionModule_manager"));
        actionPackage_Exporter = new QAction(MainWindow);
        actionPackage_Exporter->setObjectName(QStringLiteral("actionPackage_Exporter"));
        dactionMultiView = new QAction(MainWindow);
        dactionMultiView->setObjectName(QStringLiteral("dactionMultiView"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        sizePolicy.setHeightForWidth(mdiArea->sizePolicy().hasHeightForWidth());
        mdiArea->setSizePolicy(sizePolicy);
        mdiArea->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(6);
        font.setStyleStrategy(QFont::PreferAntialias);
        mdiArea->setFont(font);
        mdiArea->setLineWidth(0);
        mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        mdiArea->setViewMode(QMdiArea::TabbedView);
        mdiArea->setTabShape(QTabWidget::Rounded);
        mdiArea->setTabPosition(QTabWidget::North);

        verticalLayout->addWidget(mdiArea);

        MainWindow->setCentralWidget(centralwidget);
        MenuBar = new QMenuBar(MainWindow);
        MenuBar->setObjectName(QStringLiteral("MenuBar"));
        MenuBar->setGeometry(QRect(0, 0, 750, 24));
        menuEditor = new QMenu(MenuBar);
        menuEditor->setObjectName(QStringLiteral("menuEditor"));
        menuOptions = new QMenu(MenuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        menuHelp = new QMenu(MenuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuAbout = new QMenu(MenuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuGames = new QMenu(MenuBar);
        menuGames->setObjectName(QStringLiteral("menuGames"));
        MainWindow->setMenuBar(MenuBar);

        MenuBar->addAction(menuGames->menuAction());
        MenuBar->addAction(menuEditor->menuAction());
        MenuBar->addAction(menuOptions->menuAction());
        MenuBar->addAction(menuHelp->menuAction());
        MenuBar->addAction(menuAbout->menuAction());
        menuEditor->addAction(dactionScriptEditor);
        menuEditor->addAction(actionShow_Map);
        menuEditor->addAction(dactionNotepad);
        menuEditor->addAction(actionLive_Help_Chat);
        menuEditor->addAction(actionPackage_manager);
        menuEditor->addAction(dactionReplay);
        menuEditor->addAction(actionModule_manager);
        menuEditor->addAction(actionPackage_Exporter);
        menuOptions->addAction(dactionOptions);
        menuOptions->addAction(dactionMultiView);
        menuHelp->addAction(dactionHelp);
        menuHelp->addAction(dactionVideo);
        menuHelp->addAction(dactionIRC);
        menuHelp->addAction(dactionForum);
        menuAbout->addAction(dactionAbout);
        menuAbout->addAction(dactionDownload);
        menuGames->addAction(dactionConnect);
        menuGames->addSeparator();
        menuGames->addAction(dactionDisconnect);
        menuGames->addAction(dactionReconnect);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Mudlet 1.0 - alpha 1", 0));
        dactionConnect->setText(QApplication::translate("MainWindow", "Play", 0));
        dactionConnect->setShortcut(QApplication::translate("MainWindow", "Alt+C", 0));
        dactionDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0));
        dactionDisconnect->setShortcut(QApplication::translate("MainWindow", "Alt+D", 0));
        dactionReconnect->setText(QApplication::translate("MainWindow", "Reconnect", 0));
        dactionReconnect->setShortcut(QApplication::translate("MainWindow", "Alt+R", 0));
        dactionOptions->setText(QApplication::translate("MainWindow", "Preferences", 0));
        dactionOptions->setShortcut(QApplication::translate("MainWindow", "Alt+P", 0));
        dactionScriptEditor->setText(QApplication::translate("MainWindow", "Script editor", 0));
#ifndef QT_NO_TOOLTIP
        dactionScriptEditor->setToolTip(QApplication::translate("MainWindow", "Open script editor", 0));
#endif // QT_NO_TOOLTIP
        dactionScriptEditor->setShortcut(QApplication::translate("MainWindow", "Alt+E", 0));
        dactionNotepad->setText(QApplication::translate("MainWindow", "Notepad", 0));
        dactionNotepad->setShortcut(QApplication::translate("MainWindow", "Alt+N", 0));
        dactionHelp->setText(QApplication::translate("MainWindow", "API Reference", 0));
        dactionForum_2->setText(QApplication::translate("MainWindow", "Online forum", 0));
        dactionAbout->setText(QApplication::translate("MainWindow", "About Mudlet", 0));
        dactionIRC->setText(QApplication::translate("MainWindow", "IRC help channel", 0));
        dactionVideo->setText(QApplication::translate("MainWindow", "Video tutorials", 0));
        dactionReplay->setText(QApplication::translate("MainWindow", "Load replay", 0));
        dactionForum->setText(QApplication::translate("MainWindow", "Online forum", 0));
        dactionDownload->setText(QApplication::translate("MainWindow", "Download latest version", 0));
        dactionIRC_2->setText(QApplication::translate("MainWindow", "Help chat", 0));
#ifndef QT_NO_TOOLTIP
        dactionIRC_2->setToolTip(QApplication::translate("MainWindow", "Get live help on IRC. If nobody answers right away, give it time", 0));
#endif // QT_NO_TOOLTIP
        actionLive_Help_Chat->setText(QApplication::translate("MainWindow", "Live help chat", 0));
        actionShow_Map->setText(QApplication::translate("MainWindow", "Show map", 0));
        actionShow_Map->setShortcut(QApplication::translate("MainWindow", "Alt+M", 0));
        actionPackage_manager->setText(QApplication::translate("MainWindow", "Package manager", 0));
        actionPackage_manager->setShortcut(QApplication::translate("MainWindow", "Alt+O", 0));
        actionTest1->setText(QApplication::translate("MainWindow", "test1", 0));
        actionAsdf->setText(QApplication::translate("MainWindow", "asdf", 0));
        actionModule_manager->setText(QApplication::translate("MainWindow", "Module manager", 0));
        actionPackage_Exporter->setText(QApplication::translate("MainWindow", "Package exporter (experimental)", 0));
        dactionMultiView->setText(QApplication::translate("MainWindow", "MultiView", 0));
        dactionMultiView->setShortcut(QApplication::translate("MainWindow", "Alt+V", 0));
        menuEditor->setTitle(QApplication::translate("MainWindow", "Toolbox", 0));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0));
        menuGames->setTitle(QApplication::translate("MainWindow", "Games", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
