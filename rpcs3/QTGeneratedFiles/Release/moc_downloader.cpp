/****************************************************************************
** Meta object code from reading C++ file 'downloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/downloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_downloader_t {
    QByteArrayData data[11];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_downloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_downloader_t qt_meta_stringdata_downloader = {
    {
QT_MOC_LITERAL(0, 0, 10), // "downloader"
QT_MOC_LITERAL(1, 11, 21), // "signal_download_error"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "error"
QT_MOC_LITERAL(4, 40, 24), // "signal_download_finished"
QT_MOC_LITERAL(5, 65, 4), // "data"
QT_MOC_LITERAL(6, 70, 24), // "signal_download_canceled"
QT_MOC_LITERAL(7, 95, 20), // "signal_buffer_update"
QT_MOC_LITERAL(8, 116, 4), // "size"
QT_MOC_LITERAL(9, 121, 3), // "max"
QT_MOC_LITERAL(10, 125, 20) // "handle_buffer_update"

    },
    "downloader\0signal_download_error\0\0"
    "error\0signal_download_finished\0data\0"
    "signal_download_canceled\0signal_buffer_update\0"
    "size\0max\0handle_buffer_update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_downloader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    0,   45,    2, 0x06 /* Public */,
       7,    2,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,

       0        // eod
};

void downloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<downloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_download_error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->signal_download_finished((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->signal_download_canceled(); break;
        case 3: _t->signal_buffer_update((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->handle_buffer_update((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (downloader::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&downloader::signal_download_error)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (downloader::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&downloader::signal_download_finished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (downloader::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&downloader::signal_download_canceled)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (downloader::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&downloader::signal_buffer_update)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject downloader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_downloader.data,
    qt_meta_data_downloader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *downloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *downloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_downloader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int downloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void downloader::signal_download_error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void downloader::signal_download_finished(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void downloader::signal_download_canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void downloader::signal_buffer_update(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
