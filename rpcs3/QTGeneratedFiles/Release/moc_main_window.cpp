/****************************************************************************
** Meta object code from reading C++ file 'main_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../rpcs3qt/main_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_main_window_t {
    QByteArrayData data[43];
    char stringdata0[567];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_main_window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_main_window_t qt_meta_stringdata_main_window = {
    {
QT_MOC_LITERAL(0, 0, 11), // "main_window"
QT_MOC_LITERAL(1, 12, 21), // "RequestLanguageChange"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 8), // "language"
QT_MOC_LITERAL(4, 44, 29), // "RequestGlobalStylesheetChange"
QT_MOC_LITERAL(5, 74, 27), // "RequestTrophyManagerRepaint"
QT_MOC_LITERAL(6, 102, 23), // "NotifyEmuSettingsChange"
QT_MOC_LITERAL(7, 126, 9), // "OnEmuStop"
QT_MOC_LITERAL(8, 136, 8), // "OnEmuRun"
QT_MOC_LITERAL(9, 145, 14), // "start_playtime"
QT_MOC_LITERAL(10, 160, 11), // "OnEmuResume"
QT_MOC_LITERAL(11, 172, 10), // "OnEmuPause"
QT_MOC_LITERAL(12, 183, 10), // "OnEmuReady"
QT_MOC_LITERAL(13, 194, 10), // "RepaintGui"
QT_MOC_LITERAL(14, 205, 13), // "RetranslateUI"
QT_MOC_LITERAL(15, 219, 14), // "language_codes"
QT_MOC_LITERAL(16, 234, 13), // "OnPlayOrPause"
QT_MOC_LITERAL(17, 248, 4), // "Boot"
QT_MOC_LITERAL(18, 253, 11), // "std::string"
QT_MOC_LITERAL(19, 265, 4), // "path"
QT_MOC_LITERAL(20, 270, 8), // "title_id"
QT_MOC_LITERAL(21, 279, 6), // "direct"
QT_MOC_LITERAL(22, 286, 8), // "add_only"
QT_MOC_LITERAL(23, 295, 8), // "cfg_mode"
QT_MOC_LITERAL(24, 304, 11), // "config_mode"
QT_MOC_LITERAL(25, 316, 11), // "config_path"
QT_MOC_LITERAL(26, 328, 7), // "BootElf"
QT_MOC_LITERAL(27, 336, 8), // "BootGame"
QT_MOC_LITERAL(28, 345, 7), // "BootVSH"
QT_MOC_LITERAL(29, 353, 14), // "BootRsxCapture"
QT_MOC_LITERAL(30, 368, 20), // "DecryptSPRXLibraries"
QT_MOC_LITERAL(31, 389, 15), // "show_boot_error"
QT_MOC_LITERAL(32, 405, 16), // "game_boot_result"
QT_MOC_LITERAL(33, 422, 6), // "status"
QT_MOC_LITERAL(34, 429, 15), // "SaveWindowState"
QT_MOC_LITERAL(35, 445, 24), // "ConfigureGuiFromSettings"
QT_MOC_LITERAL(36, 470, 18), // "SetIconSizeActions"
QT_MOC_LITERAL(37, 489, 3), // "idx"
QT_MOC_LITERAL(38, 493, 11), // "ResizeIcons"
QT_MOC_LITERAL(39, 505, 5), // "index"
QT_MOC_LITERAL(40, 511, 15), // "RemoveDiskCache"
QT_MOC_LITERAL(41, 527, 19), // "RemoveFirmwareCache"
QT_MOC_LITERAL(42, 547, 19) // "CreateFirmwareCache"

    },
    "main_window\0RequestLanguageChange\0\0"
    "language\0RequestGlobalStylesheetChange\0"
    "RequestTrophyManagerRepaint\0"
    "NotifyEmuSettingsChange\0OnEmuStop\0"
    "OnEmuRun\0start_playtime\0OnEmuResume\0"
    "OnEmuPause\0OnEmuReady\0RepaintGui\0"
    "RetranslateUI\0language_codes\0OnPlayOrPause\0"
    "Boot\0std::string\0path\0title_id\0direct\0"
    "add_only\0cfg_mode\0config_mode\0config_path\0"
    "BootElf\0BootGame\0BootVSH\0BootRsxCapture\0"
    "DecryptSPRXLibraries\0show_boot_error\0"
    "game_boot_result\0status\0SaveWindowState\0"
    "ConfigureGuiFromSettings\0SetIconSizeActions\0"
    "idx\0ResizeIcons\0index\0RemoveDiskCache\0"
    "RemoveFirmwareCache\0CreateFirmwareCache"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_main_window[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  174,    2, 0x06 /* Public */,
       4,    0,  177,    2, 0x06 /* Public */,
       5,    0,  178,    2, 0x06 /* Public */,
       6,    0,  179,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  180,    2, 0x0a /* Public */,
       8,    1,  181,    2, 0x0a /* Public */,
      10,    0,  184,    2, 0x0a /* Public */,
      11,    0,  185,    2, 0x0a /* Public */,
      12,    0,  186,    2, 0x0a /* Public */,
      13,    0,  187,    2, 0x0a /* Public */,
      14,    2,  188,    2, 0x0a /* Public */,
      16,    0,  193,    2, 0x08 /* Private */,
      17,    6,  194,    2, 0x08 /* Private */,
      17,    5,  207,    2, 0x28 /* Private | MethodCloned */,
      17,    4,  218,    2, 0x28 /* Private | MethodCloned */,
      17,    3,  227,    2, 0x28 /* Private | MethodCloned */,
      17,    2,  234,    2, 0x28 /* Private | MethodCloned */,
      17,    1,  239,    2, 0x28 /* Private | MethodCloned */,
      26,    0,  242,    2, 0x08 /* Private */,
      27,    0,  243,    2, 0x08 /* Private */,
      28,    0,  244,    2, 0x08 /* Private */,
      29,    1,  245,    2, 0x08 /* Private */,
      29,    0,  248,    2, 0x28 /* Private | MethodCloned */,
      30,    0,  249,    2, 0x08 /* Private */,
      31,    1,  250,    2, 0x08 /* Private */,
      34,    0,  253,    2, 0x08 /* Private */,
      35,    0,  254,    2, 0x08 /* Private */,
      36,    1,  255,    2, 0x08 /* Private */,
      38,    1,  258,    2, 0x08 /* Private */,
      40,    0,  261,    2, 0x08 /* Private */,
      41,    0,  262,    2, 0x08 /* Private */,
      42,    0,  263,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QString,   15,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 23, 0x80000000 | 18,   19,   20,   21,   22,   24,   25,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 23,   19,   20,   21,   22,   24,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18, QMetaType::Bool, QMetaType::Bool,   19,   20,   21,   22,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18, QMetaType::Bool,   19,   20,   21,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,   19,   20,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void main_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<main_window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RequestLanguageChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->RequestGlobalStylesheetChange(); break;
        case 2: _t->RequestTrophyManagerRepaint(); break;
        case 3: _t->NotifyEmuSettingsChange(); break;
        case 4: _t->OnEmuStop(); break;
        case 5: _t->OnEmuRun((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->OnEmuResume(); break;
        case 7: _t->OnEmuPause(); break;
        case 8: _t->OnEmuReady(); break;
        case 9: _t->RepaintGui(); break;
        case 10: _t->RetranslateUI((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->OnPlayOrPause(); break;
        case 12: _t->Boot((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< cfg_mode(*)>(_a[5])),(*reinterpret_cast< const std::string(*)>(_a[6]))); break;
        case 13: _t->Boot((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< cfg_mode(*)>(_a[5]))); break;
        case 14: _t->Boot((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 15: _t->Boot((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 16: _t->Boot((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 17: _t->Boot((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 18: _t->BootElf(); break;
        case 19: _t->BootGame(); break;
        case 20: _t->BootVSH(); break;
        case 21: _t->BootRsxCapture((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 22: _t->BootRsxCapture(); break;
        case 23: _t->DecryptSPRXLibraries(); break;
        case 24: _t->show_boot_error((*reinterpret_cast< game_boot_result(*)>(_a[1]))); break;
        case 25: _t->SaveWindowState(); break;
        case 26: _t->ConfigureGuiFromSettings(); break;
        case 27: _t->SetIconSizeActions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->ResizeIcons((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->RemoveDiskCache(); break;
        case 30: _t->RemoveFirmwareCache(); break;
        case 31: _t->CreateFirmwareCache(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (main_window::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&main_window::RequestLanguageChange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (main_window::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&main_window::RequestGlobalStylesheetChange)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (main_window::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&main_window::RequestTrophyManagerRepaint)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (main_window::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&main_window::NotifyEmuSettingsChange)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject main_window::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_main_window.data,
    qt_meta_data_main_window,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *main_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *main_window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_main_window.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int main_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void main_window::RequestLanguageChange(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void main_window::RequestGlobalStylesheetChange()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void main_window::RequestTrophyManagerRepaint()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void main_window::NotifyEmuSettingsChange()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
