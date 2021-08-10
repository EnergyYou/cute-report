/****************************************************************************
** Meta object code from reading C++ file 'cr_margins_prop.h'
**
** Created: Sun Jan 22 17:37:31 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cr_margins_prop.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cr_margins_prop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CR_MarginsProp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      21,   15, ((uint)QMetaType::QReal << 24) | 0x00195103,
      26,   15, ((uint)QMetaType::QReal << 24) | 0x00195103,
      32,   15, ((uint)QMetaType::QReal << 24) | 0x00195103,
      36,   15, ((uint)QMetaType::QReal << 24) | 0x00195103,

       0        // eod
};

static const char qt_meta_stringdata_CR_MarginsProp[] = {
    "CR_MarginsProp\0qreal\0left\0right\0top\0"
    "bottom\0"
};

void CR_MarginsProp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CR_MarginsProp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CR_MarginsProp::staticMetaObject = {
    { &PropertyInterface::staticMetaObject, qt_meta_stringdata_CR_MarginsProp,
      qt_meta_data_CR_MarginsProp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CR_MarginsProp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CR_MarginsProp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CR_MarginsProp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CR_MarginsProp))
        return static_cast<void*>(const_cast< CR_MarginsProp*>(this));
    if (!strcmp(_clname, "eu.licentia.PropertyEditor.PropetyInterface/1.0"))
        return static_cast< PropertyEditor::PropertyInterface*>(const_cast< CR_MarginsProp*>(this));
    return PropertyInterface::qt_metacast(_clname);
}

int CR_MarginsProp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = left(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = right(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = top(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = bottom(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLeft(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setRight(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setTop(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setBottom(*reinterpret_cast< qreal*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
