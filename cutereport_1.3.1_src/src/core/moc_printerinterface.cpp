/****************************************************************************
** Meta object code from reading C++ file 'printerinterface.h'
**
** Created: Sun Jan 22 16:20:27 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "printerinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printerinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReport__PrinterInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,

 // properties: name, type, flags
      66,   58, 0x0a495103,
      82,   78, 0x02084003,
     100,   58, 0x0a084001,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

static const char qt_meta_stringdata_CuteReport__PrinterInterface[] = {
    "CuteReport::PrinterInterface\0\0"
    "printerNameChanged(QString)\0QString\0"
    "printerName\0int\0_current_property\0"
    "_current_property_description\0"
};

void CuteReport::PrinterInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrinterInterface *_t = static_cast<PrinterInterface *>(_o);
        switch (_id) {
        case 0: _t->printerNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteReport::PrinterInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::PrinterInterface::staticMetaObject = {
    { &ReportPluginInterface::staticMetaObject, qt_meta_stringdata_CuteReport__PrinterInterface,
      qt_meta_data_CuteReport__PrinterInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::PrinterInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::PrinterInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::PrinterInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__PrinterInterface))
        return static_cast<void*>(const_cast< PrinterInterface*>(this));
    if (!strcmp(_clname, "CuteReport.ReportPluginInterface/1.0"))
        return static_cast< CuteReport::ReportPluginInterface*>(const_cast< PrinterInterface*>(this));
    return ReportPluginInterface::qt_metacast(_clname);
}

int CuteReport::PrinterInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReportPluginInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = printerName(); break;
        case 1: *reinterpret_cast< int*>(_v) = _currentProperty(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _current_property_description(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPrinterName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _setCurrentProperty(*reinterpret_cast< int*>(_v)); break;
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
void CuteReport::PrinterInterface::printerNameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_CuteReport__PrinterHelperInterface[] = {

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

static const char qt_meta_stringdata_CuteReport__PrinterHelperInterface[] = {
    "CuteReport::PrinterHelperInterface\0"
};

void CuteReport::PrinterHelperInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CuteReport::PrinterHelperInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::PrinterHelperInterface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CuteReport__PrinterHelperInterface,
      qt_meta_data_CuteReport__PrinterHelperInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::PrinterHelperInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::PrinterHelperInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::PrinterHelperInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__PrinterHelperInterface))
        return static_cast<void*>(const_cast< PrinterHelperInterface*>(this));
    return QWidget::qt_metacast(_clname);
}

int CuteReport::PrinterHelperInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
