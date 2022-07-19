/****************************************************************************
** Meta object code from reading C++ file 'gui_settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/gui_settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gui_settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gui_settings_t {
    QByteArrayData data[12];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui_settings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui_settings_t qt_meta_stringdata_gui_settings = {
    {
QT_MOC_LITERAL(0, 0, 12), // "gui_settings"
QT_MOC_LITERAL(1, 13, 21), // "SetCategoryVisibility"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 3), // "cat"
QT_MOC_LITERAL(4, 40, 3), // "val"
QT_MOC_LITERAL(5, 44, 24), // "SetGamelistColVisibility"
QT_MOC_LITERAL(6, 69, 3), // "col"
QT_MOC_LITERAL(7, 73, 14), // "SetCustomColor"
QT_MOC_LITERAL(8, 88, 14), // "SizeFromSlider"
QT_MOC_LITERAL(9, 103, 3), // "pos"
QT_MOC_LITERAL(10, 107, 19), // "GetGuiSaveForColumn"
QT_MOC_LITERAL(11, 127, 8) // "gui_save"

    },
    "gui_settings\0SetCategoryVisibility\0\0"
    "cat\0val\0SetGamelistColVisibility\0col\0"
    "SetCustomColor\0SizeFromSlider\0pos\0"
    "GetGuiSaveForColumn\0gui_save"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui_settings[] = {

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
       7,    2,   49,    2, 0x0a /* Public */,
       8,    1,   54,    2, 0x0a /* Public */,
      10,    1,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    6,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QColor,    6,    4,
    QMetaType::QSize, QMetaType::Int,    9,
    0x80000000 | 11, QMetaType::Int,    6,

       0        // eod
};

void gui_settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gui_settings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetCategoryVisibility((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 1: _t->SetGamelistColVisibility((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->SetCustomColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 3: { QSize _r = _t->SizeFromSlider((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = std::move(_r); }  break;
        case 4: { gui_save _r = _t->GetGuiSaveForColumn((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< gui_save*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gui_settings::staticMetaObject = { {
    QMetaObject::SuperData::link<settings::staticMetaObject>(),
    qt_meta_stringdata_gui_settings.data,
    qt_meta_data_gui_settings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui_settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui_settings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui_settings.stringdata0))
        return static_cast<void*>(this);
    return settings::qt_metacast(_clname);
}

int gui_settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
