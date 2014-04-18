/****************************************************************************
** Meta object code from reading C++ file 'ctelnet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/ctelnet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctelnet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cTelnet_t {
    QByteArrayData data[15];
    char stringdata[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_cTelnet_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_cTelnet_t qt_meta_stringdata_cTelnet = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 19),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 13),
QT_MOC_LITERAL(4, 43, 14),
QT_MOC_LITERAL(5, 58, 8),
QT_MOC_LITERAL(6, 67, 30),
QT_MOC_LITERAL(7, 98, 9),
QT_MOC_LITERAL(8, 108, 30),
QT_MOC_LITERAL(9, 139, 33),
QT_MOC_LITERAL(10, 173, 30),
QT_MOC_LITERAL(11, 204, 26),
QT_MOC_LITERAL(12, 231, 17),
QT_MOC_LITERAL(13, 249, 15),
QT_MOC_LITERAL(14, 265, 14)
    },
    "cTelnet\0setDownloadProgress\0\0replyFinished\0"
    "QNetworkReply*\0readPipe\0"
    "handle_socket_signal_hostFound\0QHostInfo\0"
    "handle_socket_signal_connected\0"
    "handle_socket_signal_disconnected\0"
    "handle_socket_signal_readyRead\0"
    "handle_socket_signal_error\0slot_timerPosting\0"
    "slot_send_login\0slot_send_pass\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cTelnet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x0a,
       3,    1,   74,    2, 0x0a,
       5,    0,   77,    2, 0x0a,
       6,    1,   78,    2, 0x0a,
       8,    0,   81,    2, 0x0a,
       9,    0,   82,    2, 0x0a,
      10,    0,   83,    2, 0x0a,
      11,    0,   84,    2, 0x0a,
      12,    0,   85,    2, 0x0a,
      13,    0,   86,    2, 0x0a,
      14,    0,   87,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cTelnet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cTelnet *_t = static_cast<cTelnet *>(_o);
        switch (_id) {
        case 0: _t->setDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->readPipe(); break;
        case 3: _t->handle_socket_signal_hostFound((*reinterpret_cast< QHostInfo(*)>(_a[1]))); break;
        case 4: _t->handle_socket_signal_connected(); break;
        case 5: _t->handle_socket_signal_disconnected(); break;
        case 6: _t->handle_socket_signal_readyRead(); break;
        case 7: _t->handle_socket_signal_error(); break;
        case 8: _t->slot_timerPosting(); break;
        case 9: _t->slot_send_login(); break;
        case 10: _t->slot_send_pass(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHostInfo >(); break;
            }
            break;
        }
    }
}

const QMetaObject cTelnet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cTelnet.data,
      qt_meta_data_cTelnet,  qt_static_metacall, 0, 0}
};


const QMetaObject *cTelnet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cTelnet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cTelnet.stringdata))
        return static_cast<void*>(const_cast< cTelnet*>(this));
    return QObject::qt_metacast(_clname);
}

int cTelnet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
