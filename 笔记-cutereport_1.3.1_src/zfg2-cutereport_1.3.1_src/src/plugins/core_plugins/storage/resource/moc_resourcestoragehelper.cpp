/****************************************************************************
** Meta object code from reading C++ file 'resourcestoragehelper.h'
**
** Created: Wed Feb 8 11:29:43 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "resourcestoragehelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resourcestoragehelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ResourceStorageHelper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      30,   22,   22,   22, 0x0a,
      37,   22,   22,   22, 0x08,
      50,   48,   22,   22, 0x08,
      72,   22,   22,   22, 0x08,
      84,   22,   22,   22, 0x08,
      99,   22,   22,   22, 0x08,
     114,   22,   22,   22, 0x08,
     129,   22,   22,   22, 0x08,
     141,   22,   22,   22, 0x08,
     170,  156,   22,   22, 0x08,
     191,   22,   22,   22, 0x28,
     219,  205,   22,   22, 0x08,
     241,   22,   22,   22, 0x28,
     270,  256,   22,   22, 0x08,
     291,   22,   22,   22, 0x28,
     314,  305,   22,   22, 0x08,
     374,  305,   22,   22, 0x08,
     432,  305,   22,   22, 0x08,
     492,   22,   22,   22, 0x08,
     508,   22,   22,   22, 0x08,
     528,  523,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ResourceStorageHelper[] = {
    "ResourceStorageHelper\0\0load()\0save()\0"
    "slotSync()\0b\0itemTypeToggled(bool)\0"
    "addReport()\0deleteReport()\0addNewPrefix()\0"
    "deletePrefix()\0addObject()\0deleteObject()\0"
    "currentReport\0fillReports(QString)\0"
    "fillReports()\0currentPrefix\0"
    "fillPrefixes(QString)\0fillPrefixes()\0"
    "currentObject\0fillObjects(QString)\0"
    "fillObjects()\0current,\0"
    "slotCurrentPrefixChanged(QListWidgetItem*,QListWidgetItem*)\0"
    "slotCurrentItemChanged(QListWidgetItem*,QListWidgetItem*)\0"
    "slotCurrentReportChanged(QListWidgetItem*,QListWidgetItem*)\0"
    "updatePreview()\0clearPreview()\0item\0"
    "currentPrefixChanged(QListWidgetItem*)\0"
};

void ResourceStorageHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ResourceStorageHelper *_t = static_cast<ResourceStorageHelper *>(_o);
        switch (_id) {
        case 0: _t->load(); break;
        case 1: _t->save(); break;
        case 2: _t->slotSync(); break;
        case 3: _t->itemTypeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->addReport(); break;
        case 5: _t->deleteReport(); break;
        case 6: _t->addNewPrefix(); break;
        case 7: _t->deletePrefix(); break;
        case 8: _t->addObject(); break;
        case 9: _t->deleteObject(); break;
        case 10: _t->fillReports((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->fillReports(); break;
        case 12: _t->fillPrefixes((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->fillPrefixes(); break;
        case 14: _t->fillObjects((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->fillObjects(); break;
        case 16: _t->slotCurrentPrefixChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 17: _t->slotCurrentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 18: _t->slotCurrentReportChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 19: _t->updatePreview(); break;
        case 20: _t->clearPreview(); break;
        case 21: _t->currentPrefixChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ResourceStorageHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ResourceStorageHelper::staticMetaObject = {
    { &CuteReport::StorageHelperInterface::staticMetaObject, qt_meta_stringdata_ResourceStorageHelper,
      qt_meta_data_ResourceStorageHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ResourceStorageHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ResourceStorageHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ResourceStorageHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ResourceStorageHelper))
        return static_cast<void*>(const_cast< ResourceStorageHelper*>(this));
    typedef CuteReport::StorageHelperInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int ResourceStorageHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::StorageHelperInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
