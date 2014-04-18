/****************************************************************************
** Meta object code from reading C++ file 'TCommandLine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/TCommandLine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TCommandLine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TCommandLine_t {
    QByteArrayData data[8];
    char stringdata[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TCommandLine_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TCommandLine_t qt_meta_stringdata_TCommandLine = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 11),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 16),
QT_MOC_LITERAL(4, 43, 16),
QT_MOC_LITERAL(5, 60, 11),
QT_MOC_LITERAL(6, 72, 2),
QT_MOC_LITERAL(7, 75, 14)
    },
    "TCommandLine\0textChanged\0\0slot_textChanged\0"
    "slot_sendCommand\0const char*\0pS\0"
    "slot_popupMenu\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TCommandLine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    1,   37,    2, 0x0a,
       4,    1,   40,    2, 0x0a,
       7,    0,   43,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void TCommandLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TCommandLine *_t = static_cast<TCommandLine *>(_o);
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slot_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slot_sendCommand((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 3: _t->slot_popupMenu(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TCommandLine::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TCommandLine::textChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject TCommandLine::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_TCommandLine.data,
      qt_meta_data_TCommandLine,  qt_static_metacall, 0, 0}
};


const QMetaObject *TCommandLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCommandLine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TCommandLine.stringdata))
        return static_cast<void*>(const_cast< TCommandLine*>(this));
    return QPlainTextEdit::qt_metacast(_clname);
}

int TCommandLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TCommandLine::textChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
