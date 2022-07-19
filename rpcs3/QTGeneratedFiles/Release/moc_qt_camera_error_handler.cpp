/****************************************************************************
** Meta object code from reading C++ file 'qt_camera_error_handler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/qt_camera_error_handler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_camera_error_handler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qt_camera_error_handler_t {
    QByteArrayData data[20];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qt_camera_error_handler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qt_camera_error_handler_t qt_meta_stringdata_qt_camera_error_handler = {
    {
QT_MOC_LITERAL(0, 0, 23), // "qt_camera_error_handler"
QT_MOC_LITERAL(1, 24, 19), // "handle_availability"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 31), // "QMultimedia::AvailabilityStatus"
QT_MOC_LITERAL(4, 77, 12), // "availability"
QT_MOC_LITERAL(5, 90, 18), // "handle_lock_status"
QT_MOC_LITERAL(6, 109, 19), // "QCamera::LockStatus"
QT_MOC_LITERAL(7, 129, 25), // "QCamera::LockChangeReason"
QT_MOC_LITERAL(8, 155, 20), // "handle_capture_modes"
QT_MOC_LITERAL(9, 176, 21), // "QCamera::CaptureModes"
QT_MOC_LITERAL(10, 198, 13), // "capture_modes"
QT_MOC_LITERAL(11, 212, 19), // "handle_camera_state"
QT_MOC_LITERAL(12, 232, 14), // "QCamera::State"
QT_MOC_LITERAL(13, 247, 5), // "state"
QT_MOC_LITERAL(14, 253, 20), // "handle_camera_status"
QT_MOC_LITERAL(15, 274, 15), // "QCamera::Status"
QT_MOC_LITERAL(16, 290, 6), // "status"
QT_MOC_LITERAL(17, 297, 19), // "handle_camera_error"
QT_MOC_LITERAL(18, 317, 14), // "QCamera::Error"
QT_MOC_LITERAL(19, 332, 5) // "error"

    },
    "qt_camera_error_handler\0handle_availability\0"
    "\0QMultimedia::AvailabilityStatus\0"
    "availability\0handle_lock_status\0"
    "QCamera::LockStatus\0QCamera::LockChangeReason\0"
    "handle_capture_modes\0QCamera::CaptureModes\0"
    "capture_modes\0handle_camera_state\0"
    "QCamera::State\0state\0handle_camera_status\0"
    "QCamera::Status\0status\0handle_camera_error\0"
    "QCamera::Error\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qt_camera_error_handler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       5,    2,   47,    2, 0x08 /* Private */,
       8,    1,   52,    2, 0x08 /* Private */,
      11,    1,   55,    2, 0x08 /* Private */,
      14,    1,   58,    2, 0x08 /* Private */,
      17,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 7,    2,    2,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void qt_camera_error_handler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qt_camera_error_handler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handle_availability((*reinterpret_cast< QMultimedia::AvailabilityStatus(*)>(_a[1]))); break;
        case 1: _t->handle_lock_status((*reinterpret_cast< QCamera::LockStatus(*)>(_a[1])),(*reinterpret_cast< QCamera::LockChangeReason(*)>(_a[2]))); break;
        case 2: _t->handle_capture_modes((*reinterpret_cast< QCamera::CaptureModes(*)>(_a[1]))); break;
        case 3: _t->handle_camera_state((*reinterpret_cast< QCamera::State(*)>(_a[1]))); break;
        case 4: _t->handle_camera_status((*reinterpret_cast< QCamera::Status(*)>(_a[1]))); break;
        case 5: _t->handle_camera_error((*reinterpret_cast< QCamera::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMultimedia::AvailabilityStatus >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::LockChangeReason >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::LockStatus >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::CaptureModes >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::State >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::Status >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::Error >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qt_camera_error_handler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qt_camera_error_handler.data,
    qt_meta_data_qt_camera_error_handler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qt_camera_error_handler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qt_camera_error_handler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qt_camera_error_handler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qt_camera_error_handler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
