/****************************************************************************
** Meta object code from reading C++ file 'iteminterface.h'
**
** Created: Sun Jan 22 16:20:14 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "iteminterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iteminterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReport__ItemInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   24, // properties
       1,   36, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   27,   26,   26, 0x05,
      65,   27,   26,   26, 0x05,

 // properties: name, type, flags
      27,   91, 0x0a495003,
      27,   99, 0x0049410b,
     121,  109, 0x0b084001,

 // properties: notify_signal_id
       0,
       0,
       0,

 // enums: name, flags, count, data
      99, 0x0,    3,   40,

 // enum data: key, value
     141, uint(CuteReport::ItemInterface::AlwaysShift),
     153, uint(CuteReport::ItemInterface::DontShift),
     163, uint(CuteReport::ItemInterface::ShiftWhenOverlapped),

       0        // eod
};

static const char qt_meta_stringdata_CuteReport__ItemInterface[] = {
    "CuteReport::ItemInterface\0\0shiftMode\0"
    "shiftModeChanged(ShiftMode)\0"
    "shiftModeChanged(QString)\0QString\0"
    "ShiftMode\0QStringList\0_shiftMode_variants\0"
    "AlwaysShift\0DontShift\0ShiftWhenOverlapped\0"
};

void CuteReport::ItemInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ItemInterface *_t = static_cast<ItemInterface *>(_o);
        switch (_id) {
        case 0: _t->shiftModeChanged((*reinterpret_cast< ShiftMode(*)>(_a[1]))); break;
        case 1: _t->shiftModeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteReport::ItemInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::ItemInterface::staticMetaObject = {
    { &BaseItemInterface::staticMetaObject, qt_meta_stringdata_CuteReport__ItemInterface,
      qt_meta_data_CuteReport__ItemInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::ItemInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::ItemInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::ItemInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__ItemInterface))
        return static_cast<void*>(const_cast< ItemInterface*>(this));
    if (!strcmp(_clname, "CuteReport.BaseItemInterface/1.0"))
        return static_cast< CuteReport::BaseItemInterface*>(const_cast< ItemInterface*>(this));
    return BaseItemInterface::qt_metacast(_clname);
}

int CuteReport::ItemInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseItemInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = shiftModeStr(); break;
        case 1: *reinterpret_cast< ShiftMode*>(_v) = shiftMode(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _shiftMode_variants(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setShiftModeStr(*reinterpret_cast< QString*>(_v)); break;
        case 1: setShiftMode(*reinterpret_cast< ShiftMode*>(_v)); break;
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

// SIGNAL 0
void CuteReport::ItemInterface::shiftModeChanged(ShiftMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CuteReport::ItemInterface::shiftModeChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
