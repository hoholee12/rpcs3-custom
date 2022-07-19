/****************************************************************************
** Meta object code from reading C++ file 'trophy_manager_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/trophy_manager_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trophy_manager_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_trophy_manager_dialog_t {
    QByteArrayData data[10];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_trophy_manager_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_trophy_manager_dialog_t qt_meta_stringdata_trophy_manager_dialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "trophy_manager_dialog"
QT_MOC_LITERAL(1, 22, 22), // "HandleRepaintUiRequest"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 18), // "GetResizedGameIcon"
QT_MOC_LITERAL(4, 65, 5), // "index"
QT_MOC_LITERAL(5, 71, 15), // "ResizeGameIcons"
QT_MOC_LITERAL(6, 87, 17), // "ResizeTrophyIcons"
QT_MOC_LITERAL(7, 105, 11), // "ApplyFilter"
QT_MOC_LITERAL(8, 117, 15), // "ShowContextMenu"
QT_MOC_LITERAL(9, 133, 3) // "pos"

    },
    "trophy_manager_dialog\0HandleRepaintUiRequest\0"
    "\0GetResizedGameIcon\0index\0ResizeGameIcons\0"
    "ResizeTrophyIcons\0ApplyFilter\0"
    "ShowContextMenu\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_trophy_manager_dialog[] = {

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
       3,    1,   45,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QPixmap, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    9,

       0        // eod
};

void trophy_manager_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<trophy_manager_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->HandleRepaintUiRequest(); break;
        case 1: { QPixmap _r = _t->GetResizedGameIcon((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->ResizeGameIcons(); break;
        case 3: _t->ResizeTrophyIcons(); break;
        case 4: _t->ApplyFilter(); break;
        case 5: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject trophy_manager_dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_trophy_manager_dialog.data,
    qt_meta_data_trophy_manager_dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *trophy_manager_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *trophy_manager_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_trophy_manager_dialog.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int trophy_manager_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
