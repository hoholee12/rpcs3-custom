/****************************************************************************
** Meta object code from reading C++ file 'game_compatibility.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/game_compatibility.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game_compatibility.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_game_compatibility_t {
    QByteArrayData data[11];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_game_compatibility_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_game_compatibility_t qt_meta_stringdata_game_compatibility = {
    {
QT_MOC_LITERAL(0, 0, 18), // "game_compatibility"
QT_MOC_LITERAL(1, 19, 15), // "DownloadStarted"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "DownloadFinished"
QT_MOC_LITERAL(4, 53, 16), // "DownloadCanceled"
QT_MOC_LITERAL(5, 70, 13), // "DownloadError"
QT_MOC_LITERAL(6, 84, 5), // "error"
QT_MOC_LITERAL(7, 90, 21), // "handle_download_error"
QT_MOC_LITERAL(8, 112, 24), // "handle_download_finished"
QT_MOC_LITERAL(9, 137, 7), // "content"
QT_MOC_LITERAL(10, 145, 24) // "handle_download_canceled"

    },
    "game_compatibility\0DownloadStarted\0\0"
    "DownloadFinished\0DownloadCanceled\0"
    "DownloadError\0error\0handle_download_error\0"
    "handle_download_finished\0content\0"
    "handle_download_canceled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_game_compatibility[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   55,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void,

       0        // eod
};

void game_compatibility::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<game_compatibility *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DownloadStarted(); break;
        case 1: _t->DownloadFinished(); break;
        case 2: _t->DownloadCanceled(); break;
        case 3: _t->DownloadError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->handle_download_error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->handle_download_finished((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 6: _t->handle_download_canceled(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (game_compatibility::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&game_compatibility::DownloadStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (game_compatibility::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&game_compatibility::DownloadFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (game_compatibility::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&game_compatibility::DownloadCanceled)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (game_compatibility::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&game_compatibility::DownloadError)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject game_compatibility::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_game_compatibility.data,
    qt_meta_data_game_compatibility,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *game_compatibility::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *game_compatibility::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_game_compatibility.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int game_compatibility::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void game_compatibility::DownloadStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void game_compatibility::DownloadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void game_compatibility::DownloadCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void game_compatibility::DownloadError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
