/****************************************************************************
** Meta object code from reading C++ file 'detail.h'
**
** Created: Sun Jan 22 17:32:27 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "detail.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'detail.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Detail[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      30,    7,    7,    7, 0x05,
      54,    7,    7,    7, 0x05,
      73,    7,    7,    7, 0x05,
     103,    7,    7,    7, 0x05,
     129,    7,    7,    7, 0x05,

 // properties: name, type, flags
     161,  153, 0x0a495103,
     174,  169, 0x01495103,
     187,  180, 0x42495103,
     202,  169, 0x01495103,
     215,  169, 0x01495103,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

static const char qt_meta_stringdata_Detail[] = {
    "Detail\0\0groupChanged(QString)\0"
    "datasetChanged(QString)\0zebraChanged(bool)\0"
    "alternateBrushChanged(QBrush)\0"
    "forceNewPageChanged(bool)\0"
    "allowSplitChanged(bool)\0QString\0dataset\0"
    "bool\0zebra\0QBrush\0alternateBrush\0"
    "forceNewPage\0allowSplit\0"
};

void Detail::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Detail *_t = static_cast<Detail *>(_o);
        switch (_id) {
        case 0: _t->groupChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->datasetChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->zebraChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->alternateBrushChanged((*reinterpret_cast< QBrush(*)>(_a[1]))); break;
        case 4: _t->forceNewPageChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->allowSplitChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Detail::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Detail::staticMetaObject = {
    { &CuteReport::BandInterface::staticMetaObject, qt_meta_stringdata_Detail,
      qt_meta_data_Detail, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Detail::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Detail::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Detail::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Detail))
        return static_cast<void*>(const_cast< Detail*>(this));
    if (!strcmp(_clname, "CuteReport.BandInterface/1.0"))
        return static_cast< CuteReport::BandInterface*>(const_cast< Detail*>(this));
    typedef CuteReport::BandInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Detail::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::BandInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = dataset(); break;
        case 1: *reinterpret_cast< bool*>(_v) = zebra(); break;
        case 2: *reinterpret_cast< QBrush*>(_v) = alternateBrush(); break;
        case 3: *reinterpret_cast< bool*>(_v) = forceNewPage(); break;
        case 4: *reinterpret_cast< bool*>(_v) = allowSplit(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDataset(*reinterpret_cast< QString*>(_v)); break;
        case 1: setZebra(*reinterpret_cast< bool*>(_v)); break;
        case 2: setAlternateBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 3: setForceNewPage(*reinterpret_cast< bool*>(_v)); break;
        case 4: setAllowSplit(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Detail::groupChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Detail::datasetChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Detail::zebraChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Detail::alternateBrushChanged(QBrush _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Detail::forceNewPageChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Detail::allowSplitChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
