/****************************************************************************
** Meta object code from reading C++ file 'itemexternaldatainterface.h'
**
** Created: Sun Jan 22 16:20:13 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "itemexternaldatainterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemexternaldatainterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReport__ItemExternalDataInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      42,   38, 0x02084003,
      68,   60, 0x0a084001,
      98,   38, 0x02084001,

       0        // eod
};

static const char qt_meta_stringdata_CuteReport__ItemExternalDataInterface[] = {
    "CuteReport::ItemExternalDataInterface\0"
    "int\0_current_property\0QString\0"
    "_current_property_description\0"
    "_current_property_precision\0"
};

void CuteReport::ItemExternalDataInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CuteReport::ItemExternalDataInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::ItemExternalDataInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CuteReport__ItemExternalDataInterface,
      qt_meta_data_CuteReport__ItemExternalDataInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::ItemExternalDataInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::ItemExternalDataInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::ItemExternalDataInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__ItemExternalDataInterface))
        return static_cast<void*>(const_cast< ItemExternalDataInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int CuteReport::ItemExternalDataInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _currentProperty(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _current_property_description(); break;
        case 2: *reinterpret_cast< int*>(_v) = _current_property_precision(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _setCurrentProperty(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
