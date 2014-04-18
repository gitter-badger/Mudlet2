/********************************************************************************
** Form generated from reading UI file 'vars_main_area.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VARS_MAIN_AREA_H
#define UI_VARS_MAIN_AREA_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vars_main_area
{
public:
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_var_name;
    QHBoxLayout *horizontalLayout;
    QGroupBox *hideVariable;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QGroupBox *key_type_box;
    QGridLayout *gridLayout_8;
    QComboBox *key_type;
    QGroupBox *var_type_box;
    QGridLayout *gridLayout_7;
    QComboBox *var_type;

    void setupUi(QWidget *vars_main_area)
    {
        if (vars_main_area->objectName().isEmpty())
            vars_main_area->setObjectName(QStringLiteral("vars_main_area"));
        vars_main_area->resize(584, 92);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vars_main_area->sizePolicy().hasHeightForWidth());
        vars_main_area->setSizePolicy(sizePolicy);
        vars_main_area->setMinimumSize(QSize(0, 0));
        vars_main_area->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_2 = new QVBoxLayout(vars_main_area);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_var_name = new QLineEdit(vars_main_area);
        lineEdit_var_name->setObjectName(QStringLiteral("lineEdit_var_name"));

        verticalLayout_2->addWidget(lineEdit_var_name);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        hideVariable = new QGroupBox(vars_main_area);
        hideVariable->setObjectName(QStringLiteral("hideVariable"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(255, 254, 215, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        hideVariable->setPalette(palette);
        hideVariable->setAutoFillBackground(true);
        hideVariable->setCheckable(true);
        hideVariable->setChecked(false);
        verticalLayout = new QVBoxLayout(hideVariable);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 9, 3, 9);
        label_3 = new QLabel(hideVariable);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(0, 25));
        label_3->setMaximumSize(QSize(16777215, 25));
        label_3->setWordWrap(true);
        label_3->setIndent(0);

        verticalLayout->addWidget(label_3);


        horizontalLayout->addWidget(hideVariable);

        key_type_box = new QGroupBox(vars_main_area);
        key_type_box->setObjectName(QStringLiteral("key_type_box"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush2(QColor(248, 217, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        key_type_box->setPalette(palette1);
        key_type_box->setAutoFillBackground(true);
        key_type_box->setCheckable(false);
        key_type_box->setChecked(false);
        gridLayout_8 = new QGridLayout(key_type_box);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(5, 5, 1, 1);
        key_type = new QComboBox(key_type_box);
        key_type->setObjectName(QStringLiteral("key_type"));

        gridLayout_8->addWidget(key_type, 0, 0, 1, 1);


        horizontalLayout->addWidget(key_type_box);

        var_type_box = new QGroupBox(vars_main_area);
        var_type_box->setObjectName(QStringLiteral("var_type_box"));
        var_type_box->setEnabled(true);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush3(QColor(255, 206, 217, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        var_type_box->setPalette(palette2);
        var_type_box->setAutoFillBackground(true);
        var_type_box->setCheckable(false);
        var_type_box->setChecked(false);
        gridLayout_7 = new QGridLayout(var_type_box);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(5, 5, 1, 1);
        var_type = new QComboBox(var_type_box);
        var_type->setObjectName(QStringLiteral("var_type"));

        gridLayout_7->addWidget(var_type, 0, 0, 1, 1);


        horizontalLayout->addWidget(var_type_box);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(vars_main_area);

        QMetaObject::connectSlotsByName(vars_main_area);
    } // setupUi

    void retranslateUi(QWidget *vars_main_area)
    {
        vars_main_area->setWindowTitle(QApplication::translate("vars_main_area", "Form", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_var_name->setToolTip(QApplication::translate("vars_main_area", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Set the <span style=\" font-style:italic;\">global variable</span> or the <span style=\" font-style:italic;\">table entry</span> name here. The name has to start with a letter, but can contain a mix of letters and numbers.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        lineEdit_var_name->setPlaceholderText(QApplication::translate("vars_main_area", "Variable name...", 0));
#ifndef QT_NO_TOOLTIP
        hideVariable->setToolTip(QApplication::translate("vars_main_area", "Hides this variable from the variables view, if hidden variables are enabled. \n"
"\n"
"You might want to hide variables that aren't related to you, so you can focus only\n"
"on your own system and not be distrated by some of the Mudlet defaults -\n"
"or, alternatively, use this not to mess them by up accident", 0));
#endif // QT_NO_TOOLTIP
        hideVariable->setTitle(QApplication::translate("vars_main_area", "hidden variable", 0));
        label_3->setText(QApplication::translate("vars_main_area", "doesn't show if hidden variables are enabled", 0));
#ifndef QT_NO_TOOLTIP
        key_type_box->setToolTip(QApplication::translate("vars_main_area", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If this variable is a key of a table, then you can select it to either be an <span style=\" font-style:italic;\">indexed key</span> or a <span style=\" font-style:italic;\">key</span> type.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        key_type_box->setTitle(QApplication::translate("vars_main_area", "key type", 0));
        key_type->clear();
        key_type->insertItems(0, QStringList()
         << QApplication::translate("vars_main_area", "Auto-Type", 0)
         << QApplication::translate("vars_main_area", "key (string)", 0)
         << QApplication::translate("vars_main_area", "index (integer)", 0)
         << QApplication::translate("vars_main_area", "table (cannot create from GUI)", 0)
         << QApplication::translate("vars_main_area", "function (cannot create from GUI)", 0)
        );
#ifndef QT_NO_TOOLTIP
        key_type->setToolTip(QApplication::translate("vars_main_area", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Tables can store values either in a list, and/or a hashmap. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">In a <span style=\" font-weight:600;\">list</span>, <span style=\" font-style:italic;\">indexed keys</span> represent values - so you can have values at <span style=\" font-style:italic;\">1, 2, 3...</span></p>\n"
"<p style=\""
                        "-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">In a <span style=\" font-weight:600;\">map</span><span style=\" font-weight:600; font-style:italic;\">, </span><span style=\" font-style:italic;\">keys</span> represent values - so you can have values under any name you'd like.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This selects whenever you'd like your key to be an indexed or a non-indexed type.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        var_type_box->setToolTip(QApplication::translate("vars_main_area", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Type of value the variable data (in the big box below) should be.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">string</span> - it's text (can contain numbers)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span s"
                        "tyle=\" font-style:italic;\">number</span> - it's numbers only</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">boolean</span> - true/false value only</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">table</span> - this is a table (group), and can have other values in it</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        var_type_box->setTitle(QApplication::translate("vars_main_area", "value type", 0));
        var_type->clear();
        var_type->insertItems(0, QStringList()
         << QApplication::translate("vars_main_area", "Auto-Type", 0)
         << QApplication::translate("vars_main_area", "string", 0)
         << QApplication::translate("vars_main_area", "number", 0)
         << QApplication::translate("vars_main_area", "boolean", 0)
         << QApplication::translate("vars_main_area", "table", 0)
         << QApplication::translate("vars_main_area", "function", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class vars_main_area: public Ui_vars_main_area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VARS_MAIN_AREA_H
