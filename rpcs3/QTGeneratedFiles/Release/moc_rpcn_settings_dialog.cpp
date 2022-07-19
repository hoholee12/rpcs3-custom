/****************************************************************************
** Meta object code from reading C++ file 'rpcn_settings_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/rpcn_settings_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpcn_settings_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rpcn_settings_dialog_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rpcn_settings_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rpcn_settings_dialog_t qt_meta_stringdata_rpcn_settings_dialog = {
    {
QT_MOC_LITERAL(0, 0, 20) // "rpcn_settings_dialog"

    },
    "rpcn_settings_dialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rpcn_settings_dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void rpcn_settings_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject rpcn_settings_dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_rpcn_settings_dialog.data,
    qt_meta_data_rpcn_settings_dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rpcn_settings_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rpcn_settings_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rpcn_settings_dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int rpcn_settings_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_rpcn_account_dialog_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rpcn_account_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rpcn_account_dialog_t qt_meta_stringdata_rpcn_account_dialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "rpcn_account_dialog"
QT_MOC_LITERAL(1, 20, 14), // "create_account"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12) // "resend_token"

    },
    "rpcn_account_dialog\0create_account\0\0"
    "resend_token"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rpcn_account_dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rpcn_account_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<rpcn_account_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->create_account(); break;
        case 1: _t->resend_token(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject rpcn_account_dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_rpcn_account_dialog.data,
    qt_meta_data_rpcn_account_dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rpcn_account_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rpcn_account_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rpcn_account_dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int rpcn_account_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_rpcn_ask_password_dialog_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rpcn_ask_password_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rpcn_ask_password_dialog_t qt_meta_stringdata_rpcn_ask_password_dialog = {
    {
QT_MOC_LITERAL(0, 0, 24) // "rpcn_ask_password_dialog"

    },
    "rpcn_ask_password_dialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rpcn_ask_password_dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void rpcn_ask_password_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject rpcn_ask_password_dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_rpcn_ask_password_dialog.data,
    qt_meta_data_rpcn_ask_password_dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rpcn_ask_password_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rpcn_ask_password_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rpcn_ask_password_dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int rpcn_ask_password_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_rpcn_friends_dialog_t {
    QByteArrayData data[10];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rpcn_friends_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rpcn_friends_dialog_t qt_meta_stringdata_rpcn_friends_dialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "rpcn_friends_dialog"
QT_MOC_LITERAL(1, 20, 24), // "signal_add_update_friend"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 4), // "name"
QT_MOC_LITERAL(4, 51, 6), // "status"
QT_MOC_LITERAL(5, 58, 20), // "signal_remove_friend"
QT_MOC_LITERAL(6, 79, 16), // "signal_add_query"
QT_MOC_LITERAL(7, 96, 17), // "add_update_friend"
QT_MOC_LITERAL(8, 114, 13), // "remove_friend"
QT_MOC_LITERAL(9, 128, 9) // "add_query"

    },
    "rpcn_friends_dialog\0signal_add_update_friend\0"
    "\0name\0status\0signal_remove_friend\0"
    "signal_add_query\0add_update_friend\0"
    "remove_friend\0add_query"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rpcn_friends_dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    1,   49,    2, 0x06 /* Public */,
       6,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   55,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void rpcn_friends_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<rpcn_friends_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_add_update_friend((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->signal_remove_friend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->signal_add_query((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->add_update_friend((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->remove_friend((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->add_query((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (rpcn_friends_dialog::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rpcn_friends_dialog::signal_add_update_friend)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (rpcn_friends_dialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rpcn_friends_dialog::signal_remove_friend)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (rpcn_friends_dialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&rpcn_friends_dialog::signal_add_query)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rpcn_friends_dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_rpcn_friends_dialog.data,
    qt_meta_data_rpcn_friends_dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rpcn_friends_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rpcn_friends_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rpcn_friends_dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int rpcn_friends_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void rpcn_friends_dialog::signal_add_update_friend(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rpcn_friends_dialog::signal_remove_friend(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void rpcn_friends_dialog::signal_add_query(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
