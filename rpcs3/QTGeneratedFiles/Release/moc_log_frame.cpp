/****************************************************************************
** Meta object code from reading C++ file 'log_frame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/log_frame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'log_frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_log_frame_t {
    QByteArrayData data[5];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_log_frame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_log_frame_t qt_meta_stringdata_log_frame = {
    {
QT_MOC_LITERAL(0, 0, 9), // "log_frame"
QT_MOC_LITERAL(1, 10, 14), // "LogFrameClosed"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "LoadSettings"
QT_MOC_LITERAL(4, 39, 8) // "UpdateUI"

    },
    "log_frame\0LogFrameClosed\0\0LoadSettings\0"
    "UpdateUI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_log_frame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void log_frame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<log_frame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LogFrameClosed(); break;
        case 1: _t->LoadSettings(); break;
        case 2: _t->UpdateUI(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (log_frame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&log_frame::LogFrameClosed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject log_frame::staticMetaObject = { {
    QMetaObject::SuperData::link<custom_dock_widget::staticMetaObject>(),
    qt_meta_stringdata_log_frame.data,
    qt_meta_data_log_frame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *log_frame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *log_frame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_log_frame.stringdata0))
        return static_cast<void*>(this);
    return custom_dock_widget::qt_metacast(_clname);
}

int log_frame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = custom_dock_widget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void log_frame::LogFrameClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
