/****************************************************************************
** Meta object code from reading C++ file 'resource.h'
**
** Created: Wed Feb 8 11:29:41 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "resource.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StorageResource[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      34,   16,   16,   16, 0x05,
      51,   16,   16,   16, 0x05,
      88,   77,   16,   16, 0x05,
     109,   77,   16,   16, 0x05,
     143,  132,   16,   16, 0x05,
     164,  132,   16,   16, 0x05,

 // properties: name, type, flags
     195,  187, 0x0a495103,
     218,  205, 0x1c494103,
     226,  205, 0x1c494103,

 // properties: notify_signal_id
       2,
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_StorageResource[] = {
    "StorageResource\0\0objectsChanged()\0"
    "reportsChanged()\0localPathChanged(QString)\0"
    "objectPath\0objectAdded(QString)\0"
    "objectRemoved(QString)\0reportName\0"
    "reportAdded(QString)\0reportRemoved(QString)\0"
    "QString\0localPath\0QVariantHash\0objects\0"
    "reports\0"
};

void StorageResource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StorageResource *_t = static_cast<StorageResource *>(_o);
        switch (_id) {
        case 0: _t->objectsChanged(); break;
        case 1: _t->reportsChanged(); break;
        case 2: _t->localPathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->objectAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->objectRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->reportAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->reportRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StorageResource::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StorageResource::staticMetaObject = {
    { &CuteReport::StorageInterface::staticMetaObject, qt_meta_stringdata_StorageResource,
      qt_meta_data_StorageResource, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StorageResource::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StorageResource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StorageResource::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StorageResource))
        return static_cast<void*>(const_cast< StorageResource*>(this));
    if (!strcmp(_clname, "CuteReport.StorageInterface/1.0"))
        return static_cast< CuteReport::StorageInterface*>(const_cast< StorageResource*>(this));
    typedef CuteReport::StorageInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int StorageResource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::StorageInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = localPath(); break;
        case 1: *reinterpret_cast< QVariantHash*>(_v) = objects(); break;
        case 2: *reinterpret_cast< QVariantHash*>(_v) = reports(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLocalPath(*reinterpret_cast< QString*>(_v)); break;
        case 1: setObjects(*reinterpret_cast< QVariantHash*>(_v)); break;
        case 2: setReports(*reinterpret_cast< QVariantHash*>(_v)); break;
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
void StorageResource::objectsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void StorageResource::reportsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void StorageResource::localPathChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StorageResource::objectAdded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StorageResource::objectRemoved(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StorageResource::reportAdded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StorageResource::reportRemoved(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
