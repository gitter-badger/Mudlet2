/********************************************************************************
** Form generated from reading UI file 'keybindings_main_area.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBINDINGS_MAIN_AREA_H
#define UI_KEYBINDINGS_MAIN_AREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_keys_main_area
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_name;
    QLabel *label_2;
    QLineEdit *lineEdit_command;
    QLabel *label_3;
    QLineEdit *lineEdit_key;
    QPushButton *pushButton_grabKey;

    void setupUi(QWidget *keys_main_area)
    {
        if (keys_main_area->objectName().isEmpty())
            keys_main_area->setObjectName(QStringLiteral("keys_main_area"));
        keys_main_area->resize(402, 80);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(keys_main_area->sizePolicy().hasHeightForWidth());
        keys_main_area->setSizePolicy(sizePolicy);
        keys_main_area->setMinimumSize(QSize(0, 80));
        keys_main_area->setMaximumSize(QSize(16777215, 80));
        gridLayout = new QGridLayout(keys_main_area);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(4);
        label_4 = new QLabel(keys_main_area);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_name = new QLineEdit(keys_main_area);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        gridLayout->addWidget(lineEdit_name, 0, 1, 1, 2);

        label_2 = new QLabel(keys_main_area);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_command = new QLineEdit(keys_main_area);
        lineEdit_command->setObjectName(QStringLiteral("lineEdit_command"));

        gridLayout->addWidget(lineEdit_command, 1, 1, 1, 2);

        label_3 = new QLabel(keys_main_area);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_key = new QLineEdit(keys_main_area);
        lineEdit_key->setObjectName(QStringLiteral("lineEdit_key"));
        QPalette palette;
        QBrush brush(QColor(225, 232, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(244, 244, 244, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEdit_key->setPalette(palette);
        lineEdit_key->setReadOnly(true);

        gridLayout->addWidget(lineEdit_key, 2, 1, 1, 1);

        pushButton_grabKey = new QPushButton(keys_main_area);
        pushButton_grabKey->setObjectName(QStringLiteral("pushButton_grabKey"));

        gridLayout->addWidget(pushButton_grabKey, 2, 2, 1, 1);


        retranslateUi(keys_main_area);

        QMetaObject::connectSlotsByName(keys_main_area);
    } // setupUi

    void retranslateUi(QWidget *keys_main_area)
    {
        keys_main_area->setWindowTitle(QApplication::translate("keys_main_area", "Form", 0));
        label_4->setText(QApplication::translate("keys_main_area", "Name:", 0));
        label_2->setText(QApplication::translate("keys_main_area", "Command:", 0));
        label_3->setText(QApplication::translate("keys_main_area", "Key Binding:", 0));
        pushButton_grabKey->setText(QApplication::translate("keys_main_area", "Grab New Key", 0));
    } // retranslateUi

};

namespace Ui {
    class keys_main_area: public Ui_keys_main_area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBINDINGS_MAIN_AREA_H
