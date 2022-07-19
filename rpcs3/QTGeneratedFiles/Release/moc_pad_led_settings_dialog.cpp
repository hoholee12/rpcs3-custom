/****************************************************************************
** Meta object code from reading C++ file 'pad_led_settings_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/pad_led_settings_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pad_led_settings_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pad_led_settings_dialog_t {
    QByteArrayData data[13];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pad_led_settings_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pad_led_settings_dialog_t qt_meta_stringdata_pad_led_settings_dialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "pad_led_settings_dialog"
QT_MOC_LITERAL(1, 24, 17), // "pass_led_settings"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4), // "m_cR"
QT_MOC_LITERAL(4, 48, 4), // "m_cG"
QT_MOC_LITERAL(5, 53, 4), // "m_cB"
QT_MOC_LITERAL(6, 58, 19), // "m_low_battery_blink"
QT_MOC_LITERAL(7, 78, 19), // "m_battery_indicator"
QT_MOC_LITERAL(8, 98, 30), // "m_battery_indicator_brightness"
QT_MOC_LITERAL(9, 129, 19), // "update_slider_label"
QT_MOC_LITERAL(10, 149, 3), // "val"
QT_MOC_LITERAL(11, 153, 25), // "battery_indicator_checked"
QT_MOC_LITERAL(12, 179, 7) // "checked"

    },
    "pad_led_settings_dialog\0pass_led_settings\0"
    "\0m_cR\0m_cG\0m_cB\0m_low_battery_blink\0"
    "m_battery_indicator\0m_battery_indicator_brightness\0"
    "update_slider_label\0val\0"
    "battery_indicator_checked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pad_led_settings_dialog[] = {

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
       1,    6,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   42,    2, 0x08 /* Private */,
      11,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Int,    3,    4,    5,    6,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void pad_led_settings_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<pad_led_settings_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pass_led_settings((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 1: _t->update_slider_label((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->battery_indicator_checked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (pad_led_settings_dialog::*)(int , int , int , bool , bool , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pad_led_settings_dialog::pass_led_settings)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject pad_led_settings_dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_pad_led_settings_dialog.data,
    qt_meta_data_pad_led_settings_dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *pad_led_settings_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pad_led_settings_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pad_led_settings_dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pad_led_settings_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void pad_led_settings_dialog::pass_led_settings(int _t1, int _t2, int _t3, bool _t4, bool _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
