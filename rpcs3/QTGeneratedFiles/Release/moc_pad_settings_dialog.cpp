/****************************************************************************
** Meta object code from reading C++ file 'pad_settings_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/pad_settings_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pad_settings_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pad_settings_dialog_t {
    QByteArrayData data[22];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pad_settings_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pad_settings_dialog_t qt_meta_stringdata_pad_settings_dialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "pad_settings_dialog"
QT_MOC_LITERAL(1, 20, 18), // "apply_led_settings"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 6), // "colorR"
QT_MOC_LITERAL(4, 47, 6), // "colorG"
QT_MOC_LITERAL(5, 54, 6), // "colorB"
QT_MOC_LITERAL(6, 61, 21), // "led_low_battery_blink"
QT_MOC_LITERAL(7, 83, 21), // "led_battery_indicator"
QT_MOC_LITERAL(8, 105, 32), // "led_battery_indicator_brightness"
QT_MOC_LITERAL(9, 138, 18), // "OnPadButtonClicked"
QT_MOC_LITERAL(10, 157, 2), // "id"
QT_MOC_LITERAL(11, 160, 12), // "OnTabChanged"
QT_MOC_LITERAL(12, 173, 5), // "index"
QT_MOC_LITERAL(13, 179, 15), // "RefreshHandlers"
QT_MOC_LITERAL(14, 195, 13), // "ChangeHandler"
QT_MOC_LITERAL(15, 209, 13), // "ChangeProfile"
QT_MOC_LITERAL(16, 223, 7), // "profile"
QT_MOC_LITERAL(17, 231, 12), // "ChangeDevice"
QT_MOC_LITERAL(18, 244, 23), // "HandleDeviceClassChange"
QT_MOC_LITERAL(19, 268, 10), // "AddProfile"
QT_MOC_LITERAL(20, 279, 24), // "ApplyCurrentPlayerConfig"
QT_MOC_LITERAL(21, 304, 13) // "new_player_id"

    },
    "pad_settings_dialog\0apply_led_settings\0"
    "\0colorR\0colorG\0colorB\0led_low_battery_blink\0"
    "led_battery_indicator\0"
    "led_battery_indicator_brightness\0"
    "OnPadButtonClicked\0id\0OnTabChanged\0"
    "index\0RefreshHandlers\0ChangeHandler\0"
    "ChangeProfile\0profile\0ChangeDevice\0"
    "HandleDeviceClassChange\0AddProfile\0"
    "ApplyCurrentPlayerConfig\0new_player_id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pad_settings_dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    6,   64,    2, 0x0a /* Public */,
       9,    1,   77,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,
      14,    0,   84,    2, 0x08 /* Private */,
      15,    1,   85,    2, 0x08 /* Private */,
      17,    1,   88,    2, 0x08 /* Private */,
      18,    1,   91,    2, 0x08 /* Private */,
      19,    0,   94,    2, 0x08 /* Private */,
      20,    1,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Int,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,

       0        // eod
};

void pad_settings_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<pad_settings_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->apply_led_settings((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 1: _t->OnPadButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->RefreshHandlers(); break;
        case 4: _t->ChangeHandler(); break;
        case 5: _t->ChangeProfile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->ChangeDevice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->HandleDeviceClassChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->AddProfile(); break;
        case 9: _t->ApplyCurrentPlayerConfig((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject pad_settings_dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_pad_settings_dialog.data,
    qt_meta_data_pad_settings_dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *pad_settings_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pad_settings_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pad_settings_dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int pad_settings_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
