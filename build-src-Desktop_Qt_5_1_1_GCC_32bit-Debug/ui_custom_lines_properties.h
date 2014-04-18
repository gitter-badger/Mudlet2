/********************************************************************************
** Form generated from reading UI file 'custom_lines_properties.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOM_LINES_PROPERTIES_H
#define UI_CUSTOM_LINES_PROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_roomExitProperties
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_settings;
    QGridLayout *gridLayout_style;
    QLabel *label_3;
    QLabel *label_2;
    QCheckBox *arrow;
    QComboBox *lineStyle;
    QPushButton *lineColor;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_fromId;
    QLineEdit *fromId;
    QLabel *label_toId;
    QLineEdit *toId;
    QLabel *label_cmd;
    QLineEdit *cmd;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *roomExitProperties)
    {
        if (roomExitProperties->objectName().isEmpty())
            roomExitProperties->setObjectName(QStringLiteral("roomExitProperties"));
        roomExitProperties->setWindowModality(Qt::WindowModal);
        roomExitProperties->resize(500, 206);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(roomExitProperties->sizePolicy().hasHeightForWidth());
        roomExitProperties->setSizePolicy(sizePolicy);
        roomExitProperties->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QStringLiteral("../icons/mudlet_custom_exit_properties.png"), QSize(), QIcon::Normal, QIcon::Off);
        roomExitProperties->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(roomExitProperties);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_settings = new QGroupBox(roomExitProperties);
        groupBox_settings->setObjectName(QStringLiteral("groupBox_settings"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_settings->sizePolicy().hasHeightForWidth());
        groupBox_settings->setSizePolicy(sizePolicy1);
        gridLayout_style = new QGridLayout(groupBox_settings);
        gridLayout_style->setObjectName(QStringLiteral("gridLayout_style"));
        label_3 = new QLabel(groupBox_settings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(60, 16777215));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_style->addWidget(label_3, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox_settings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(35, 16777215));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_style->addWidget(label_2, 0, 0, 1, 1);

        arrow = new QCheckBox(groupBox_settings);
        arrow->setObjectName(QStringLiteral("arrow"));
        arrow->setMaximumSize(QSize(220, 16777215));
        arrow->setCursor(QCursor(Qt::PointingHandCursor));
        arrow->setMouseTracking(false);
        arrow->setLayoutDirection(Qt::RightToLeft);

        gridLayout_style->addWidget(arrow, 0, 6, 1, 1);

        lineStyle = new QComboBox(groupBox_settings);
        lineStyle->setObjectName(QStringLiteral("lineStyle"));
        lineStyle->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_style->addWidget(lineStyle, 0, 1, 1, 2);

        lineColor = new QPushButton(groupBox_settings);
        lineColor->setObjectName(QStringLiteral("lineColor"));
        lineColor->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_style->addWidget(lineColor, 0, 5, 1, 1);


        gridLayout_2->addWidget(groupBox_settings, 0, 0, 1, 1);

        groupBox = new QGroupBox(roomExitProperties);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setCursor(QCursor(Qt::ForbiddenCursor));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_fromId = new QLabel(groupBox);
        label_fromId->setObjectName(QStringLiteral("label_fromId"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_fromId->sizePolicy().hasHeightForWidth());
        label_fromId->setSizePolicy(sizePolicy2);
        label_fromId->setCursor(QCursor(Qt::ForbiddenCursor));
        label_fromId->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_fromId, 0, 0, 1, 1);

        fromId = new QLineEdit(groupBox);
        fromId->setObjectName(QStringLiteral("fromId"));
        fromId->setMaximumSize(QSize(80, 16777215));
        fromId->setCursor(QCursor(Qt::ForbiddenCursor));
        fromId->setFocusPolicy(Qt::NoFocus);
        fromId->setReadOnly(true);

        gridLayout->addWidget(fromId, 0, 1, 1, 1);

        label_toId = new QLabel(groupBox);
        label_toId->setObjectName(QStringLiteral("label_toId"));
        sizePolicy2.setHeightForWidth(label_toId->sizePolicy().hasHeightForWidth());
        label_toId->setSizePolicy(sizePolicy2);
        label_toId->setCursor(QCursor(Qt::ForbiddenCursor));
        label_toId->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_toId, 1, 0, 1, 1);

        toId = new QLineEdit(groupBox);
        toId->setObjectName(QStringLiteral("toId"));
        toId->setEnabled(true);
        toId->setMaximumSize(QSize(80, 16777215));
        toId->setCursor(QCursor(Qt::ForbiddenCursor));
        toId->setFocusPolicy(Qt::NoFocus);
        toId->setReadOnly(true);

        gridLayout->addWidget(toId, 1, 1, 1, 1);

        label_cmd = new QLabel(groupBox);
        label_cmd->setObjectName(QStringLiteral("label_cmd"));
        label_cmd->setCursor(QCursor(Qt::ForbiddenCursor));
        label_cmd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_cmd->setWordWrap(true);

        gridLayout->addWidget(label_cmd, 0, 2, 2, 1);

        cmd = new QLineEdit(groupBox);
        cmd->setObjectName(QStringLiteral("cmd"));
        cmd->setCursor(QCursor(Qt::ForbiddenCursor));
        cmd->setFocusPolicy(Qt::NoFocus);
        cmd->setReadOnly(true);

        gridLayout->addWidget(cmd, 0, 3, 2, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(roomExitProperties);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_3->setBuddy(lineColor);
        label_2->setBuddy(lineStyle);
        label_fromId->setBuddy(fromId);
        label_toId->setBuddy(toId);
        label_cmd->setBuddy(cmd);
#endif // QT_NO_SHORTCUT

        retranslateUi(roomExitProperties);
        QObject::connect(buttonBox, SIGNAL(accepted()), roomExitProperties, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), roomExitProperties, SLOT(reject()));

        QMetaObject::connectSlotsByName(roomExitProperties);
    } // setupUi

    void retranslateUi(QDialog *roomExitProperties)
    {
        roomExitProperties->setWindowTitle(QApplication::translate("roomExitProperties", "Custom Line Properties [*]", 0));
#ifndef QT_NO_TOOLTIP
        groupBox_settings->setToolTip(QApplication::translate("roomExitProperties", "Select Style, Color and whether to end the line with an arrow head.", 0));
#endif // QT_NO_TOOLTIP
        groupBox_settings->setTitle(QApplication::translate("roomExitProperties", "Line Settings:", 0));
        label_3->setText(QApplication::translate("roomExitProperties", "Color:", 0));
        label_2->setText(QApplication::translate("roomExitProperties", "Style:", 0));
        arrow->setText(QApplication::translate("roomExitProperties", "Ends with an arrow:", 0));
        lineColor->setText(QString());
        groupBox->setTitle(QApplication::translate("roomExitProperties", "Exit Details:", 0));
        label_fromId->setText(QApplication::translate("roomExitProperties", "Origin:", 0));
        label_toId->setText(QApplication::translate("roomExitProperties", "Destination:", 0));
        label_cmd->setText(QApplication::translate("roomExitProperties", "    Direction/Command:", 0));
    } // retranslateUi

};

namespace Ui {
    class roomExitProperties: public Ui_roomExitProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOM_LINES_PROPERTIES_H
