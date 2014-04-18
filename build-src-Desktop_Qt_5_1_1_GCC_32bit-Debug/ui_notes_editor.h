/********************************************************************************
** Form generated from reading UI file 'notes_editor.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTES_EDITOR_H
#define UI_NOTES_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotesEditor
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *notesEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NotesEditor)
    {
        if (NotesEditor->objectName().isEmpty())
            NotesEditor->setObjectName(QStringLiteral("NotesEditor"));
        NotesEditor->resize(800, 600);
        centralwidget = new QWidget(NotesEditor);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setGeometry(QRect(0, 21, 800, 558));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        notesEdit = new QPlainTextEdit(centralwidget);
        notesEdit->setObjectName(QStringLiteral("notesEdit"));

        verticalLayout->addWidget(notesEdit);

        NotesEditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NotesEditor);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        NotesEditor->setMenuBar(menubar);
        statusbar = new QStatusBar(NotesEditor);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        statusbar->setGeometry(QRect(0, 579, 800, 21));
        NotesEditor->setStatusBar(statusbar);

        retranslateUi(NotesEditor);

        QMetaObject::connectSlotsByName(NotesEditor);
    } // setupUi

    void retranslateUi(QMainWindow *NotesEditor)
    {
        NotesEditor->setWindowTitle(QApplication::translate("NotesEditor", "Note Pad", 0));
    } // retranslateUi

};

namespace Ui {
    class NotesEditor: public Ui_NotesEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTES_EDITOR_H
