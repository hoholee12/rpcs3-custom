/****************************************************************************
** Meta object code from reading C++ file 'headless_application.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../headless_application.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'headless_application.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_headless_application_t {
    QByteArrayData data[6];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_headless_application_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_headless_application_t qt_meta_stringdata_headless_application = {
    {
QT_MOC_LITERAL(0, 0, 20), // "headless_application"
QT_MOC_LITERAL(1, 21, 25), // "RequestCallFromMainThread"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 21), // "std::function<void()>"
QT_MOC_LITERAL(4, 70, 4), // "func"
QT_MOC_LITERAL(5, 75, 18) // "CallFromMainThread"

    },
    "headless_application\0RequestCallFromMainThread\0"
    "\0std::function<void()>\0func\0"
    "CallFromMainThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_headless_application[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void headless_application::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<headless_application *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RequestCallFromMainThread((*reinterpret_cast< std::function<void()>(*)>(_a[1]))); break;
        case 1: _t->CallFromMainThread((*reinterpret_cast< const std::function<void()>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (headless_application::*)(std::function<void()> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&headless_application::RequestCallFromMainThread)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject headless_application::staticMetaObject = { {
    QMetaObject::SuperData::link<QCoreApplication::staticMetaObject>(),
    qt_meta_stringdata_headless_application.data,
    qt_meta_data_headless_application,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *headless_application::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *headless_application::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_headless_application.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "main_application"))
        return static_cast< main_application*>(this);
    return QCoreApplication::qt_metacast(_clname);
}

int headless_application::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCoreApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void headless_application::RequestCallFromMainThread(std::function<void()> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
