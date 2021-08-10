/****************************************************************************
** Meta object code from reading C++ file 'detailheader.h'
**
** Created: Sun Jan 22 17:32:34 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "detailheader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'detailheader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DetailHeader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      38,   13,   13,   13, 0x05,
      64,   13,   13,   13, 0x05,
      90,   13,   13,   13, 0x05,
     120,   13,   13,   13, 0x05,

 // properties: name, type, flags
     159,  151, 0x0a495103,
     167,  151, 0x0a495103,
     182,  177, 0x01495103,
     199,  177, 0x01495103,
     212,  177, 0x01095103,

 // properties: notify_signal_id
       0,
       1,
       3,
       2,
       0,

       0        // eod
};

static const char qt_meta_stringdata_DetailHeader[] = {
    "DetailHeader\0\0datasetChanged(QString)\0"
    "conditionChanged(QString)\0"
    "startNewpageChanged(bool)\0"
    "reprintOnNewPageChanged(bool)\0"
    "resetDetailNumberChanged(bool)\0QString\0"
    "dataset\0condition\0bool\0reprintOnNewPage\0"
    "startNewPage\0resetDetailNumber\0"
};

void DetailHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DetailHeader *_t = static_cast<DetailHeader *>(_o);
        switch (_id) {
        case 0: _t->datasetChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->conditionChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->startNewpageChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->reprintOnNewPageChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->resetDetailNumberChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DetailHeader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DetailHeader::staticMetaObject = {
    { &CuteReport::BandInterface::staticMetaObject, qt_meta_stringdata_DetailHeader,
      qt_meta_data_DetailHeader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DetailHeader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DetailHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DetailHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DetailHeader))
        return static_cast<void*>(const_cast< DetailHeader*>(this));
    if (!strcmp(_clname, "CuteReport.BandInterface/1.0"))
        return static_cast< CuteReport::BandInterface*>(const_cast< DetailHeader*>(this));
    typedef CuteReport::BandInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int DetailHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::BandInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = dataset(); break;
        case 1: *reinterpret_cast< QString*>(_v) = condition(); break;
        case 2: *reinterpret_cast< bool*>(_v) = reprintOnNewPage(); break;
        case 3: *reinterpret_cast< bool*>(_v) = startNewPage(); break;
        case 4: *reinterpret_cast< bool*>(_v) = resetDetailNumber(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDataset(*reinterpret_cast< QString*>(_v)); break;
        case 1: setCondition(*reinterpret_cast< QString*>(_v)); break;
        case 2: setReprintOnNewPage(*reinterpret_cast< bool*>(_v)); break;
        case 3: setStartNewPage(*reinterpret_cast< bool*>(_v)); break;
        case 4: setResetDetailNumber(*reinterpret_cast< bool*>(_v)); break;
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
void DetailHeader::datasetChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DetailHeader::conditionChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DetailHeader::startNewpageChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DetailHeader::reprintOnNewPageChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DetailHeader::resetDetailNumberChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
