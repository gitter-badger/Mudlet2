/****************************************************************************
** Meta object code from reading C++ file 'ircbuffer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/irc/include/ircbuffer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ircbuffer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Irc__Buffer_t {
    QByteArrayData data[43];
    char stringdata[452];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Irc__Buffer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Irc__Buffer_t qt_meta_stringdata_Irc__Buffer = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 15),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 8),
QT_MOC_LITERAL(4, 38, 12),
QT_MOC_LITERAL(5, 51, 4),
QT_MOC_LITERAL(6, 56, 6),
QT_MOC_LITERAL(7, 63, 6),
QT_MOC_LITERAL(8, 70, 6),
QT_MOC_LITERAL(9, 77, 7),
QT_MOC_LITERAL(10, 85, 4),
QT_MOC_LITERAL(11, 90, 11),
QT_MOC_LITERAL(12, 102, 4),
QT_MOC_LITERAL(13, 107, 11),
QT_MOC_LITERAL(14, 119, 4),
QT_MOC_LITERAL(15, 124, 4),
QT_MOC_LITERAL(16, 129, 12),
QT_MOC_LITERAL(17, 142, 5),
QT_MOC_LITERAL(18, 148, 7),
QT_MOC_LITERAL(19, 156, 7),
QT_MOC_LITERAL(20, 164, 6),
QT_MOC_LITERAL(21, 171, 15),
QT_MOC_LITERAL(22, 187, 25),
QT_MOC_LITERAL(23, 213, 5),
QT_MOC_LITERAL(24, 219, 14),
QT_MOC_LITERAL(25, 234, 6),
QT_MOC_LITERAL(26, 241, 19),
QT_MOC_LITERAL(27, 261, 7),
QT_MOC_LITERAL(28, 269, 17),
QT_MOC_LITERAL(29, 287, 5),
QT_MOC_LITERAL(30, 293, 18),
QT_MOC_LITERAL(31, 312, 6),
QT_MOC_LITERAL(32, 319, 22),
QT_MOC_LITERAL(33, 342, 4),
QT_MOC_LITERAL(34, 347, 6),
QT_MOC_LITERAL(35, 354, 22),
QT_MOC_LITERAL(36, 377, 10),
QT_MOC_LITERAL(37, 388, 5),
QT_MOC_LITERAL(38, 394, 11),
QT_MOC_LITERAL(39, 406, 7),
QT_MOC_LITERAL(40, 414, 14),
QT_MOC_LITERAL(41, 429, 8),
QT_MOC_LITERAL(42, 438, 12)
    },
    "Irc::Buffer\0receiverChanged\0\0receiver\0"
    "motdReceived\0motd\0joined\0origin\0parted\0"
    "message\0quit\0nickChanged\0nick\0modeChanged\0"
    "mode\0args\0topicChanged\0topic\0invited\0"
    "channel\0kicked\0messageReceived\0"
    "Irc::Buffer::MessageFlags\0flags\0"
    "noticeReceived\0notice\0ctcpRequestReceived\0"
    "request\0ctcpReplyReceived\0reply\0"
    "ctcpActionReceived\0action\0"
    "numericMessageReceived\0code\0params\0"
    "unknownMessageReceived\0ctcpAction\0"
    "names\0MessageFlag\0NoFlags\0IdentifiedFlag\0"
    "EchoFlag\0MessageFlags\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Irc__Buffer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       3,  270, // properties
       2,  279, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x05,
       4,    1,  142,    2, 0x05,
       6,    1,  145,    2, 0x05,
       8,    2,  148,    2, 0x05,
      10,    2,  153,    2, 0x05,
      11,    2,  158,    2, 0x05,
      13,    3,  163,    2, 0x05,
      16,    2,  170,    2, 0x05,
      18,    3,  175,    2, 0x05,
      20,    3,  182,    2, 0x05,
      21,    3,  189,    2, 0x05,
      21,    2,  196,    2, 0x25,
      24,    3,  201,    2, 0x05,
      24,    2,  208,    2, 0x25,
      26,    3,  213,    2, 0x05,
      26,    2,  220,    2, 0x25,
      28,    3,  225,    2, 0x05,
      28,    2,  232,    2, 0x25,
      30,    3,  237,    2, 0x05,
      30,    2,  244,    2, 0x25,
      32,    3,  249,    2, 0x05,
      35,    2,  256,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       9,    1,  261,    2, 0x0a,
      25,    1,  264,    2, 0x0a,
      36,    1,  267,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    3,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,   12,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 22,    7,    9,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 22,    7,   25,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 22,    7,   27,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   27,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 22,    7,   29,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   29,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 22,    7,   31,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::QStringList,    7,   33,   34,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    7,   34,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    9,
    QMetaType::Bool, QMetaType::QString,   25,
    QMetaType::Bool, QMetaType::QString,   31,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095001,
      17, QMetaType::QString, 0x00095001,
      37, QMetaType::QStringList, 0x00095001,

 // enums: name, flags, count, data
      38, 0x0,    3,  287,
      42, 0x1,    3,  293,

 // enum data: key, value
      39, uint(Irc::Buffer::NoFlags),
      40, uint(Irc::Buffer::IdentifiedFlag),
      41, uint(Irc::Buffer::EchoFlag),
      39, uint(Irc::Buffer::NoFlags),
      40, uint(Irc::Buffer::IdentifiedFlag),
      41, uint(Irc::Buffer::EchoFlag),

       0        // eod
};

void Irc::Buffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Buffer *_t = static_cast<Buffer *>(_o);
        switch (_id) {
        case 0: _t->receiverChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->motdReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->joined((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->parted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->quit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->nickChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->modeChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->topicChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->invited((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 9: _t->kicked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: _t->messageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Irc::Buffer::MessageFlags(*)>(_a[3]))); break;
        case 11: _t->messageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->noticeReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Irc::Buffer::MessageFlags(*)>(_a[3]))); break;
        case 13: _t->noticeReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->ctcpRequestReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Irc::Buffer::MessageFlags(*)>(_a[3]))); break;
        case 15: _t->ctcpRequestReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->ctcpReplyReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Irc::Buffer::MessageFlags(*)>(_a[3]))); break;
        case 17: _t->ctcpReplyReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->ctcpActionReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Irc::Buffer::MessageFlags(*)>(_a[3]))); break;
        case 19: _t->ctcpActionReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->numericMessageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 21: _t->unknownMessageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 22: { bool _r = _t->message((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->notice((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->ctcpAction((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Buffer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::receiverChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::motdReceived)) {
                *result = 1;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::joined)) {
                *result = 2;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::parted)) {
                *result = 3;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::quit)) {
                *result = 4;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::nickChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::modeChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::topicChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::invited)) {
                *result = 8;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::kicked)) {
                *result = 9;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & , const QString & , Irc::Buffer::MessageFlags );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::messageReceived)) {
                *result = 10;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & , const QString & , Irc::Buffer::MessageFlags );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::noticeReceived)) {
                *result = 12;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & , const QString & , Irc::Buffer::MessageFlags );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::ctcpRequestReceived)) {
                *result = 14;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & , const QString & , Irc::Buffer::MessageFlags );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::ctcpReplyReceived)) {
                *result = 16;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & , const QString & , Irc::Buffer::MessageFlags );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::ctcpActionReceived)) {
                *result = 18;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & , uint , const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::numericMessageReceived)) {
                *result = 20;
            }
        }
        {
            typedef void (Buffer::*_t)(const QString & , const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Buffer::unknownMessageReceived)) {
                *result = 21;
            }
        }
    }
}

const QMetaObject Irc::Buffer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Irc__Buffer.data,
      qt_meta_data_Irc__Buffer,  qt_static_metacall, 0, 0}
};


const QMetaObject *Irc::Buffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Irc::Buffer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Irc__Buffer.stringdata))
        return static_cast<void*>(const_cast< Buffer*>(this));
    return QObject::qt_metacast(_clname);
}

int Irc::Buffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = receiver(); break;
        case 1: *reinterpret_cast< QString*>(_v) = topic(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = names(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Irc::Buffer::receiverChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Irc::Buffer::motdReceived(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Irc::Buffer::joined(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Irc::Buffer::parted(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Irc::Buffer::quit(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Irc::Buffer::nickChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Irc::Buffer::modeChanged(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Irc::Buffer::topicChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Irc::Buffer::invited(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Irc::Buffer::kicked(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Irc::Buffer::messageReceived(const QString & _t1, const QString & _t2, Irc::Buffer::MessageFlags _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 12
void Irc::Buffer::noticeReceived(const QString & _t1, const QString & _t2, Irc::Buffer::MessageFlags _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 14
void Irc::Buffer::ctcpRequestReceived(const QString & _t1, const QString & _t2, Irc::Buffer::MessageFlags _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 16
void Irc::Buffer::ctcpReplyReceived(const QString & _t1, const QString & _t2, Irc::Buffer::MessageFlags _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 18
void Irc::Buffer::ctcpActionReceived(const QString & _t1, const QString & _t2, Irc::Buffer::MessageFlags _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 20
void Irc::Buffer::numericMessageReceived(const QString & _t1, uint _t2, const QStringList & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Irc::Buffer::unknownMessageReceived(const QString & _t1, const QStringList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}
QT_END_MOC_NAMESPACE
