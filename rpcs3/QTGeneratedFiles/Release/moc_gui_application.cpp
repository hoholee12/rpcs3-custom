/****************************************************************************
** Meta object code from reading C++ file 'gui_application.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/gui_application.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gui_application.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gui_application_t {
    QByteArrayData data[14];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui_application_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui_application_t qt_meta_stringdata_gui_application = {
    {
QT_MOC_LITERAL(0, 0, 15), // "gui_application"
QT_MOC_LITERAL(1, 16, 13), // "OnEmulatorRun"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "start_playtime"
QT_MOC_LITERAL(4, 46, 15), // "OnEmulatorPause"
QT_MOC_LITERAL(5, 62, 16), // "OnEmulatorResume"
QT_MOC_LITERAL(6, 79, 14), // "OnEmulatorStop"
QT_MOC_LITERAL(7, 94, 15), // "OnEmulatorReady"
QT_MOC_LITERAL(8, 110, 25), // "RequestCallFromMainThread"
QT_MOC_LITERAL(9, 136, 21), // "std::function<void()>"
QT_MOC_LITERAL(10, 158, 4), // "func"
QT_MOC_LITERAL(11, 163, 25), // "OnChangeStyleSheetRequest"
QT_MOC_LITERAL(12, 189, 19), // "OnEmuSettingsChange"
QT_MOC_LITERAL(13, 209, 18) // "CallFromMainThread"

    },
    "gui_application\0OnEmulatorRun\0\0"
    "start_playtime\0OnEmulatorPause\0"
    "OnEmulatorResume\0OnEmulatorStop\0"
    "OnEmulatorReady\0RequestCallFromMainThread\0"
    "std::function<void()>\0func\0"
    "OnChangeStyleSheetRequest\0OnEmuSettingsChange\0"
    "CallFromMainThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui_application[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,
       6,    0,   66,    2, 0x06 /* Public */,
       7,    0,   67,    2, 0x06 /* Public */,
       8,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   71,    2, 0x08 /* Private */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void gui_application::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gui_application *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnEmulatorRun((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->OnEmulatorPause(); break;
        case 2: _t->OnEmulatorResume((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->OnEmulatorStop(); break;
        case 4: _t->OnEmulatorReady(); break;
        case 5: _t->RequestCallFromMainThread((*reinterpret_cast< const std::function<void()>(*)>(_a[1]))); break;
        case 6: _t->OnChangeStyleSheetRequest(); break;
        case 7: _t->OnEmuSettingsChange(); break;
        case 8: _t->CallFromMainThread((*reinterpret_cast< const std::function<void()>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (gui_application::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&gui_application::OnEmulatorRun)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (gui_application::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&gui_application::OnEmulatorPause)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (gui_application::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&gui_application::OnEmulatorResume)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (gui_application::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&gui_application::OnEmulatorStop)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (gui_application::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&gui_application::OnEmulatorReady)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (gui_application::*)(const std::function<void()> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&gui_application::RequestCallFromMainThread)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gui_application::staticMetaObject = { {
    QMetaObject::SuperData::link<QApplication::staticMetaObject>(),
    qt_meta_stringdata_gui_application.data,
    qt_meta_data_gui_application,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui_application::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui_application::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui_application.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "main_application"))
        return static_cast< main_application*>(this);
    return QApplication::qt_metacast(_clname);
}

int gui_application::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void gui_application::OnEmulatorRun(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gui_application::OnEmulatorPause()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void gui_application::OnEmulatorResume(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gui_application::OnEmulatorStop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void gui_application::OnEmulatorReady()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void gui_application::RequestCallFromMainThread(const std::function<void()> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
