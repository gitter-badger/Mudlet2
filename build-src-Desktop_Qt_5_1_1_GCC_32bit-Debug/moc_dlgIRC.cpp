/****************************************************************************
** Meta object code from reading C++ file 'dlgIRC.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/dlgIRC.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgIRC.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dlgIRC_t {
    QByteArrayData data[13];
    char stringdata[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_dlgIRC_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_dlgIRC_t qt_meta_stringdata_dlgIRC = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 10),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 11),
QT_MOC_LITERAL(4, 31, 1),
QT_MOC_LITERAL(5, 33, 1),
QT_MOC_LITERAL(6, 35, 11),
QT_MOC_LITERAL(7, 47, 4),
QT_MOC_LITERAL(8, 52, 13),
QT_MOC_LITERAL(9, 66, 4),
QT_MOC_LITERAL(10, 71, 11),
QT_MOC_LITERAL(11, 83, 11),
QT_MOC_LITERAL(12, 95, 7)
    },
    "dlgIRC\0irc_gotMsg\0\0irc_gotMsg2\0a\0c\0"
    "irc_gotMsg3\0code\0anchorClicked\0link\0"
    "slot_joined\0slot_parted\0sendMsg\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dlgIRC[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x0a,
       3,    2,   56,    2, 0x0a,
       6,    3,   61,    2, 0x0a,
       8,    1,   68,    2, 0x0a,
      10,    2,   71,    2, 0x0a,
      11,    3,   76,    2, 0x0a,
      12,    0,   83,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::QStringList,    4,    7,    5,
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void dlgIRC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dlgIRC *_t = static_cast<dlgIRC *>(_o);
        switch (_id) {
        case 0: _t->irc_gotMsg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->irc_gotMsg2((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 2: _t->irc_gotMsg3((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 3: _t->anchorClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->slot_joined((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->slot_parted((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->sendMsg(); break;
        default: ;
        }
    }
}

const QMetaObject dlgIRC::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_dlgIRC.data,
      qt_meta_data_dlgIRC,  qt_static_metacall, 0, 0}
};


const QMetaObject *dlgIRC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlgIRC::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgIRC.stringdata))
        return static_cast<void*>(const_cast< dlgIRC*>(this));
    if (!strcmp(_clname, "Ui::irc_dlg"))
        return static_cast< Ui::irc_dlg*>(const_cast< dlgIRC*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int dlgIRC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
