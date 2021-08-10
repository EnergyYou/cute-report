/****************************************************************************
** Meta object code from reading C++ file 'designercore.h'
**
** Created: Sun Jan 22 17:27:59 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "designercore.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'designercore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteDesigner__Core[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       2,  214, // enums/sets
       0,    0, // constructors
       0,       // flags
      28,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      39,   19,   19,   19, 0x05,
      85,   19,   19,   19, 0x05,
     135,   19,   19,   19, 0x05,
     184,   19,   19,   19, 0x05,
     227,   19,   19,   19, 0x05,
     269,   19,   19,   19, 0x05,
     315,   19,   19,   19, 0x05,
     373,  360,   19,   19, 0x05,
     434,  427,   19,   19, 0x05,
     468,  464,   19,   19, 0x05,
     502,  495,   19,   19, 0x05,
     549,  495,   19,   19, 0x05,
     597,  495,   19,   19, 0x05,
     644,   19,   19,   19, 0x05,
     691,   19,   19,   19, 0x05,
     710,   19,   19,   19, 0x05,
     759,   19,   19,   19, 0x05,
     807,   19,   19,   19, 0x05,
     859,   19,   19,   19, 0x05,
     910,   19,   19,   19, 0x05,
     921,  464,   19,   19, 0x05,
     947,  495,   19,   19, 0x05,
    1003,  998,   19,   19, 0x05,
    1050,  998,   19,   19, 0x05,
    1103,   19,   19,   19, 0x05,
    1157, 1150,   19,   19, 0x05,
    1182,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
    1196,   19, 1191,   19, 0x0a,
    1206,   19,   19,   19, 0x0a,
    1215,   19,   19,   19, 0x0a,
    1236, 1230,   19,   19, 0x0a,
    1267, 1256,   19,   19, 0x0a,
    1311,   19,   19,   19, 0x08,
    1327, 1322,   19,   19, 0x08,
    1377,   19,   19,   19, 0x08,
    1447, 1406,   19,   19, 0x08,
    1512, 1494,   19,   19, 0x08,
    1579, 1561,   19,   19, 0x08,
    1642,   19,   19,   19, 0x08,

 // enums: name, flags, count, data
    1658, 0x1,    6,  222,
    1668, 0x1,    6,  234,

 // enum data: key, value
    1679, uint(CuteDesigner::Core::ActionUndo),
    1690, uint(CuteDesigner::Core::ActionRedo),
    1701, uint(CuteDesigner::Core::ActionCut),
    1711, uint(CuteDesigner::Core::ActionCopy),
    1722, uint(CuteDesigner::Core::ActionPaste),
    1734, uint(CuteDesigner::Core::ActionDelete),
    1679, uint(CuteDesigner::Core::ActionUndo),
    1690, uint(CuteDesigner::Core::ActionRedo),
    1701, uint(CuteDesigner::Core::ActionCut),
    1711, uint(CuteDesigner::Core::ActionCopy),
    1722, uint(CuteDesigner::Core::ActionPaste),
    1734, uint(CuteDesigner::Core::ActionDelete),

       0        // eod
};

static const char qt_meta_stringdata_CuteDesigner__Core[] = {
    "CuteDesigner::Core\0\0newReport_before()\0"
    "newReport_after(CuteReport::ReportInterface*)\0"
    "deleteReport_before(CuteReport::ReportInterface*)\0"
    "deleteReport_after(CuteReport::ReportInterface*)\0"
    "newPage_before(CuteReport::PageInterface*)\0"
    "newPage_after(CuteReport::PageInterface*)\0"
    "deletePage_before(CuteReport::PageInterface*)\0"
    "deletePage_after(CuteReport::PageInterface*)\0"
    "item,pagePos\0"
    "newItem_after(CuteReport::BaseItemInterface*,QPointF)\0"
    "object\0activeObjectChanged(QObject*)\0"
    "url\0loadReport_before(QString)\0report\0"
    "loadReport_after(CuteReport::ReportInterface*)\0"
    "saveReport_before(CuteReport::ReportInterface*)\0"
    "saveReport_after(CuteReport::ReportInterface*)\0"
    "newPageActions(QList<CuteReport::PageAction*>)\0"
    "renderingStarted()\0"
    "newDataset_before(CuteReport::DatasetInterface*)\0"
    "newDataset_after(CuteReport::DatasetInterface*)\0"
    "deleteDataset_before(CuteReport::DatasetInterface*)\0"
    "deleteDataset_after(CuteReport::DatasetInterface*)\0"
    "initDone()\0requestForReport(QString)\0"
    "currentReportChanged(CuteReport::ReportInterface*)\0"
    "page\0currentPageChanged(CuteReport::PageInterface*)\0"
    "currentDatasetChanged(CuteReport::DatasetInterface*)\0"
    "currentFormChanged(CuteReport::FormInterface*)\0"
    "cancel\0appIsAboutToClose(bool*)\0"
    "closed()\0bool\0newPage()\0render()\0"
    "stopRenderer()\0index\0moduleSwitched(int)\0"
    "type,value\0showMetric(CuteReport::MetricType,QVariant)\0"
    "slotInit()\0item\0"
    "_afterItemRemoved(CuteReport::BaseItemInterface*)\0"
    "slotMainWindowCloseRequest()\0"
    "logLevel,module,shortMessage,fullMessage\0"
    "propertyEditorLog(int,QString,QString,QString)\0"
    "report,successful\0"
    "_rendererDone(CuteReport::ReportInterface*,bool)\0"
    "actionType,action\0"
    "slotStdActionTriggered(CuteDesigner::Core::StdAction,QAction*)\0"
    "reinitOptions()\0StdAction\0StdActions\0"
    "ActionUndo\0ActionRedo\0ActionCut\0"
    "ActionCopy\0ActionPaste\0ActionDelete\0"
};

void CuteDesigner::Core::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Core *_t = static_cast<Core *>(_o);
        switch (_id) {
        case 0: _t->newReport_before(); break;
        case 1: _t->newReport_after((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 2: _t->deleteReport_before((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 3: _t->deleteReport_after((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 4: _t->newPage_before((*reinterpret_cast< CuteReport::PageInterface*(*)>(_a[1]))); break;
        case 5: _t->newPage_after((*reinterpret_cast< CuteReport::PageInterface*(*)>(_a[1]))); break;
        case 6: _t->deletePage_before((*reinterpret_cast< CuteReport::PageInterface*(*)>(_a[1]))); break;
        case 7: _t->deletePage_after((*reinterpret_cast< CuteReport::PageInterface*(*)>(_a[1]))); break;
        case 8: _t->newItem_after((*reinterpret_cast< CuteReport::BaseItemInterface*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 9: _t->activeObjectChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 10: _t->loadReport_before((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->loadReport_after((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 12: _t->saveReport_before((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 13: _t->saveReport_after((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 14: _t->newPageActions((*reinterpret_cast< QList<CuteReport::PageAction*>(*)>(_a[1]))); break;
        case 15: _t->renderingStarted(); break;
        case 16: _t->newDataset_before((*reinterpret_cast< CuteReport::DatasetInterface*(*)>(_a[1]))); break;
        case 17: _t->newDataset_after((*reinterpret_cast< CuteReport::DatasetInterface*(*)>(_a[1]))); break;
        case 18: _t->deleteDataset_before((*reinterpret_cast< CuteReport::DatasetInterface*(*)>(_a[1]))); break;
        case 19: _t->deleteDataset_after((*reinterpret_cast< CuteReport::DatasetInterface*(*)>(_a[1]))); break;
        case 20: _t->initDone(); break;
        case 21: _t->requestForReport((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->currentReportChanged((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 23: _t->currentPageChanged((*reinterpret_cast< CuteReport::PageInterface*(*)>(_a[1]))); break;
        case 24: _t->currentDatasetChanged((*reinterpret_cast< CuteReport::DatasetInterface*(*)>(_a[1]))); break;
        case 25: _t->currentFormChanged((*reinterpret_cast< CuteReport::FormInterface*(*)>(_a[1]))); break;
        case 26: _t->appIsAboutToClose((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 27: _t->closed(); break;
        case 28: { bool _r = _t->newPage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: _t->render(); break;
        case 30: _t->stopRenderer(); break;
        case 31: _t->moduleSwitched((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->showMetric((*reinterpret_cast< CuteReport::MetricType(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 33: _t->slotInit(); break;
        case 34: _t->_afterItemRemoved((*reinterpret_cast< CuteReport::BaseItemInterface*(*)>(_a[1]))); break;
        case 35: _t->slotMainWindowCloseRequest(); break;
        case 36: _t->propertyEditorLog((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 37: _t->_rendererDone((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 38: _t->slotStdActionTriggered((*reinterpret_cast< CuteDesigner::Core::StdAction(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 39: _t->reinitOptions(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteDesigner::Core::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteDesigner::Core::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CuteDesigner__Core,
      qt_meta_data_CuteDesigner__Core, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteDesigner::Core::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteDesigner::Core::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteDesigner::Core::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteDesigner__Core))
        return static_cast<void*>(const_cast< Core*>(this));
    return QObject::qt_metacast(_clname);
}

int CuteDesigner::Core::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void CuteDesigner::Core::newReport_before()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CuteDesigner::Core::newReport_after(CuteReport::ReportInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CuteDesigner::Core::deleteReport_before(CuteReport::ReportInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CuteDesigner::Core::deleteReport_after(CuteReport::ReportInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CuteDesigner::Core::newPage_before(CuteReport::PageInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CuteDesigner::Core::newPage_after(CuteReport::PageInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CuteDesigner::Core::deletePage_before(CuteReport::PageInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CuteDesigner::Core::deletePage_after(CuteReport::PageInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CuteDesigner::Core::newItem_after(CuteReport::BaseItemInterface * _t1, QPointF _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CuteDesigner::Core::activeObjectChanged(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CuteDesigner::Core::loadReport_before(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void CuteDesigner::Core::loadReport_after(CuteReport::ReportInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CuteDesigner::Core::saveReport_before(CuteReport::ReportInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void CuteDesigner::Core::saveReport_after(CuteReport::ReportInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void CuteDesigner::Core::newPageActions(QList<CuteReport::PageAction*> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void CuteDesigner::Core::renderingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}

// SIGNAL 16
void CuteDesigner::Core::newDataset_before(CuteReport::DatasetInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void CuteDesigner::Core::newDataset_after(CuteReport::DatasetInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void CuteDesigner::Core::deleteDataset_before(CuteReport::DatasetInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void CuteDesigner::Core::deleteDataset_after(CuteReport::DatasetInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void CuteDesigner::Core::initDone()
{
    QMetaObject::activate(this, &staticMetaObject, 20, 0);
}

// SIGNAL 21
void CuteDesigner::Core::requestForReport(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void CuteDesigner::Core::currentReportChanged(CuteReport::ReportInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void CuteDesigner::Core::currentPageChanged(CuteReport::PageInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void CuteDesigner::Core::currentDatasetChanged(CuteReport::DatasetInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void CuteDesigner::Core::currentFormChanged(CuteReport::FormInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void CuteDesigner::Core::appIsAboutToClose(bool * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void CuteDesigner::Core::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 27, 0);
}
QT_END_MOC_NAMESPACE
