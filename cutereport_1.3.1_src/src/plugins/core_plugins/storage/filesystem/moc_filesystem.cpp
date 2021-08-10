/****************************************************************************
** Meta object code from reading C++ file 'filesystem.h'
**
** Created: Sun Jan 22 17:33:00 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filesystem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StorageFileSystem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      51,   18,   18,   18, 0x05,
      80,   18,   18,   18, 0x05,

 // properties: name, type, flags
     114,  106, 0x0a495103,
     135,  130, 0x01495103,
     148,  130, 0x01495103,

 // properties: notify_signal_id
       0,
       2,
       1,

       0        // eod
};

static const char qt_meta_stringdata_StorageFileSystem[] = {
    "StorageFileSystem\0\0objectsRootPathChanged(QString)\0"
    "askForOverwriteChanged(bool)\0"
    "rootRelativeChanged(bool)\0QString\0"
    "objectsRootPath\0bool\0rootRelative\0"
    "askForOverwrite\0"
};

void StorageFileSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StorageFileSystem *_t = static_cast<StorageFileSystem *>(_o);
        switch (_id) {
        case 0: _t->objectsRootPathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->askForOverwriteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->rootRelativeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StorageFileSystem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StorageFileSystem::staticMetaObject = {
    { &CuteReport::StorageInterface::staticMetaObject, qt_meta_stringdata_StorageFileSystem,
      qt_meta_data_StorageFileSystem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StorageFileSystem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StorageFileSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StorageFileSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StorageFileSystem))
        return static_cast<void*>(const_cast< StorageFileSystem*>(this));
    if (!strcmp(_clname, "CuteReport.StorageInterface/1.0"))
        return static_cast< CuteReport::StorageInterface*>(const_cast< StorageFileSystem*>(this));
    typedef CuteReport::StorageInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int StorageFileSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::StorageInterface QMocSuperClass;
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
        case 0: *reinterpret_cast< QString*>(_v) = objectsRootPath(); break;
        case 1: *reinterpret_cast< bool*>(_v) = rootRelative(); break;
        case 2: *reinterpret_cast< bool*>(_v) = askForOverwrite(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setObjectsRootPath(*reinterpret_cast< QString*>(_v)); break;
        case 1: setRootRelative(*reinterpret_cast< bool*>(_v)); break;
        case 2: setAskForOverwrite(*reinterpret_cast< bool*>(_v)); break;
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
void StorageFileSystem::objectsRootPathChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StorageFileSystem::askForOverwriteChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StorageFileSystem::rootRelativeChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
