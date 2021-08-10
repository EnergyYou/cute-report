/****************************************************************************
** Meta object code from reading C++ file 'reportinterface.h'
**
** Created: Wed Feb 8 11:23:13 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "reportinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reportinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReport__ReportInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
      12,  249, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      36,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x05,
      50,   28,   28,   28, 0x05,
      73,   28,   28,   28, 0x05,
     101,   28,   28,   28, 0x05,
     124,   28,   28,   28, 0x05,
     148,   28,   28,   28, 0x05,
     194,   28,   28,   28, 0x05,
     255,  242,   28,   28, 0x05,
     280,   28,   28,   28, 0x05,
     324,   28,   28,   28, 0x05,
     382,  370,   28,   28, 0x05,
     406,   28,   28,   28, 0x05,
     450,   28,   28,   28, 0x05,
     508,  496,   28,   28, 0x05,
     540,  532,   28,   28, 0x05,
     584,  532,   28,   28, 0x05,
     642,  630,   28,   28, 0x05,
     666,   28,   28,   28, 0x05,
     704,   28,   28,   28, 0x05,
     744,   28,   28,   28, 0x05,
     782,   28,   28,   28, 0x05,
     822,   28,   28,   28, 0x05,
     866,  864,   28,   28, 0x05,
     915,   28,   28,   28, 0x05,
     946,   28,   28,   28, 0x05,
     978,   28,   28,   28, 0x05,
    1009,   28,   28,   28, 0x05,
    1028,   28,   28,   28, 0x05,
    1051,   28,   28,   28, 0x05,
    1073,   28,   28,   28, 0x05,
    1083,   28,   28,   28, 0x05,
    1101,   28,   28,   28, 0x05,
    1130, 1121,   28,   28, 0x05,
    1168, 1163,   28,   28, 0x05,
    1199, 1163,   28,   28, 0x05,
    1230,   28,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
    1255,   28,   28,   28, 0x0a,
    1275, 1273,   28,   28, 0x0a,
    1290,   28,   28,   28, 0x2a,
    1301, 1273,   28,   28, 0x0a,
    1316,   28,   28,   28, 0x2a,
    1327,   28,   28,   28, 0x0a,
    1347, 1340,   28,   28, 0x08,
    1377, 1372,   28,   28, 0x08,
    1444, 1423,   28,   28, 0x08,
    1505,   28,   28,   28, 0x08,
    1532, 1372,   28,   28, 0x08,

 // properties: name, type, flags
    1589, 1581, 0x0a495103,
    1594, 1581, 0x0a495103,
    1601, 1581, 0x0a495103,
    1613, 1581, 0x0a494103,
    1624, 1620, 0x02094103,
    1632, 1581, 0x0a485103,
    1640, 1581, 0x0a495003,
    1655, 1581, 0x0a495003,
    1671, 1581, 0x0a495003,
    1699, 1686, 0x1c495103,
    1709, 1686, 0x1c494003,
    1720, 1686, 0x1c494003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,
       4,
      23,
      24,
      25,
      26,
      31,
      35,

       0        // eod
};

static const char qt_meta_stringdata_CuteReport__ReportInterface[] = {
    "CuteReport::ReportInterface\0\0"
    "nameChanged(QString)\0authorChanged(QString)\0"
    "descriptionChanged(QString)\0"
    "scriptChanged(QString)\0fileUrlChanged(QString)\0"
    "rendererAdded(CuteReport::RendererInterface*)\0"
    "rendererDeleted(CuteReport::RendererInterface*)\0"
    "rendererName\0rendererDeleted(QString)\0"
    "printerAdded(CuteReport::PrinterInterface*)\0"
    "printerDeleted(CuteReport::PrinterInterface*)\0"
    "printerName\0printerDeleted(QString)\0"
    "storageAdded(CuteReport::StorageInterface*)\0"
    "storageDeleted(CuteReport::StorageInterface*)\0"
    "storageName\0storageDeleted(QString)\0"
    "dataset\0datasetAdded(CuteReport::DatasetInterface*)\0"
    "datasetDeleted(CuteReport::DatasetInterface*)\0"
    "datasetName\0datasetDeleted(QString)\0"
    "formAdded(CuteReport::FormInterface*)\0"
    "formDeleted(CuteReport::FormInterface*)\0"
    "pageAdded(CuteReport::PageInterface*)\0"
    "pageDeleted(CuteReport::PageInterface*)\0"
    "itemAdded(CuteReport::BaseItemInterface*)\0"
    ",\0itemDeleted(CuteReport::BaseItemInterface*,bool)\0"
    "defaultStorageChanged(QString)\0"
    "defaultRendererChanged(QString)\0"
    "defaultPrinterChanged(QString)\0"
    "variablesChanged()\0dirtynessChanged(bool)\0"
    "validityChanged(bool)\0changed()\0"
    "propertyChanged()\0customDataChanged()\0"
    "dataName\0customDataByNameChanged(QString)\0"
    "path\0baseReportPathChanged(QString)\0"
    "baseReportNameChanged(QString)\0"
    "inheritanceDataChanged()\0updateVariables()\0"
    "b\0setDirty(bool)\0setDirty()\0setValid(bool)\0"
    "setValid()\0setInvalid()\0object\0"
    "childDestroyed(QObject*)\0item\0"
    "slotItemAdded(CuteReport::BaseItemInterface*)\0"
    "item,,directDeletion\0"
    "slotItemRemoved(CuteReport::BaseItemInterface*,QString,bool)\0"
    "slotScriptStringsChanged()\0"
    "slotNewItemAdded(CuteReport::BaseItemInterface*)\0"
    "QString\0name\0author\0description\0script\0"
    "int\0version\0fileUrl\0defaultStorage\0"
    "defaultRenderer\0defaultPrinter\0"
    "QVariantHash\0variables\0customData\0"
    "inheritanceData\0"
};

void CuteReport::ReportInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReportInterface *_t = static_cast<ReportInterface *>(_o);
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->authorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->descriptionChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->scriptChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->fileUrlChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->rendererAdded((*reinterpret_cast< CuteReport::RendererInterface*(*)>(_a[1]))); break;
        case 6: _t->rendererDeleted((*reinterpret_cast< CuteReport::RendererInterface*(*)>(_a[1]))); break;
        case 7: _t->rendererDeleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->printerAdded((*reinterpret_cast< CuteReport::PrinterInterface*(*)>(_a[1]))); break;
        case 9: _t->printerDeleted((*reinterpret_cast< CuteReport::PrinterInterface*(*)>(_a[1]))); break;
        case 10: _t->printerDeleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->storageAdded((*reinterpret_cast< CuteReport::StorageInterface*(*)>(_a[1]))); break;
        case 12: _t->storageDeleted((*reinterpret_cast< CuteReport::StorageInterface*(*)>(_a[1]))); break;
        case 13: _t->storageDeleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->datasetAdded((*reinterpret_cast< CuteReport::DatasetInterface*(*)>(_a[1]))); break;
        case 15: _t->datasetDeleted((*reinterpret_cast< CuteReport::DatasetInterface*(*)>(_a[1]))); break;
        case 16: _t->datasetDeleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->formAdded((*reinterpret_cast< CuteReport::FormInterface*(*)>(_a[1]))); break;
        case 18: _t->formDeleted((*reinterpret_cast< CuteReport::FormInterface*(*)>(_a[1]))); break;
        case 19: _t->pageAdded((*reinterpret_cast< CuteReport::PageInterface*(*)>(_a[1]))); break;
        case 20: _t->pageDeleted((*reinterpret_cast< CuteReport::PageInterface*(*)>(_a[1]))); break;
        case 21: _t->itemAdded((*reinterpret_cast< CuteReport::BaseItemInterface*(*)>(_a[1]))); break;
        case 22: _t->itemDeleted((*reinterpret_cast< CuteReport::BaseItemInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: _t->defaultStorageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->defaultRendererChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->defaultPrinterChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->variablesChanged(); break;
        case 27: _t->dirtynessChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->validityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->changed(); break;
        case 30: _t->propertyChanged(); break;
        case 31: _t->customDataChanged(); break;
        case 32: _t->customDataByNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: _t->baseReportPathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->baseReportNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->inheritanceDataChanged(); break;
        case 36: _t->updateVariables(); break;
        case 37: _t->setDirty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->setDirty(); break;
        case 39: _t->setValid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->setValid(); break;
        case 41: _t->setInvalid(); break;
        case 42: _t->childDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 43: _t->slotItemAdded((*reinterpret_cast< CuteReport::BaseItemInterface*(*)>(_a[1]))); break;
        case 44: _t->slotItemRemoved((*reinterpret_cast< CuteReport::BaseItemInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 45: _t->slotScriptStringsChanged(); break;
        case 46: _t->slotNewItemAdded((*reinterpret_cast< CuteReport::BaseItemInterface*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteReport::ReportInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::ReportInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CuteReport__ReportInterface,
      qt_meta_data_CuteReport__ReportInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::ReportInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::ReportInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::ReportInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__ReportInterface))
        return static_cast<void*>(const_cast< ReportInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int CuteReport::ReportInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = author(); break;
        case 2: *reinterpret_cast< QString*>(_v) = description(); break;
        case 3: *reinterpret_cast< QString*>(_v) = script(); break;
        case 4: *reinterpret_cast< int*>(_v) = version(); break;
        case 5: *reinterpret_cast< QString*>(_v) = fileUrl(); break;
        case 6: *reinterpret_cast< QString*>(_v) = defaultStorageName(); break;
        case 7: *reinterpret_cast< QString*>(_v) = defaultRendererName(); break;
        case 8: *reinterpret_cast< QString*>(_v) = defaultPrinterName(); break;
        case 9: *reinterpret_cast< QVariantHash*>(_v) = variables(); break;
        case 10: *reinterpret_cast< QVariantHash*>(_v) = customDataAll(); break;
        case 11: *reinterpret_cast< QVariantHash*>(_v) = inheritanceDataHash(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setAuthor(*reinterpret_cast< QString*>(_v)); break;
        case 2: setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 3: setScript(*reinterpret_cast< QString*>(_v)); break;
        case 4: setVersion(*reinterpret_cast< int*>(_v)); break;
        case 5: setFileUrl(*reinterpret_cast< QString*>(_v)); break;
        case 6: setDefaultStorageName(*reinterpret_cast< QString*>(_v)); break;
        case 7: setDefaultRendererName(*reinterpret_cast< QString*>(_v)); break;
        case 8: setDefaultPrinterName(*reinterpret_cast< QString*>(_v)); break;
        case 9: setVariables(*reinterpret_cast< QVariantHash*>(_v)); break;
        case 10: setCustomDataAll(*reinterpret_cast< QVariantHash*>(_v)); break;
        case 11: setInheritanceDataHash(*reinterpret_cast< QVariantHash*>(_v)); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CuteReport::ReportInterface::nameChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CuteReport::ReportInterface::authorChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CuteReport::ReportInterface::descriptionChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CuteReport::ReportInterface::scriptChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CuteReport::ReportInterface::fileUrlChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CuteReport::ReportInterface::rendererAdded(CuteReport::RendererInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CuteReport::ReportInterface::rendererDeleted(CuteReport::RendererInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CuteReport::ReportInterface::rendererDeleted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CuteReport::ReportInterface::printerAdded(CuteReport::PrinterInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CuteReport::ReportInterface::printerDeleted(CuteReport::PrinterInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CuteReport::ReportInterface::printerDeleted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void CuteReport::ReportInterface::storageAdded(CuteReport::StorageInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CuteReport::ReportInterface::storageDeleted(CuteReport::StorageInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void CuteReport::ReportInterface::storageDeleted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void CuteReport::ReportInterface::datasetAdded(CuteReport::DatasetInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void CuteReport::ReportInterface::datasetDeleted(CuteReport::DatasetInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void CuteReport::ReportInterface::datasetDeleted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void CuteReport::ReportInterface::formAdded(CuteReport::FormInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void CuteReport::ReportInterface::formDeleted(CuteReport::FormInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void CuteReport::ReportInterface::pageAdded(CuteReport::PageInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void CuteReport::ReportInterface::pageDeleted(CuteReport::PageInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void CuteReport::ReportInterface::itemAdded(CuteReport::BaseItemInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void CuteReport::ReportInterface::itemDeleted(CuteReport::BaseItemInterface * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void CuteReport::ReportInterface::defaultStorageChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void CuteReport::ReportInterface::defaultRendererChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void CuteReport::ReportInterface::defaultPrinterChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void CuteReport::ReportInterface::variablesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, 0);
}

// SIGNAL 27
void CuteReport::ReportInterface::dirtynessChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void CuteReport::ReportInterface::validityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void CuteReport::ReportInterface::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 29, 0);
}

// SIGNAL 30
void CuteReport::ReportInterface::propertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, 0);
}

// SIGNAL 31
void CuteReport::ReportInterface::customDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, 0);
}

// SIGNAL 32
void CuteReport::ReportInterface::customDataByNameChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void CuteReport::ReportInterface::baseReportPathChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void CuteReport::ReportInterface::baseReportNameChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void CuteReport::ReportInterface::inheritanceDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, 0);
}
QT_END_MOC_NAMESPACE
