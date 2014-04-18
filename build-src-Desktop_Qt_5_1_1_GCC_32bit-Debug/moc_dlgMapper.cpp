/****************************************************************************
** Meta object code from reading C++ file 'dlgMapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/dlgMapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgMapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dlgMapper_t {
    QByteArrayData data[20];
    char stringdata[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_dlgMapper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_dlgMapper_t qt_meta_stringdata_dlgMapper = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 12),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 9),
QT_MOC_LITERAL(4, 34, 22),
QT_MOC_LITERAL(5, 57, 1),
QT_MOC_LITERAL(6, 59, 26),
QT_MOC_LITERAL(7, 86, 1),
QT_MOC_LITERAL(8, 88, 10),
QT_MOC_LITERAL(9, 99, 16),
QT_MOC_LITERAL(10, 116, 19),
QT_MOC_LITERAL(11, 136, 6),
QT_MOC_LITERAL(12, 143, 13),
QT_MOC_LITERAL(13, 157, 14),
QT_MOC_LITERAL(14, 172, 6),
QT_MOC_LITERAL(15, 179, 9),
QT_MOC_LITERAL(16, 189, 16),
QT_MOC_LITERAL(17, 206, 13),
QT_MOC_LITERAL(18, 220, 1),
QT_MOC_LITERAL(19, 222, 13)
    },
    "dlgMapper\0slot_bubbles\0\0slot_info\0"
    "slot_toggleShowRoomIDs\0s\0"
    "slot_toggleStrongHighlight\0v\0show2dView\0"
    "slot_togglePanel\0setDownloadProgress\0"
    "cancel\0replyFinished\0QNetworkReply*\0"
    "goRoom\0choseRoom\0QListWidgetItem*\0"
    "slot_roomSize\0d\0slot_lineSize\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dlgMapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a,
       3,    0,   80,    2, 0x0a,
       4,    1,   81,    2, 0x0a,
       6,    1,   84,    2, 0x0a,
       8,    0,   87,    2, 0x0a,
       9,    0,   88,    2, 0x0a,
      10,    2,   89,    2, 0x0a,
      11,    0,   94,    2, 0x0a,
      12,    1,   95,    2, 0x0a,
      14,    0,   98,    2, 0x0a,
      15,    1,   99,    2, 0x0a,
      17,    1,  102,    2, 0x0a,
      19,    1,  105,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void dlgMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dlgMapper *_t = static_cast<dlgMapper *>(_o);
        switch (_id) {
        case 0: _t->slot_bubbles(); break;
        case 1: _t->slot_info(); break;
        case 2: _t->slot_toggleShowRoomIDs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slot_toggleStrongHighlight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->show2dView(); break;
        case 5: _t->slot_togglePanel(); break;
        case 6: _t->setDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: _t->cancel(); break;
        case 8: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->goRoom(); break;
        case 10: _t->choseRoom((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->slot_roomSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->slot_lineSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject dlgMapper::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_dlgMapper.data,
      qt_meta_data_dlgMapper,  qt_static_metacall, 0, 0}
};


const QMetaObject *dlgMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dlgMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dlgMapper.stringdata))
        return static_cast<void*>(const_cast< dlgMapper*>(this));
    if (!strcmp(_clname, "Ui::mapper"))
        return static_cast< Ui::mapper*>(const_cast< dlgMapper*>(this));
    return QWidget::qt_metacast(_clname);
}

int dlgMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
