/****************************************************************************
** Meta object code from reading C++ file 'recvmessage_dialog_frame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/recvmessage_dialog_frame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recvmessage_dialog_frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_recvmessage_dialog_frame_t {
    QByteArrayData data[6];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_recvmessage_dialog_frame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_recvmessage_dialog_frame_t qt_meta_stringdata_recvmessage_dialog_frame = {
    {
QT_MOC_LITERAL(0, 0, 24), // "recvmessage_dialog_frame"
QT_MOC_LITERAL(1, 25, 18), // "signal_new_message"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 25), // "recvmessage_signal_struct"
QT_MOC_LITERAL(4, 71, 10), // "msg_and_id"
QT_MOC_LITERAL(5, 82, 16) // "slot_new_message"

    },
    "recvmessage_dialog_frame\0signal_new_message\0"
    "\0recvmessage_signal_struct\0msg_and_id\0"
    "slot_new_message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_recvmessage_dialog_frame[] = {

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

void recvmessage_dialog_frame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<recvmessage_dialog_frame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_new_message((*reinterpret_cast< const recvmessage_signal_struct(*)>(_a[1]))); break;
        case 1: _t->slot_new_message((*reinterpret_cast< const recvmessage_signal_struct(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< recvmessage_signal_struct >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< recvmessage_signal_struct >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (recvmessage_dialog_frame::*)(const recvmessage_signal_struct );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&recvmessage_dialog_frame::signal_new_message)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject recvmessage_dialog_frame::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_recvmessage_dialog_frame.data,
    qt_meta_data_recvmessage_dialog_frame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *recvmessage_dialog_frame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *recvmessage_dialog_frame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_recvmessage_dialog_frame.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RecvMessageDialogBase"))
        return static_cast< RecvMessageDialogBase*>(this);
    return QObject::qt_metacast(_clname);
}

int recvmessage_dialog_frame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void recvmessage_dialog_frame::signal_new_message(const recvmessage_signal_struct _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
