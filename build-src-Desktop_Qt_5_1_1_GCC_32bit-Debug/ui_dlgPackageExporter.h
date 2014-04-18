/********************************************************************************
** Form generated from reading UI file 'dlgPackageExporter.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPACKAGEEXPORTER_H
#define UI_DLGPACKAGEEXPORTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlgPackageExporter
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *textLabel1_2;
    QPushButton *addFiles;
    QLabel *textLabel1;
    QLineEdit *filePath;
    QPushButton *browseButton;
    QLabel *infoLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dlgPackageExporter)
    {
        if (dlgPackageExporter->objectName().isEmpty())
            dlgPackageExporter->setObjectName(QStringLiteral("dlgPackageExporter"));
        dlgPackageExporter->resize(655, 411);
        verticalLayout = new QVBoxLayout(dlgPackageExporter);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(dlgPackageExporter);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        widget = new QWidget(dlgPackageExporter);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textLabel1_2 = new QLabel(widget);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));
        textLabel1_2->setWordWrap(true);

        gridLayout->addWidget(textLabel1_2, 0, 0, 1, 2);

        addFiles = new QPushButton(widget);
        addFiles->setObjectName(QStringLiteral("addFiles"));

        gridLayout->addWidget(addFiles, 0, 2, 1, 1);

        textLabel1 = new QLabel(widget);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));

        gridLayout->addWidget(textLabel1, 1, 0, 1, 1);

        filePath = new QLineEdit(widget);
        filePath->setObjectName(QStringLiteral("filePath"));

        gridLayout->addWidget(filePath, 1, 1, 1, 1);

        browseButton = new QPushButton(widget);
        browseButton->setObjectName(QStringLiteral("browseButton"));

        gridLayout->addWidget(browseButton, 1, 2, 1, 1);


        verticalLayout->addWidget(widget);

        infoLabel = new QLabel(dlgPackageExporter);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));
        QFont font;
        font.setPointSize(8);
        infoLabel->setFont(font);
        infoLabel->setAlignment(Qt::AlignCenter);
        infoLabel->setWordWrap(true);

        verticalLayout->addWidget(infoLabel);

        buttonBox = new QDialogButtonBox(dlgPackageExporter);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        textLabel1_2->setBuddy(textLabel1_2);
        textLabel1->setBuddy(browseButton);
#endif // QT_NO_SHORTCUT

        retranslateUi(dlgPackageExporter);
        QObject::connect(buttonBox, SIGNAL(accepted()), dlgPackageExporter, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dlgPackageExporter, SLOT(reject()));

        QMetaObject::connectSlotsByName(dlgPackageExporter);
    } // setupUi

    void retranslateUi(QDialog *dlgPackageExporter)
    {
        dlgPackageExporter->setWindowTitle(QApplication::translate("dlgPackageExporter", "Package Exporter", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("dlgPackageExporter", "Check items to export", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("dlgPackageExporter", "Triggers", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("dlgPackageExporter", "Aliases", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("dlgPackageExporter", "Timers", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("dlgPackageExporter", "Scripts", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("dlgPackageExporter", "Keys", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("dlgPackageExporter", "Buttons", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        textLabel1_2->setText(QApplication::translate("dlgPackageExporter", "Do you want to add additional files to the package e. g. images, sounds etc. ? The add files button will bring up the file explorer. Copy all files and folders that you want to add to the package in the temporary package directory that is shown in the file explorer. When you are done click on the export button below to start package creation.", 0));
        addFiles->setText(QApplication::translate("dlgPackageExporter", "Add Files", 0));
        textLabel1->setText(QApplication::translate("dlgPackageExporter", "Export location:", 0));
        browseButton->setText(QApplication::translate("dlgPackageExporter", "Select", 0));
        infoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dlgPackageExporter: public Ui_dlgPackageExporter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGPACKAGEEXPORTER_H
