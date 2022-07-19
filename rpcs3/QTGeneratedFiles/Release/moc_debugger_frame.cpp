/****************************************************************************
** Meta object code from reading C++ file 'debugger_frame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/debugger_frame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debugger_frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_debugger_frame_t {
    QByteArrayData data[12];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_debugger_frame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_debugger_frame_t qt_meta_stringdata_debugger_frame = {
    {
QT_MOC_LITERAL(0, 0, 14), // "debugger_frame"
QT_MOC_LITERAL(1, 15, 16), // "DebugFrameClosed"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 24), // "CallStackUpdateRequested"
QT_MOC_LITERAL(4, 58, 32), // "std::vector<std::pair<u32,u32> >"
QT_MOC_LITERAL(5, 91, 10), // "call_stack"
QT_MOC_LITERAL(6, 102, 6), // "DoStep"
QT_MOC_LITERAL(7, 109, 9), // "step_over"
QT_MOC_LITERAL(8, 119, 12), // "OnSelectUnit"
QT_MOC_LITERAL(9, 132, 6), // "ShowPC"
QT_MOC_LITERAL(10, 139, 17), // "EnableUpdateTimer"
QT_MOC_LITERAL(11, 157, 6) // "enable"

    },
    "debugger_frame\0DebugFrameClosed\0\0"
    "CallStackUpdateRequested\0"
    "std::vector<std::pair<u32,u32> >\0"
    "call_stack\0DoStep\0step_over\0OnSelectUnit\0"
    "ShowPC\0EnableUpdateTimer\0enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_debugger_frame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   53,    2, 0x0a /* Public */,
       6,    0,   56,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void debugger_frame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<debugger_frame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DebugFrameClosed(); break;
        case 1: _t->CallStackUpdateRequested((*reinterpret_cast< const std::vector<std::pair<u32,u32> >(*)>(_a[1]))); break;
        case 2: _t->DoStep((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->DoStep(); break;
        case 4: _t->OnSelectUnit(); break;
        case 5: _t->ShowPC(); break;
        case 6: _t->EnableUpdateTimer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (debugger_frame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&debugger_frame::DebugFrameClosed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (debugger_frame::*)(const std::vector<std::pair<u32,u32>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&debugger_frame::CallStackUpdateRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject debugger_frame::staticMetaObject = { {
    QMetaObject::SuperData::link<custom_dock_widget::staticMetaObject>(),
    qt_meta_stringdata_debugger_frame.data,
    qt_meta_data_debugger_frame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *debugger_frame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *debugger_frame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_debugger_frame.stringdata0))
        return static_cast<void*>(this);
    return custom_dock_widget::qt_metacast(_clname);
}

int debugger_frame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = custom_dock_widget::qt_metacall(_c, _id, _a);
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
void debugger_frame::DebugFrameClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void debugger_frame::CallStackUpdateRequested(const std::vector<std::pair<u32,u32>> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
