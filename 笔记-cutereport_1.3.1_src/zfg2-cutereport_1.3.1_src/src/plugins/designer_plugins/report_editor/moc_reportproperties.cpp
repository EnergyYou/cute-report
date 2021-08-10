/****************************************************************************
** Meta object code from reading C++ file 'reportproperties.h'
**
** Created: Wed Feb 8 11:32:54 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "reportproperties.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reportproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PropertyEditor__ReportProperties[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x05,
      97,   92,   33,   33, 0x05,
     130,   92,   33,   33, 0x05,
     164,   92,   33,   33, 0x05,
     198,   33,   33,   33, 0x05,
     258,   92,   33,   33, 0x05,
     292,   92,   33,   33, 0x05,
     327,   92,   33,   33, 0x05,
     362,   33,   33,   33, 0x05,
     420,   92,   33,   33, 0x05,
     453,   92,   33,   33, 0x05,
     487,   92,   33,   33, 0x05,
     521,   33,   33,   33, 0x05,
     546,   33,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
     574,   33,   33,   33, 0x0a,
     591,  584,   33,   33, 0x0a,
     635,   33,   33,   33, 0x0a,
     658,  654,   33,   33, 0x08,
     699,  688,   33,   33, 0x08,
     738,  725,   33,   33, 0x08,
     784,  766,   33,   33, 0x08,
     825,  817,   33,   33, 0x08,
     888,  876,   33,   33, 0x08,
     920,  876,   33,   33, 0x08,
     957,  950,   33,   33, 0x08,
    1023, 1010,   33,   33, 0x08,
    1067, 1056,   33,   33, 0x08,
    1098,  950,   33,   33, 0x08,
    1161, 1149,   33,   33, 0x08,
    1193, 1056,   33,   33, 0x08,
    1223,   33,   33,   33, 0x08,
    1246,   33,   33,   33, 0x08,
    1268,   33,   33,   33, 0x08,
    1291,   33,   33,   33, 0x08,
    1311,   33,   33,   33, 0x08,
    1333,   33,   33,   33, 0x08,
    1349,   33,   33,   33, 0x08,
    1372,   33,   33,   33, 0x08,
    1396,   33,   33,   33, 0x08,
    1417,   33,   33,   33, 0x08,
    1440,   33,   33,   33, 0x08,
    1457,   33,   33,   33, 0x08,
    1479,   33,   33,   33, 0x08,
    1502,   33,   33,   33, 0x08,
    1522,   33,   33,   33, 0x08,
    1544,   33,   33,   33, 0x08,
    1577, 1560,   33,   33, 0x08,
    1637, 1560,   33,   33, 0x08,
    1697, 1560,   33,   33, 0x08,
    1756,   92,   33,   33, 0x08,
    1788,   92,   33,   33, 0x08,
    1821,   92,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PropertyEditor__ReportProperties[] = {
    "PropertyEditor::ReportProperties\0\0"
    "requestForNewStorage(const CuteReport::StorageInterface*)\0"
    "name\0requestForDeleteStorage(QString)\0"
    "requestForDefaultStorage(QString)\0"
    "requestForNewStorageName(QString)\0"
    "requestForNewRenderer(const CuteReport::RendererInterface*)\0"
    "requestForDeleteRenderer(QString)\0"
    "requestForDefaultRenderer(QString)\0"
    "requestForNewRendererName(QString)\0"
    "requestForNewPrinter(const CuteReport::PrinterInterface*)\0"
    "requestForDeletePrinter(QString)\0"
    "requestForDefaultPrinter(QString)\0"
    "requestForNewPrinterName(QString)\0"
    "requestToInheritReport()\0"
    "requestToDetachBaseReport()\0saveAll()\0"
    "report\0connectReport(CuteReport::ReportInterface*)\0"
    "disconnectReport()\0url\0"
    "setGUIReportFilePath(QString)\0reportName\0"
    "setGUIReportName(QString)\0reportAuthor\0"
    "setGUIReportAuthor(QString)\0"
    "reportDescription\0setGUIReportDescription(QString)\0"
    "storage\0addGUIReportStorage(CuteReport::StorageInterface*)\0"
    "storageName\0removeGUIReportStorage(QString)\0"
    "setGUIDefaultStorage(QString)\0object\0"
    "addGUIReportRenderer(CuteReport::RendererInterface*)\0"
    "rendererName\0removeGUIReportRenderer(QString)\0"
    "objectName\0setGUIDefaultRenderer(QString)\0"
    "addGUIReportPrinter(CuteReport::PrinterInterface*)\0"
    "printerName\0removeGUIReportPrinter(QString)\0"
    "setGUIDefaultPrinter(QString)\0"
    "updateGUIInheritance()\0setNewStorageModule()\0"
    "deleteCurrentStorage()\0setDefaultStorage()\0"
    "clearDefaultStorage()\0renameStorage()\0"
    "setNewRendererModule()\0deleteCurrentRenderer()\0"
    "setDefaultRenderer()\0clearDefaultRenderer()\0"
    "renameRenderer()\0setNewPrinterModule()\0"
    "deleteCurrentPrinter()\0setDefaultPrinter()\0"
    "clearDefaultPrinter()\0renamePrinter()\0"
    "current,previous\0"
    "storagesListIndexChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "rendererListIndexChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "printerListIndexChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "slotStorageNameChanged(QString)\0"
    "slotRendererNameChanged(QString)\0"
    "slotPrinterNameChanged(QString)\0"
};

void PropertyEditor::ReportProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReportProperties *_t = static_cast<ReportProperties *>(_o);
        switch (_id) {
        case 0: _t->requestForNewStorage((*reinterpret_cast< const CuteReport::StorageInterface*(*)>(_a[1]))); break;
        case 1: _t->requestForDeleteStorage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->requestForDefaultStorage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->requestForNewStorageName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->requestForNewRenderer((*reinterpret_cast< const CuteReport::RendererInterface*(*)>(_a[1]))); break;
        case 5: _t->requestForDeleteRenderer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->requestForDefaultRenderer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->requestForNewRendererName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->requestForNewPrinter((*reinterpret_cast< const CuteReport::PrinterInterface*(*)>(_a[1]))); break;
        case 9: _t->requestForDeletePrinter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->requestForDefaultPrinter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->requestForNewPrinterName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->requestToInheritReport(); break;
        case 13: _t->requestToDetachBaseReport(); break;
        case 14: _t->saveAll(); break;
        case 15: _t->connectReport((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 16: _t->disconnectReport(); break;
        case 17: _t->setGUIReportFilePath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->setGUIReportName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->setGUIReportAuthor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->setGUIReportDescription((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->addGUIReportStorage((*reinterpret_cast< CuteReport::StorageInterface*(*)>(_a[1]))); break;
        case 22: _t->removeGUIReportStorage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->setGUIDefaultStorage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->addGUIReportRenderer((*reinterpret_cast< CuteReport::RendererInterface*(*)>(_a[1]))); break;
        case 25: _t->removeGUIReportRenderer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->setGUIDefaultRenderer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->addGUIReportPrinter((*reinterpret_cast< CuteReport::PrinterInterface*(*)>(_a[1]))); break;
        case 28: _t->removeGUIReportPrinter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->setGUIDefaultPrinter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->updateGUIInheritance(); break;
        case 31: _t->setNewStorageModule(); break;
        case 32: _t->deleteCurrentStorage(); break;
        case 33: _t->setDefaultStorage(); break;
        case 34: _t->clearDefaultStorage(); break;
        case 35: _t->renameStorage(); break;
        case 36: _t->setNewRendererModule(); break;
        case 37: _t->deleteCurrentRenderer(); break;
        case 38: _t->setDefaultRenderer(); break;
        case 39: _t->clearDefaultRenderer(); break;
        case 40: _t->renameRenderer(); break;
        case 41: _t->setNewPrinterModule(); break;
        case 42: _t->deleteCurrentPrinter(); break;
        case 43: _t->setDefaultPrinter(); break;
        case 44: _t->clearDefaultPrinter(); break;
        case 45: _t->renamePrinter(); break;
        case 46: _t->storagesListIndexChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 47: _t->rendererListIndexChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 48: _t->printerListIndexChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 49: _t->slotStorageNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 50: _t->slotRendererNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 51: _t->slotPrinterNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PropertyEditor::ReportProperties::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PropertyEditor::ReportProperties::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PropertyEditor__ReportProperties,
      qt_meta_data_PropertyEditor__ReportProperties, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PropertyEditor::ReportProperties::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PropertyEditor::ReportProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PropertyEditor::ReportProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyEditor__ReportProperties))
        return static_cast<void*>(const_cast< ReportProperties*>(this));
    return QWidget::qt_metacast(_clname);
}

int PropertyEditor::ReportProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    }
    return _id;
}

// SIGNAL 0
void PropertyEditor::ReportProperties::requestForNewStorage(const CuteReport::StorageInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PropertyEditor::ReportProperties::requestForDeleteStorage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PropertyEditor::ReportProperties::requestForDefaultStorage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PropertyEditor::ReportProperties::requestForNewStorageName(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PropertyEditor::ReportProperties::requestForNewRenderer(const CuteReport::RendererInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PropertyEditor::ReportProperties::requestForDeleteRenderer(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PropertyEditor::ReportProperties::requestForDefaultRenderer(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PropertyEditor::ReportProperties::requestForNewRendererName(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PropertyEditor::ReportProperties::requestForNewPrinter(const CuteReport::PrinterInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PropertyEditor::ReportProperties::requestForDeletePrinter(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PropertyEditor::ReportProperties::requestForDefaultPrinter(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void PropertyEditor::ReportProperties::requestForNewPrinterName(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void PropertyEditor::ReportProperties::requestToInheritReport()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void PropertyEditor::ReportProperties::requestToDetachBaseReport()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}
QT_END_MOC_NAMESPACE
