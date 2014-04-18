/********************************************************************************
** Form generated from reading UI file 'source_editor_area.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOURCE_EDITOR_AREA_H
#define UI_SOURCE_EDITOR_AREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_source_editor_area
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *editor;

    void setupUi(QWidget *source_editor_area)
    {
        if (source_editor_area->objectName().isEmpty())
            source_editor_area->setObjectName(QStringLiteral("source_editor_area"));
        source_editor_area->resize(795, 573);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(source_editor_area->sizePolicy().hasHeightForWidth());
        source_editor_area->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(source_editor_area);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        editor = new QPlainTextEdit(source_editor_area);
        editor->setObjectName(QStringLiteral("editor"));

        verticalLayout->addWidget(editor);


        retranslateUi(source_editor_area);

        QMetaObject::connectSlotsByName(source_editor_area);
    } // setupUi

    void retranslateUi(QWidget *source_editor_area)
    {
        source_editor_area->setWindowTitle(QApplication::translate("source_editor_area", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class source_editor_area: public Ui_source_editor_area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOURCE_EDITOR_AREA_H
