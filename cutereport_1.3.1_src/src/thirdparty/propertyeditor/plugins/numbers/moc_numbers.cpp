/****************************************************************************
** Meta object code from reading C++ file 'numbers.h'
**
** Created: Sun Jan 22 16:06:30 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "numbers.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'numbers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Numbers[] = {

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
       9,    8,    8,    8, 0x0a,
      23,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Numbers[] = {
    "Numbers\0\0setValue(int)\0setValue(double)\0"
};

void Numbers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Numbers *_t = static_cast<Numbers *>(_o);
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Numbers::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Numbers::staticMetaObject = {
    { &PropertyInterface::staticMetaObject, qt_meta_stringdata_Numbers,
      qt_meta_data_Numbers, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Numbers::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Numbers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Numbers::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Numbers))
        return static_cast<void*>(const_cast< Numbers*>(this));
    if (!strcmp(_clname, "eu.licentia.PropertyEditor.PropetyInterface/1.0"))
        return static_cast< PropertyEditor::PropertyInterface*>(const_cast< Numbers*>(this));
    return PropertyInterface::qt_metacast(_clname);
}

int Numbers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyInterface::qt_metacall(_c, _id, _a);
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
