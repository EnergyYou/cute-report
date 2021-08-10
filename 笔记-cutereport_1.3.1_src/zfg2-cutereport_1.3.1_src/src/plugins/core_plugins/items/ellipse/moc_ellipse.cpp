/****************************************************************************
** Meta object code from reading C++ file 'ellipse.h'
**
** Created: Wed Feb 8 11:31:48 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ellipse.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ellipse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EllipseItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      30,   12,   12,   12, 0x05,

 // properties: name, type, flags
      56,   51, 0x4d495103,
      67,   60, 0x42495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_EllipseItem[] = {
    "EllipseItem\0\0penChanged(QPen)\0"
    "brushChanged(QBrush)\0QPen\0pen\0QBrush\0"
    "brush\0"
};

void EllipseItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EllipseItem *_t = static_cast<EllipseItem *>(_o);
        switch (_id) {
        case 0: _t->penChanged((*reinterpret_cast< QPen(*)>(_a[1]))); break;
        case 1: _t->brushChanged((*reinterpret_cast< QBrush(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EllipseItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EllipseItem::staticMetaObject = {
    { &CuteReport::ItemInterface::staticMetaObject, qt_meta_stringdata_EllipseItem,
      qt_meta_data_EllipseItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EllipseItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EllipseItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EllipseItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EllipseItem))
        return static_cast<void*>(const_cast< EllipseItem*>(this));
    if (!strcmp(_clname, "CuteReport.ItemInterface/1.0"))
        return static_cast< CuteReport::ItemInterface*>(const_cast< EllipseItem*>(this));
    typedef CuteReport::ItemInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int EllipseItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::ItemInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = brush(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void EllipseItem::penChanged(QPen _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EllipseItem::brushChanged(QBrush _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
