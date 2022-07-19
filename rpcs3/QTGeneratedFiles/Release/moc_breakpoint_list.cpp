/****************************************************************************
** Meta object code from reading C++ file 'breakpoint_list.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/breakpoint_list.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'breakpoint_list.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_breakpoint_list_t {
    QByteArrayData data[13];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_breakpoint_list_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_breakpoint_list_t qt_meta_stringdata_breakpoint_list = {
    {
QT_MOC_LITERAL(0, 0, 15), // "breakpoint_list"
QT_MOC_LITERAL(1, 16, 18), // "RequestShowAddress"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 3), // "u32"
QT_MOC_LITERAL(4, 40, 4), // "addr"
QT_MOC_LITERAL(5, 45, 11), // "select_addr"
QT_MOC_LITERAL(6, 57, 5), // "force"
QT_MOC_LITERAL(7, 63, 23), // "HandleBreakpointRequest"
QT_MOC_LITERAL(8, 87, 3), // "loc"
QT_MOC_LITERAL(9, 91, 29), // "OnBreakpointListDoubleClicked"
QT_MOC_LITERAL(10, 121, 28), // "OnBreakpointListRightClicked"
QT_MOC_LITERAL(11, 150, 3), // "pos"
QT_MOC_LITERAL(12, 154, 22) // "OnBreakpointListDelete"

    },
    "breakpoint_list\0RequestShowAddress\0\0"
    "u32\0addr\0select_addr\0force\0"
    "HandleBreakpointRequest\0loc\0"
    "OnBreakpointListDoubleClicked\0"
    "OnBreakpointListRightClicked\0pos\0"
    "OnBreakpointListDelete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_breakpoint_list[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x06 /* Public */,
       1,    2,   56,    2, 0x26 /* Public | MethodCloned */,
       1,    1,   61,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   64,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void,

       0        // eod
};

void breakpoint_list::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<breakpoint_list *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RequestShowAddress((*reinterpret_cast< u32(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->RequestShowAddress((*reinterpret_cast< u32(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->RequestShowAddress((*reinterpret_cast< u32(*)>(_a[1]))); break;
        case 3: _t->HandleBreakpointRequest((*reinterpret_cast< u32(*)>(_a[1]))); break;
        case 4: _t->OnBreakpointListDoubleClicked(); break;
        case 5: _t->OnBreakpointListRightClicked((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->OnBreakpointListDelete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (breakpoint_list::*)(u32 , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&breakpoint_list::RequestShowAddress)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject breakpoint_list::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_breakpoint_list.data,
    qt_meta_data_breakpoint_list,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *breakpoint_list::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *breakpoint_list::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_breakpoint_list.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int breakpoint_list::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
void breakpoint_list::RequestShowAddress(u32 _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
