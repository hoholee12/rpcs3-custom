/****************************************************************************
** Meta object code from reading C++ file 'sendmessage_dialog_frame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/sendmessage_dialog_frame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendmessage_dialog_frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sendmessage_dialog_frame_t {
    QByteArrayData data[7];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sendmessage_dialog_frame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sendmessage_dialog_frame_t qt_meta_stringdata_sendmessage_dialog_frame = {
    {
QT_MOC_LITERAL(0, 0, 24), // "sendmessage_dialog_frame"
QT_MOC_LITERAL(1, 25, 17), // "signal_add_friend"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4), // "name"
QT_MOC_LITERAL(4, 49, 20), // "signal_remove_friend"
QT_MOC_LITERAL(5, 70, 15), // "slot_add_friend"
QT_MOC_LITERAL(6, 86, 18) // "slot_remove_friend"

    },
    "sendmessage_dialog_frame\0signal_add_friend\0"
    "\0name\0signal_remove_friend\0slot_add_friend\0"
    "slot_remove_friend"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sendmessage_dialog_frame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   40,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void sendmessage_dialog_frame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<sendmessage_dialog_frame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_add_friend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->signal_remove_friend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->slot_add_friend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->slot_remove_friend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (sendmessage_dialog_frame::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sendmessage_dialog_frame::signal_add_friend)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (sendmessage_dialog_frame::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sendmessage_dialog_frame::signal_remove_friend)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sendmessage_dialog_frame::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_sendmessage_dialog_frame.data,
    qt_meta_data_sendmessage_dialog_frame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *sendmessage_dialog_frame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sendmessage_dialog_frame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sendmessage_dialog_frame.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SendMessageDialogBase"))
        return static_cast< SendMessageDialogBase*>(this);
    return QObject::qt_metacast(_clname);
}

int sendmessage_dialog_frame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void sendmessage_dialog_frame::signal_add_friend(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void sendmessage_dialog_frame::signal_remove_friend(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
