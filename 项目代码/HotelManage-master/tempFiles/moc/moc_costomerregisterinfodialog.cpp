/****************************************************************************
** Meta object code from reading C++ file 'costomerregisterinfodialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Src/costomerregisterinfodialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'costomerregisterinfodialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CostomerRegisterInfoDialog_t {
    QByteArrayData data[8];
    char stringdata[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CostomerRegisterInfoDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CostomerRegisterInfoDialog_t qt_meta_stringdata_CostomerRegisterInfoDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "CostomerRegisterInfoDialog"
QT_MOC_LITERAL(1, 27, 16), // "showCustomerInfo"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 22), // "on_checkBoxPwd_clicked"
QT_MOC_LITERAL(4, 68, 7), // "checked"
QT_MOC_LITERAL(5, 76, 20), // "on_pbnModify_clicked"
QT_MOC_LITERAL(6, 97, 20), // "on_pbnCancel_clicked"
QT_MOC_LITERAL(7, 118, 18) // "on_pbnSave_clicked"

    },
    "CostomerRegisterInfoDialog\0showCustomerInfo\0"
    "\0on_checkBoxPwd_clicked\0checked\0"
    "on_pbnModify_clicked\0on_pbnCancel_clicked\0"
    "on_pbnSave_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CostomerRegisterInfoDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CostomerRegisterInfoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CostomerRegisterInfoDialog *_t = static_cast<CostomerRegisterInfoDialog *>(_o);
        switch (_id) {
        case 0: _t->showCustomerInfo(); break;
        case 1: _t->on_checkBoxPwd_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_pbnModify_clicked(); break;
        case 3: _t->on_pbnCancel_clicked(); break;
        case 4: _t->on_pbnSave_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject CostomerRegisterInfoDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CostomerRegisterInfoDialog.data,
      qt_meta_data_CostomerRegisterInfoDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CostomerRegisterInfoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CostomerRegisterInfoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CostomerRegisterInfoDialog.stringdata))
        return static_cast<void*>(const_cast< CostomerRegisterInfoDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CostomerRegisterInfoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
