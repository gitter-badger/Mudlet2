/********************************************************************************
** Form generated from reading UI file 'actions_main_area.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONS_MAIN_AREA_H
#define UI_ACTIONS_MAIN_AREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_actions_main_area
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_action_name;
    QLineEdit *lineEdit_action_name;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBox_toolBar;
    QGridLayout *gridLayout;
    QLabel *label_action_name_6;
    QComboBox *comboBox_orientation;
    QComboBox *comboBox_location;
    QSpinBox *buttonColumns;
    QGroupBox *groupBox_appearance;
    QGridLayout *gridLayout_3;
    QLabel *label_action_name_5;
    QComboBox *buttonRotation;
    QGroupBox *checkBox_pushdownbutton;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *css;
    QLineEdit *lineEdit_action_icon;

    void setupUi(QWidget *actions_main_area)
    {
        if (actions_main_area->objectName().isEmpty())
            actions_main_area->setObjectName(QStringLiteral("actions_main_area"));
        actions_main_area->resize(900, 285);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(actions_main_area->sizePolicy().hasHeightForWidth());
        actions_main_area->setSizePolicy(sizePolicy);
        actions_main_area->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(actions_main_area);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(actions_main_area);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(6, 0, 0, 0);
        label_action_name = new QLabel(widget);
        label_action_name->setObjectName(QStringLiteral("label_action_name"));

        horizontalLayout_2->addWidget(label_action_name);

        lineEdit_action_name = new QLineEdit(widget);
        lineEdit_action_name->setObjectName(QStringLiteral("lineEdit_action_name"));

        horizontalLayout_2->addWidget(lineEdit_action_name);


        verticalLayout_2->addWidget(widget);

        widget_4 = new QWidget(actions_main_area);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy2);
        horizontalLayout_6 = new QHBoxLayout(widget_4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        groupBox_toolBar = new QGroupBox(widget_4);
        groupBox_toolBar->setObjectName(QStringLiteral("groupBox_toolBar"));
        sizePolicy2.setHeightForWidth(groupBox_toolBar->sizePolicy().hasHeightForWidth());
        groupBox_toolBar->setSizePolicy(sizePolicy2);
        groupBox_toolBar->setMinimumSize(QSize(0, 0));
        groupBox_toolBar->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(groupBox_toolBar);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_action_name_6 = new QLabel(groupBox_toolBar);
        label_action_name_6->setObjectName(QStringLiteral("label_action_name_6"));
        sizePolicy1.setHeightForWidth(label_action_name_6->sizePolicy().hasHeightForWidth());
        label_action_name_6->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_action_name_6, 0, 0, 1, 1);

        comboBox_orientation = new QComboBox(groupBox_toolBar);
        comboBox_orientation->setObjectName(QStringLiteral("comboBox_orientation"));
        sizePolicy1.setHeightForWidth(comboBox_orientation->sizePolicy().hasHeightForWidth());
        comboBox_orientation->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBox_orientation, 1, 0, 1, 2);

        comboBox_location = new QComboBox(groupBox_toolBar);
        comboBox_location->setObjectName(QStringLiteral("comboBox_location"));
        sizePolicy1.setHeightForWidth(comboBox_location->sizePolicy().hasHeightForWidth());
        comboBox_location->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBox_location, 2, 0, 1, 2);

        buttonColumns = new QSpinBox(groupBox_toolBar);
        buttonColumns->setObjectName(QStringLiteral("buttonColumns"));

        gridLayout->addWidget(buttonColumns, 0, 1, 1, 1);


        horizontalLayout_6->addWidget(groupBox_toolBar);

        groupBox_appearance = new QGroupBox(widget_4);
        groupBox_appearance->setObjectName(QStringLiteral("groupBox_appearance"));
        sizePolicy2.setHeightForWidth(groupBox_appearance->sizePolicy().hasHeightForWidth());
        groupBox_appearance->setSizePolicy(sizePolicy2);
        groupBox_appearance->setMinimumSize(QSize(0, 0));
        gridLayout_3 = new QGridLayout(groupBox_appearance);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_action_name_5 = new QLabel(groupBox_appearance);
        label_action_name_5->setObjectName(QStringLiteral("label_action_name_5"));

        gridLayout_3->addWidget(label_action_name_5, 0, 0, 1, 1);

        buttonRotation = new QComboBox(groupBox_appearance);
        buttonRotation->setObjectName(QStringLiteral("buttonRotation"));
        sizePolicy1.setHeightForWidth(buttonRotation->sizePolicy().hasHeightForWidth());
        buttonRotation->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(buttonRotation, 0, 1, 1, 1);

        checkBox_pushdownbutton = new QGroupBox(groupBox_appearance);
        checkBox_pushdownbutton->setObjectName(QStringLiteral("checkBox_pushdownbutton"));
        sizePolicy2.setHeightForWidth(checkBox_pushdownbutton->sizePolicy().hasHeightForWidth());
        checkBox_pushdownbutton->setSizePolicy(sizePolicy2);
        checkBox_pushdownbutton->setCheckable(true);
        checkBox_pushdownbutton->setChecked(false);
        horizontalLayout_4 = new QHBoxLayout(checkBox_pushdownbutton);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));

        gridLayout_3->addWidget(checkBox_pushdownbutton, 1, 0, 1, 2);


        horizontalLayout_6->addWidget(groupBox_appearance);


        verticalLayout_2->addWidget(widget_4);

        widget_2 = new QWidget(actions_main_area);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(6, 0, 6, 0);
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        css = new QPlainTextEdit(groupBox);
        css->setObjectName(QStringLiteral("css"));
        sizePolicy1.setHeightForWidth(css->sizePolicy().hasHeightForWidth());
        css->setSizePolicy(sizePolicy1);
        css->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamily(QStringLiteral("Bitstream Vera Sans Mono"));
        font.setPointSize(8);
        css->setFont(font);
        css->setTabChangesFocus(false);
        css->setBackgroundVisible(false);

        verticalLayout->addWidget(css);


        horizontalLayout_3->addWidget(groupBox);


        verticalLayout_2->addWidget(widget_2);

        lineEdit_action_icon = new QLineEdit(actions_main_area);
        lineEdit_action_icon->setObjectName(QStringLiteral("lineEdit_action_icon"));
        lineEdit_action_icon->setEnabled(false);
        lineEdit_action_icon->setMaximumSize(QSize(0, 0));

        verticalLayout_2->addWidget(lineEdit_action_icon);

        lineEdit_action_icon->raise();
        widget->raise();
        widget_2->raise();
        widget_4->raise();
#ifndef QT_NO_SHORTCUT
        label_action_name_6->setBuddy(buttonColumns);
#endif // QT_NO_SHORTCUT

        retranslateUi(actions_main_area);

        QMetaObject::connectSlotsByName(actions_main_area);
    } // setupUi

    void retranslateUi(QWidget *actions_main_area)
    {
        actions_main_area->setWindowTitle(QApplication::translate("actions_main_area", "Form", 0));
        label_action_name->setText(QApplication::translate("actions_main_area", "Name:", 0));
        groupBox_toolBar->setTitle(QApplication::translate("actions_main_area", "Button Bar Properties", 0));
        label_action_name_6->setText(QApplication::translate("actions_main_area", "Number of columns/rows (depending on orientation)::", 0));
        comboBox_orientation->clear();
        comboBox_orientation->insertItems(0, QStringList()
         << QApplication::translate("actions_main_area", "Orientation Horizontal", 0)
         << QApplication::translate("actions_main_area", "Orientation Vertical", 0)
        );
        comboBox_location->clear();
        comboBox_location->insertItems(0, QStringList()
         << QApplication::translate("actions_main_area", "Dock Area Top", 0)
         << QApplication::translate("actions_main_area", "Dock Area Left", 0)
         << QApplication::translate("actions_main_area", "Dock Area Right", 0)
         << QApplication::translate("actions_main_area", "Floating Toolbar", 0)
        );
        groupBox_appearance->setTitle(QApplication::translate("actions_main_area", "Button Properties", 0));
        label_action_name_5->setText(QApplication::translate("actions_main_area", "Button Rotation:", 0));
        buttonRotation->clear();
        buttonRotation->insertItems(0, QStringList()
         << QApplication::translate("actions_main_area", "no rotation", 0)
         << QApplication::translate("actions_main_area", "90\302\260 rotation to the left", 0)
         << QApplication::translate("actions_main_area", "90\302\260 rotation to the right", 0)
        );
        checkBox_pushdownbutton->setTitle(QApplication::translate("actions_main_area", "Push down button", 0));
        groupBox->setTitle(QApplication::translate("actions_main_area", "Optional CSS", 0));
    } // retranslateUi

};

namespace Ui {
    class actions_main_area: public Ui_actions_main_area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIONS_MAIN_AREA_H
