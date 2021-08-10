/****************************************************************************
** Meta object code from reading C++ file 'bandinterface.h'
**
** Created: Wed Feb 8 11:23:19 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bandinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bandinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReport__BandInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,
      63,   26,   26,   26, 0x05,
      85,   26,   26,   26, 0x05,
     110,   26,   26,   26, 0x05,
     142,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
     170,  161,   26,   26, 0x08,

 // properties: name, type, flags
     204,  199, 0x01495103,
     216,  199, 0x01495103,
     242,  235, 0x16094103,
     268,  262, 0x40495103,

 // properties: notify_signal_id
       2,
       3,
       0,
       4,

       0        // eod
};

static const char qt_meta_stringdata_CuteReport__BandInterface[] = {
    "CuteReport::BandInterface\0\0"
    "marginsChanged(CuteReport::Margins)\0"
    "groupChanged(QString)\0stretchableChanged(bool)\0"
    "showStretchabilityChanged(bool)\0"
    "fontChanged(QFont)\0geometry\0"
    "childGeometryChanged(QRectF)\0bool\0"
    "stretchable\0showStretchability\0QSizeF\0"
    "stretchOriginalSize\0QFont\0font\0"
};

void CuteReport::BandInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BandInterface *_t = static_cast<BandInterface *>(_o);
        switch (_id) {
        case 0: _t->marginsChanged((*reinterpret_cast< CuteReport::Margins(*)>(_a[1]))); break;
        case 1: _t->groupChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->stretchableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showStretchabilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->fontChanged((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 5: _t->childGeometryChanged((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteReport::BandInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::BandInterface::staticMetaObject = {
    { &BaseItemInterface::staticMetaObject, qt_meta_stringdata_CuteReport__BandInterface,
      qt_meta_data_CuteReport__BandInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::BandInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::BandInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::BandInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__BandInterface))
        return static_cast<void*>(const_cast< BandInterface*>(this));
    if (!strcmp(_clname, "CuteReport.BaseItemInterface/1.0"))
        return static_cast< CuteReport::BaseItemInterface*>(const_cast< BandInterface*>(this));
    return BaseItemInterface::qt_metacast(_clname);
}

int CuteReport::BandInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseItemInterface::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< bool*>(_v) = stretchable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = showStretchability(); break;
        case 2: *reinterpret_cast< QSizeF*>(_v) = stretchOriginalSize(); break;
        case 3: *reinterpret_cast< QFont*>(_v) = font(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setStretchable(*reinterpret_cast< bool*>(_v)); break;
        case 1: setShowStretchability(*reinterpret_cast< bool*>(_v)); break;
        case 2: setStretchOriginalSize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 3: setFont(*reinterpret_cast< QFont*>(_v)); break;
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
void CuteReport::BandInterface::marginsChanged(CuteReport::Margins _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CuteReport::BandInterface::groupChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CuteReport::BandInterface::stretchableChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CuteReport::BandInterface::showStretchabilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CuteReport::BandInterface::fontChanged(QFont _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
