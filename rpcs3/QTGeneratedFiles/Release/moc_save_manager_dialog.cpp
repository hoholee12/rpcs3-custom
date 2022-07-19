/****************************************************************************
** Meta object code from reading C++ file 'save_manager_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/save_manager_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'save_manager_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_save_manager_dialog_t {
    QByteArrayData data[10];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_save_manager_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_save_manager_dialog_t qt_meta_stringdata_save_manager_dialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "save_manager_dialog"
QT_MOC_LITERAL(1, 20, 22), // "HandleRepaintUiRequest"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 13), // "OnEntryRemove"
QT_MOC_LITERAL(4, 58, 15), // "OnEntriesRemove"
QT_MOC_LITERAL(5, 74, 6), // "OnSort"
QT_MOC_LITERAL(6, 81, 12), // "logicalIndex"
QT_MOC_LITERAL(7, 94, 11), // "SetIconSize"
QT_MOC_LITERAL(8, 106, 4), // "size"
QT_MOC_LITERAL(9, 111, 13) // "UpdateDetails"

    },
    "save_manager_dialog\0HandleRepaintUiRequest\0"
    "\0OnEntryRemove\0OnEntriesRemove\0OnSort\0"
    "logicalIndex\0SetIconSize\0size\0"
    "UpdateDetails"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_save_manager_dialog[] = {

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
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

       0        // eod
};

void save_manager_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<save_manager_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->HandleRepaintUiRequest(); break;
        case 1: _t->OnEntryRemove(); break;
        case 2: _t->OnEntriesRemove(); break;
        case 3: _t->OnSort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SetIconSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->UpdateDetails(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject save_manager_dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_save_manager_dialog.data,
    qt_meta_data_save_manager_dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *save_manager_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *save_manager_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_save_manager_dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int save_manager_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
