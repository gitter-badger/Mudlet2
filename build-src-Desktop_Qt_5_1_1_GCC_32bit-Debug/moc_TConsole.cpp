/****************************************************************************
** Meta object code from reading C++ file 'TConsole.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/TConsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TConsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TConsole_t {
    QByteArrayData data[7];
    char stringdata[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TConsole_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TConsole_t qt_meta_stringdata_TConsole = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 19),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 21),
QT_MOC_LITERAL(4, 52, 26),
QT_MOC_LITERAL(5, 79, 22),
QT_MOC_LITERAL(6, 102, 18)
    },
    "TConsole\0slot_searchBufferUp\0\0"
    "slot_searchBufferDown\0slot_toggleReplayRecording\0"
    "slot_stop_all_triggers\0slot_toggleLogging\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a,
       3,    0,   40,    2, 0x0a,
       4,    0,   41,    2, 0x0a,
       5,    1,   42,    2, 0x0a,
       6,    0,   45,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void TConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TConsole *_t = static_cast<TConsole *>(_o);
        switch (_id) {
        case 0: _t->slot_searchBufferUp(); break;
        case 1: _t->slot_searchBufferDown(); break;
        case 2: _t->slot_toggleReplayRecording(); break;
        case 3: _t->slot_stop_all_triggers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slot_toggleLogging(); break;
        default: ;
        }
    }
}

const QMetaObject TConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TConsole.data,
      qt_meta_data_TConsole,  qt_static_metacall, 0, 0}
};


const QMetaObject *TConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TConsole.stringdata))
        return static_cast<void*>(const_cast< TConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int TConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
