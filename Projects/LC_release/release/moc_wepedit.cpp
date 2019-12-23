/****************************************************************************
** Meta object code from reading C++ file 'wepedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../LeuciusCalculator/wepedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wepedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_wepEdit_t {
    QByteArrayData data[9];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wepEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wepEdit_t qt_meta_stringdata_wepEdit = {
    {
QT_MOC_LITERAL(0, 0, 7), // "wepEdit"
QT_MOC_LITERAL(1, 8, 22), // "on_weaponbox_activated"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "index"
QT_MOC_LITERAL(4, 38, 15), // "on_DD_activated"
QT_MOC_LITERAL(5, 54, 21), // "on_editDamage_clicked"
QT_MOC_LITERAL(6, 76, 23), // "on_editDamage_2_clicked"
QT_MOC_LITERAL(7, 100, 17), // "on_delWep_clicked"
QT_MOC_LITERAL(8, 118, 18) // "on_confirm_clicked"

    },
    "wepEdit\0on_weaponbox_activated\0\0index\0"
    "on_DD_activated\0on_editDamage_clicked\0"
    "on_editDamage_2_clicked\0on_delWep_clicked\0"
    "on_confirm_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wepEdit[] = {

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
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       5,    0,   50,    2, 0x08 /* Private */,
       6,    0,   51,    2, 0x08 /* Private */,
       7,    0,   52,    2, 0x08 /* Private */,
       8,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void wepEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<wepEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_weaponbox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_DD_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_editDamage_clicked(); break;
        case 3: _t->on_editDamage_2_clicked(); break;
        case 4: _t->on_delWep_clicked(); break;
        case 5: _t->on_confirm_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject wepEdit::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_wepEdit.data,
    qt_meta_data_wepEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *wepEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wepEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_wepEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int wepEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
