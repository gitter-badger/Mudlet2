/********************************************************************************
** Form generated from reading UI file 'module_manager.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULE_MANAGER_H
#define UI_MODULE_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_packageDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *moduleTable;
    QTextBrowser *textBrowser;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *uninstallButton;
    QPushButton *installButton;
    QPushButton *helpButton;

    void setupUi(QDialog *packageDialog)
    {
        if (packageDialog->objectName().isEmpty())
            packageDialog->setObjectName(QStringLiteral("packageDialog"));
        packageDialog->resize(652, 508);
        verticalLayout_3 = new QVBoxLayout(packageDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget = new QWidget(packageDialog);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        moduleTable = new QTableWidget(widget);
        if (moduleTable->columnCount() < 4)
            moduleTable->setColumnCount(4);
        moduleTable->setObjectName(QStringLiteral("moduleTable"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(moduleTable->sizePolicy().hasHeightForWidth());
        moduleTable->setSizePolicy(sizePolicy1);
        moduleTable->setAlternatingRowColors(true);
        moduleTable->setSelectionMode(QAbstractItemView::SingleSelection);
        moduleTable->setSortingEnabled(true);
        moduleTable->setRowCount(0);
        moduleTable->setColumnCount(4);
        moduleTable->horizontalHeader()->setCascadingSectionResizes(false);
        moduleTable->horizontalHeader()->setStretchLastSection(true);
        moduleTable->verticalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(moduleTable);

        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(7);
        textBrowser->setFont(font);
        textBrowser->setFrameShape(QFrame::Box);
        textBrowser->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(textBrowser);


        verticalLayout_3->addWidget(widget);

        widget_2 = new QWidget(packageDialog);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy3);
        widget_2->setLayoutDirection(Qt::RightToLeft);
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        uninstallButton = new QPushButton(widget_2);
        uninstallButton->setObjectName(QStringLiteral("uninstallButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(uninstallButton->sizePolicy().hasHeightForWidth());
        uninstallButton->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(uninstallButton);

        installButton = new QPushButton(widget_2);
        installButton->setObjectName(QStringLiteral("installButton"));
        sizePolicy4.setHeightForWidth(installButton->sizePolicy().hasHeightForWidth());
        installButton->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(installButton);

        helpButton = new QPushButton(widget_2);
        helpButton->setObjectName(QStringLiteral("helpButton"));

        horizontalLayout->addWidget(helpButton);


        verticalLayout_3->addWidget(widget_2);


        retranslateUi(packageDialog);

        QMetaObject::connectSlotsByName(packageDialog);
    } // setupUi

    void retranslateUi(QDialog *packageDialog)
    {
        packageDialog->setWindowTitle(QApplication::translate("packageDialog", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("packageDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:7pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Modules are a way to utilize a common package across many sessions - unlike packages, which are installed per-profile.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Modules are loaded in ascending priority (1 will get loaded first, 2 seco"
                        "nd). Modules with the same priority will be loaded in alphabetical order.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The 'save &amp; sync' option, if it is enabled, will save the module to disk, and then reload the module for all open sessions which also are using that module. To make several profiles use the same module, install it in each profile through the module manager.   Zip and mpackage modules are currently unable to be synced, only .xml packages are able to be synchronized  across profiles at the moment.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\""
                        " margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">For each save operation, modules are backed up to a directory, </span><span style=\" font-size:10pt; font-style:italic;\">moduleBackups</span><span style=\" font-size:10pt;\">, within your Mudlet profile directory.</span></p></body></html>", 0));
        uninstallButton->setText(QApplication::translate("packageDialog", "Uninstall", 0));
        installButton->setText(QApplication::translate("packageDialog", "Install", 0));
        helpButton->setText(QApplication::translate("packageDialog", "Module Help", 0));
    } // retranslateUi

};

namespace Ui {
    class packageDialog: public Ui_packageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULE_MANAGER_H
