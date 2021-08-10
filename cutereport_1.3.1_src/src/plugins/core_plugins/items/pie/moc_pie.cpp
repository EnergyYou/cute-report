/****************************************************************************
** Meta object code from reading C++ file 'pie.h'
**
** Created: Sun Jan 22 17:35:49 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pie.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pie.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PieItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      26,    8,    8,    8, 0x05,
      47,    8,    8,    8, 0x05,
      70,    8,    8,    8, 0x05,

 // properties: name, type, flags
      97,   92, 0x4d495103,
     108,  101, 0x42495103,
     118,  114, 0x02495103,
     129,  114, 0x02495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

static const char qt_meta_stringdata_PieItem[] = {
    "PieItem\0\0penChanged(QPen)\0"
    "brushChanged(QBrush)\0startAngleChanged(int)\0"
    "spanAngleChanged(int)\0QPen\0pen\0QBrush\0"
    "brush\0int\0startAngle\0spanAngle\0"
};

void PieItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PieItem *_t = static_cast<PieItem *>(_o);
        switch (_id) {
        case 0: _t->penChanged((*reinterpret_cast< QPen(*)>(_a[1]))); break;
        case 1: _t->brushChanged((*reinterpret_cast< QBrush(*)>(_a[1]))); break;
        case 2: _t->startAngleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->spanAngleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PieItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PieItem::staticMetaObject = {
    { &CuteReport::ItemInterface::staticMetaObject, qt_meta_stringdata_PieItem,
      qt_meta_data_PieItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PieItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PieItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PieItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PieItem))
        return static_cast<void*>(const_cast< PieItem*>(this));
    if (!strcmp(_clname, "CuteReport.ItemInterface/1.0"))
        return static_cast< CuteReport::ItemInterface*>(const_cast< PieItem*>(this));
    typedef CuteReport::ItemInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PieItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::ItemInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = brush(); break;
        case 2: *reinterpret_cast< int*>(_v) = startAngle(); break;
        case 3: *reinterpret_cast< int*>(_v) = spanAngle(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 2: setStartAngle(*reinterpret_cast< int*>(_v)); break;
        case 3: setSpanAngle(*reinterpret_cast< int*>(_v)); break;
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

// SIGNAL 0
void PieItem::penChanged(QPen _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PieItem::brushChanged(QBrush _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PieItem::startAngleChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PieItem::spanAngleChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
