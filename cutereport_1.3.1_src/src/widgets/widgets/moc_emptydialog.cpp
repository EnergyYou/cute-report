/****************************************************************************
** Meta object code from reading C++ file 'emptydialog.h'
**
** Created: Sun Jan 22 16:38:41 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "emptydialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emptydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EmptyDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      26,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EmptyDialog[] = {
    "EmptyDialog\0\0slotAccept()\0slotReject()\0"
};

void EmptyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EmptyDialog *_t = static_cast<EmptyDialog *>(_o);
        switch (_id) {
        case 0: _t->slotAccept(); break;
        case 1: _t->slotReject(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EmptyDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EmptyDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EmptyDialog,
      qt_meta_data_EmptyDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EmptyDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EmptyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EmptyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EmptyDialog))
        return static_cast<void*>(const_cast< EmptyDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EmptyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
