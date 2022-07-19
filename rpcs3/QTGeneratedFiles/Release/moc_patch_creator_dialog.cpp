/****************************************************************************
** Meta object code from reading C++ file 'patch_creator_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/patch_creator_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'patch_creator_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_patch_creator_dialog_t {
    QByteArrayData data[8];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_patch_creator_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_patch_creator_dialog_t qt_meta_stringdata_patch_creator_dialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "patch_creator_dialog"
QT_MOC_LITERAL(1, 21, 15), // "show_table_menu"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 3), // "pos"
QT_MOC_LITERAL(4, 42, 8), // "validate"
QT_MOC_LITERAL(5, 51, 12), // "generate_yml"
QT_MOC_LITERAL(6, 64, 4), // "text"
QT_MOC_LITERAL(7, 69, 12) // "export_patch"

    },
    "patch_creator_dialog\0show_table_menu\0"
    "\0pos\0validate\0generate_yml\0text\0"
    "export_patch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_patch_creator_dialog[] = {

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
       4,    0,   42,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       5,    0,   46,    2, 0x28 /* Private | MethodCloned */,
       7,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void patch_creator_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<patch_creator_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show_table_menu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->validate(); break;
        case 2: _t->generate_yml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->generate_yml(); break;
        case 4: _t->export_patch(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject patch_creator_dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_patch_creator_dialog.data,
    qt_meta_data_patch_creator_dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *patch_creator_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *patch_creator_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_patch_creator_dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int patch_creator_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
