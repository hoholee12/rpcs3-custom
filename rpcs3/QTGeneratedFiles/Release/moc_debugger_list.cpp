/****************************************************************************
** Meta object code from reading C++ file 'debugger_list.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/debugger_list.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debugger_list.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_debugger_list_t {
    QByteArrayData data[9];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_debugger_list_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_debugger_list_t qt_meta_stringdata_debugger_list = {
    {
QT_MOC_LITERAL(0, 0, 13), // "debugger_list"
QT_MOC_LITERAL(1, 14, 19), // "BreakpointRequested"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 3), // "u32"
QT_MOC_LITERAL(4, 39, 3), // "loc"
QT_MOC_LITERAL(5, 43, 11), // "ShowAddress"
QT_MOC_LITERAL(6, 55, 4), // "addr"
QT_MOC_LITERAL(7, 60, 11), // "select_addr"
QT_MOC_LITERAL(8, 72, 5) // "force"

    },
    "debugger_list\0BreakpointRequested\0\0"
    "u32\0loc\0ShowAddress\0addr\0select_addr\0"
    "force"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_debugger_list[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   37,    2, 0x0a /* Public */,
       5,    2,   44,    2, 0x2a /* Public | MethodCloned */,
       5,    1,   49,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, QMetaType::Bool,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    6,    7,
    QMetaType::Void, 0x80000000 | 3,    6,

       0        // eod
};

void debugger_list::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<debugger_list *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BreakpointRequested((*reinterpret_cast< u32(*)>(_a[1]))); break;
        case 1: _t->ShowAddress((*reinterpret_cast< u32(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->ShowAddress((*reinterpret_cast< u32(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->ShowAddress((*reinterpret_cast< u32(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (debugger_list::*)(u32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&debugger_list::BreakpointRequested)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject debugger_list::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_debugger_list.data,
    qt_meta_data_debugger_list,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *debugger_list::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *debugger_list::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_debugger_list.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int debugger_list::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void debugger_list::BreakpointRequested(u32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
