/****************************************************************************
** Meta object code from reading C++ file 'memory_viewer_panel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/memory_viewer_panel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'memory_viewer_panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_memory_viewer_panel_t {
    QByteArrayData data[6];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_memory_viewer_panel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_memory_viewer_panel_t qt_meta_stringdata_memory_viewer_panel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "memory_viewer_panel"
QT_MOC_LITERAL(1, 20, 12), // "color_format"
QT_MOC_LITERAL(2, 33, 3), // "RGB"
QT_MOC_LITERAL(3, 37, 4), // "ARGB"
QT_MOC_LITERAL(4, 42, 4), // "RGBA"
QT_MOC_LITERAL(5, 47, 4) // "ABGR"

    },
    "memory_viewer_panel\0color_format\0RGB\0"
    "ARGB\0RGBA\0ABGR"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_memory_viewer_panel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    4,   19,

 // enum data: key, value
       2, uint(memory_viewer_panel::color_format::RGB),
       3, uint(memory_viewer_panel::color_format::ARGB),
       4, uint(memory_viewer_panel::color_format::RGBA),
       5, uint(memory_viewer_panel::color_format::ABGR),

       0        // eod
};

void memory_viewer_panel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject memory_viewer_panel::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_memory_viewer_panel.data,
    qt_meta_data_memory_viewer_panel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *memory_viewer_panel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *memory_viewer_panel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_memory_viewer_panel.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int memory_viewer_panel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
