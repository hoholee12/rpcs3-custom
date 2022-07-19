/****************************************************************************
** Meta object code from reading C++ file 'settings_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/settings_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_settings_dialog_t {
    QByteArrayData data[6];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_settings_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_settings_dialog_t qt_meta_stringdata_settings_dialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "settings_dialog"
QT_MOC_LITERAL(1, 16, 20), // "GuiStylesheetRequest"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 17), // "GuiRepaintRequest"
QT_MOC_LITERAL(4, 56, 18), // "EmuSettingsApplied"
QT_MOC_LITERAL(5, 75, 33) // "signal_restore_dependant_defa..."

    },
    "settings_dialog\0GuiStylesheetRequest\0"
    "\0GuiRepaintRequest\0EmuSettingsApplied\0"
    "signal_restore_dependant_defaults"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_settings_dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void settings_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<settings_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GuiStylesheetRequest(); break;
        case 1: _t->GuiRepaintRequest(); break;
        case 2: _t->EmuSettingsApplied(); break;
        case 3: _t->signal_restore_dependant_defaults(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (settings_dialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&settings_dialog::GuiStylesheetRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (settings_dialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&settings_dialog::GuiRepaintRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (settings_dialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&settings_dialog::EmuSettingsApplied)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (settings_dialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&settings_dialog::signal_restore_dependant_defaults)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject settings_dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_settings_dialog.data,
    qt_meta_data_settings_dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *settings_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *settings_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_settings_dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int settings_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void settings_dialog::GuiStylesheetRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void settings_dialog::GuiRepaintRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void settings_dialog::EmuSettingsApplied()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void settings_dialog::signal_restore_dependant_defaults()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
