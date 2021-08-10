/****************************************************************************
** Meta object code from reading C++ file 'rendererinterface.h'
**
** Created: Wed Feb 8 11:23:24 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rendererinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rendererinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReport__RendererInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,
      53,   41,   30,   30, 0x05,
      64,   30,   30,   30, 0x05,
     102,   76,   30,   30, 0x05,
     134,   30,   30,   30, 0x05,

 // properties: name, type, flags
     154,  150, 0x02084003,
     180,  172, 0x0a084001,

       0        // eod
};

static const char qt_meta_stringdata_CuteReport__RendererInterface[] = {
    "CuteReport::RendererInterface\0\0started()\0"
    "errorsFound\0done(bool)\0cancelled()\0"
    "page,total,pass,passTotal\0"
    "processingPage(int,int,int,int)\0"
    "dpiChanged(int)\0int\0_current_property\0"
    "QString\0_current_property_description\0"
};

void CuteReport::RendererInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RendererInterface *_t = static_cast<RendererInterface *>(_o);
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->done((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->cancelled(); break;
        case 3: _t->processingPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->dpiChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteReport::RendererInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::RendererInterface::staticMetaObject = {
    { &ReportPluginInterface::staticMetaObject, qt_meta_stringdata_CuteReport__RendererInterface,
      qt_meta_data_CuteReport__RendererInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::RendererInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::RendererInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::RendererInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__RendererInterface))
        return static_cast<void*>(const_cast< RendererInterface*>(this));
    if (!strcmp(_clname, "CuteReport.ReportPluginInterface/1.0"))
        return static_cast< CuteReport::ReportPluginInterface*>(const_cast< RendererInterface*>(this));
    return ReportPluginInterface::qt_metacast(_clname);
}

int CuteReport::RendererInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReportPluginInterface::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< int*>(_v) = _currentProperty(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _current_property_description(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _setCurrentProperty(*reinterpret_cast< int*>(_v)); break;
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
void CuteReport::RendererInterface::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CuteReport::RendererInterface::done(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CuteReport::RendererInterface::cancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void CuteReport::RendererInterface::processingPage(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CuteReport::RendererInterface::dpiChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
static const uint qt_meta_data_CuteReport__RendererHelperInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_CuteReport__RendererHelperInterface[] = {
    "CuteReport::RendererHelperInterface\0"
};

void CuteReport::RendererHelperInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CuteReport::RendererHelperInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::RendererHelperInterface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CuteReport__RendererHelperInterface,
      qt_meta_data_CuteReport__RendererHelperInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::RendererHelperInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::RendererHelperInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::RendererHelperInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__RendererHelperInterface))
        return static_cast<void*>(const_cast< RendererHelperInterface*>(this));
    return QWidget::qt_metacast(_clname);
}

int CuteReport::RendererHelperInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
