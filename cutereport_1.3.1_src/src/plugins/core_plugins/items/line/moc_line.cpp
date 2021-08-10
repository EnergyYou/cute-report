/****************************************************************************
** Meta object code from reading C++ file 'line.h'
**
** Created: Sun Jan 22 17:35:14 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "line.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'line.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LineItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   29, // properties
       1,   45, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      38,    9,    9,    9, 0x05,
      64,    9,    9,    9, 0x05,

 // properties: name, type, flags
      90,   85, 0x4d495103,
     106,   98, 0x0a495003,
     106,  116, 0x0049410b,
     138,  126, 0x0b094001,

 // properties: notify_signal_id
       2,
       0,
       0,
       0,

 // enums: name, flags, count, data
     116, 0x0,    4,   49,

 // enum data: key, value
     158, uint(LineItem::Vertical),
     167, uint(LineItem::Horizontal),
     178, uint(LineItem::ForwardDiagonal),
     194, uint(LineItem::BackwardDiagonal),

       0        // eod
};

static const char qt_meta_stringdata_LineItem[] = {
    "LineItem\0\0lineStyleChanged(LineStyle)\0"
    "lineStyleChanged(QString)\0"
    "linePenChanged(QPen)\0QPen\0linePen\0"
    "QString\0lineStyle\0LineStyle\0QStringList\0"
    "_lineStyle_variants\0Vertical\0Horizontal\0"
    "ForwardDiagonal\0BackwardDiagonal\0"
};

void LineItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LineItem *_t = static_cast<LineItem *>(_o);
        switch (_id) {
        case 0: _t->lineStyleChanged((*reinterpret_cast< LineStyle(*)>(_a[1]))); break;
        case 1: _t->lineStyleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->linePenChanged((*reinterpret_cast< QPen(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LineItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LineItem::staticMetaObject = {
    { &CuteReport::ItemInterface::staticMetaObject, qt_meta_stringdata_LineItem,
      qt_meta_data_LineItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LineItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LineItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LineItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LineItem))
        return static_cast<void*>(const_cast< LineItem*>(this));
    if (!strcmp(_clname, "CuteReport.ItemInterface/1.0"))
        return static_cast< CuteReport::ItemInterface*>(const_cast< LineItem*>(this));
    typedef CuteReport::ItemInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int LineItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::ItemInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPen*>(_v) = linePen(); break;
        case 1: *reinterpret_cast< QString*>(_v) = lineStyleStr(); break;
        case 2: *reinterpret_cast< LineStyle*>(_v) = lineStyle(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _lineStyle_variants(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLinePen(*reinterpret_cast< QPen*>(_v)); break;
        case 1: setLineStyleStr(*reinterpret_cast< QString*>(_v)); break;
        case 2: setLineStyle(*reinterpret_cast< LineStyle*>(_v)); break;
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
void LineItem::lineStyleChanged(LineStyle _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LineItem::lineStyleChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LineItem::linePenChanged(QPen _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
