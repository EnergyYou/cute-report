/****************************************************************************
** Meta object code from reading C++ file 'gradient.h'
**
** Created: Sun Jan 22 16:08:11 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gradient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gradient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gradient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   10,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Gradient[] = {
    "Gradient\0\0g\0setValue(QGradient)\0"
};

void Gradient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Gradient *_t = static_cast<Gradient *>(_o);
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< const QGradient(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gradient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gradient::staticMetaObject = {
    { &PropertyEditor::PropertyInterface::staticMetaObject, qt_meta_stringdata_Gradient,
      qt_meta_data_Gradient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gradient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gradient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gradient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gradient))
        return static_cast<void*>(const_cast< Gradient*>(this));
    if (!strcmp(_clname, "eu.licentia.PropertyEditor.PropetyInterface/1.0"))
        return static_cast< PropertyEditor::PropertyInterface*>(const_cast< Gradient*>(this));
    typedef PropertyEditor::PropertyInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Gradient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef PropertyEditor::PropertyInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
