/****************************************************************************
** Meta object code from reading C++ file 'patch_manager_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/patch_manager_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'patch_manager_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_patch_manager_dialog_t {
    QByteArrayData data[15];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_patch_manager_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_patch_manager_dialog_t qt_meta_stringdata_patch_manager_dialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "patch_manager_dialog"
QT_MOC_LITERAL(1, 21, 14), // "filter_patches"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "term"
QT_MOC_LITERAL(4, 42, 20), // "handle_item_selected"
QT_MOC_LITERAL(5, 63, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 80, 7), // "current"
QT_MOC_LITERAL(7, 88, 8), // "previous"
QT_MOC_LITERAL(8, 97, 19), // "handle_item_changed"
QT_MOC_LITERAL(9, 117, 4), // "item"
QT_MOC_LITERAL(10, 122, 6), // "column"
QT_MOC_LITERAL(11, 129, 36), // "handle_custom_context_menu_re..."
QT_MOC_LITERAL(12, 166, 3), // "pos"
QT_MOC_LITERAL(13, 170, 28), // "handle_show_owned_games_only"
QT_MOC_LITERAL(14, 199, 5) // "state"

    },
    "patch_manager_dialog\0filter_patches\0"
    "\0term\0handle_item_selected\0QTreeWidgetItem*\0"
    "current\0previous\0handle_item_changed\0"
    "item\0column\0handle_custom_context_menu_requested\0"
    "pos\0handle_show_owned_games_only\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_patch_manager_dialog[] = {

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
       1,    1,   39,    2, 0x08 /* Private */,
       4,    2,   42,    2, 0x08 /* Private */,
       8,    2,   47,    2, 0x08 /* Private */,
      11,    1,   52,    2, 0x08 /* Private */,
      13,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void patch_manager_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<patch_manager_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filter_patches((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->handle_item_selected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->handle_item_changed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->handle_custom_context_menu_requested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->handle_show_owned_games_only((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject patch_manager_dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_patch_manager_dialog.data,
    qt_meta_data_patch_manager_dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *patch_manager_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *patch_manager_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_patch_manager_dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int patch_manager_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
