/****************************************************************************
** Meta object code from reading C++ file 'qt_music_error_handler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/qt_music_error_handler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_music_error_handler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qt_music_error_handler_t {
    QByteArrayData data[11];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qt_music_error_handler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qt_music_error_handler_t qt_meta_stringdata_qt_music_error_handler = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qt_music_error_handler"
QT_MOC_LITERAL(1, 23, 19), // "handle_media_status"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 25), // "QMediaPlayer::MediaStatus"
QT_MOC_LITERAL(4, 70, 6), // "status"
QT_MOC_LITERAL(5, 77, 18), // "handle_music_state"
QT_MOC_LITERAL(6, 96, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(7, 116, 5), // "state"
QT_MOC_LITERAL(8, 122, 18), // "handle_music_error"
QT_MOC_LITERAL(9, 141, 19), // "QMediaPlayer::Error"
QT_MOC_LITERAL(10, 161, 5) // "error"

    },
    "qt_music_error_handler\0handle_media_status\0"
    "\0QMediaPlayer::MediaStatus\0status\0"
    "handle_music_state\0QMediaPlayer::State\0"
    "state\0handle_music_error\0QMediaPlayer::Error\0"
    "error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qt_music_error_handler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    1,   32,    2, 0x08 /* Private */,
       8,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void qt_music_error_handler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qt_music_error_handler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handle_media_status((*reinterpret_cast< QMediaPlayer::MediaStatus(*)>(_a[1]))); break;
        case 1: _t->handle_music_state((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 2: _t->handle_music_error((*reinterpret_cast< QMediaPlayer::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::MediaStatus >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::Error >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qt_music_error_handler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qt_music_error_handler.data,
    qt_meta_data_qt_music_error_handler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qt_music_error_handler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qt_music_error_handler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qt_music_error_handler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qt_music_error_handler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
