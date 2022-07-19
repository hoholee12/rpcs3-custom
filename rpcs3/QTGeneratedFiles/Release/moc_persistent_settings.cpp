/****************************************************************************
** Meta object code from reading C++ file 'persistent_settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/persistent_settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'persistent_settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_persistent_settings_t {
    QByteArrayData data[11];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_persistent_settings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_persistent_settings_t qt_meta_stringdata_persistent_settings = {
    {
QT_MOC_LITERAL(0, 0, 19), // "persistent_settings"
QT_MOC_LITERAL(1, 20, 11), // "SetPlaytime"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "serial"
QT_MOC_LITERAL(4, 40, 8), // "playtime"
QT_MOC_LITERAL(5, 49, 11), // "AddPlaytime"
QT_MOC_LITERAL(6, 61, 7), // "elapsed"
QT_MOC_LITERAL(7, 69, 11), // "GetPlaytime"
QT_MOC_LITERAL(8, 81, 13), // "SetLastPlayed"
QT_MOC_LITERAL(9, 95, 4), // "date"
QT_MOC_LITERAL(10, 100, 13) // "GetLastPlayed"

    },
    "persistent_settings\0SetPlaytime\0\0"
    "serial\0playtime\0AddPlaytime\0elapsed\0"
    "GetPlaytime\0SetLastPlayed\0date\0"
    "GetLastPlayed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_persistent_settings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x0a /* Public */,
       5,    2,   44,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x0a /* Public */,
       8,    2,   52,    2, 0x0a /* Public */,
      10,    1,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::ULongLong,    3,    6,
    QMetaType::ULongLong, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    9,
    QMetaType::QString, QMetaType::QString,    3,

       0        // eod
};

void persistent_settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<persistent_settings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetPlaytime((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 1: _t->AddPlaytime((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 2: { quint64 _r = _t->GetPlaytime((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->SetLastPlayed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: { QString _r = _t->GetLastPlayed((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject persistent_settings::staticMetaObject = { {
    QMetaObject::SuperData::link<settings::staticMetaObject>(),
    qt_meta_stringdata_persistent_settings.data,
    qt_meta_data_persistent_settings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *persistent_settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *persistent_settings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_persistent_settings.stringdata0))
        return static_cast<void*>(this);
    return settings::qt_metacast(_clname);
}

int persistent_settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = settings::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
