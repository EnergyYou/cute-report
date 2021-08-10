/****************************************************************************
** Meta object code from reading C++ file 'reporteditor.h'
**
** Created: Wed Feb 8 11:32:52 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "reporteditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reporteditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ReportEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   14,   13,   13, 0x08,
      44,   13,   13,   13, 0x08,
      69,   13,   13,   13, 0x08,
      95,   13,   13,   13, 0x08,
     122,   13,   13,   13, 0x08,
     149,   13,   13,   13, 0x08,
     178,   13,   13,   13, 0x08,
     213,  206,   13,   13, 0x08,
     280,  274,   13,   13, 0x08,
     315,  307,   13,   13, 0x08,
     389,  377,   13,   13, 0x08,
     426,  377,   13,   13, 0x08,
     470,  377,   13,   13, 0x08,
     517,  508,   13,   13, 0x08,
     586,  581,   13,   13, 0x08,
     624,  581,   13,   13, 0x08,
     669,  581,   13,   13, 0x08,
     716,  708,   13,   13, 0x08,
     778,  581,   13,   13, 0x08,
     815,  581,   13,   13, 0x08,
     859,  581,   13,   13, 0x08,
     897,   13,   13,   13, 0x08,
     926,   13,   13,   13, 0x08,
     955,  206,   13,   13, 0x08,
     991,  581,   13,   13, 0x08,
    1037, 1029,   13,   13, 0x08,
    1064,  206,   13,   13, 0x08,
    1116,   13,   13,   13, 0x08,
    1139,   13,   13,   13, 0x08,
    1169, 1162,   13,   13, 0x08,
    1198,   13,   13,   13, 0x08,
    1219,  206,   13,   13, 0x08,
    1277, 1269,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ReportEditor[] = {
    "ReportEditor\0\0objectUrl\0loadReport(QString)\0"
    "slotRequestForTemplate()\0"
    "slotRequestForNewReport()\0"
    "slotRequestForOpenReport()\0"
    "slotRequestForSaveReport()\0"
    "slotRequestForSaveReportAs()\0"
    "slotRequestForCloseReport()\0report\0"
    "slotCurrentReportChangedByCore(CuteReport::ReportInterface*)\0"
    "index\0slotCurrentTabChanged(int)\0"
    "storage\0"
    "slotRequestForNewStorage(const CuteReport::StorageInterface*)\0"
    "storageName\0slotRequestForDeleteStorage(QString)\0"
    "slotRequestForChangeDefaultStorage(QString)\0"
    "slotRequestForNewStorageName(QString)\0"
    "renderer\0"
    "slotRequestForNewRenderer(const CuteReport::RendererInterface*)\0"
    "name\0slotRequestForDeleteRenderer(QString)\0"
    "slotRequestForChangeDefaultRenderer(QString)\0"
    "slotRequestForNewRendererName(QString)\0"
    "printer\0"
    "slotRequestForNewPrinter(const CuteReport::PrinterInterface*)\0"
    "slotRequestForDeletePrinter(QString)\0"
    "slotRequestForChangeDefaultPrinter(QString)\0"
    "slotRequestForNewPrinterName(QString)\0"
    "slotRequestToInheritReport()\0"
    "slotRequestForDetachReport()\0"
    "slotReportObjectDestroyed(QObject*)\0"
    "slotReportNameChangedOutside(QString)\0"
    "isDirty\0slotDirtynessChanged(bool)\0"
    "slotCoreReportCreated(CuteReport::ReportInterface*)\0"
    "slotSetCurrentReport()\0slotDesignerInitDone()\0"
    "cancel\0slotAppIsAboutToClose(bool*)\0"
    "slotOpenPrevReport()\0"
    "slotRendererStarted(CuteReport::ReportInterface*)\0"
    "report,\0slotRendererStopped(CuteReport::ReportInterface*,bool)\0"
};

void ReportEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReportEditor *_t = static_cast<ReportEditor *>(_o);
        switch (_id) {
        case 0: _t->loadReport((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slotRequestForTemplate(); break;
        case 2: _t->slotRequestForNewReport(); break;
        case 3: _t->slotRequestForOpenReport(); break;
        case 4: _t->slotRequestForSaveReport(); break;
        case 5: _t->slotRequestForSaveReportAs(); break;
        case 6: _t->slotRequestForCloseReport(); break;
        case 7: _t->slotCurrentReportChangedByCore((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 8: _t->slotCurrentTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->slotRequestForNewStorage((*reinterpret_cast< const CuteReport::StorageInterface*(*)>(_a[1]))); break;
        case 10: _t->slotRequestForDeleteStorage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->slotRequestForChangeDefaultStorage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->slotRequestForNewStorageName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->slotRequestForNewRenderer((*reinterpret_cast< const CuteReport::RendererInterface*(*)>(_a[1]))); break;
        case 14: _t->slotRequestForDeleteRenderer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->slotRequestForChangeDefaultRenderer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->slotRequestForNewRendererName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->slotRequestForNewPrinter((*reinterpret_cast< const CuteReport::PrinterInterface*(*)>(_a[1]))); break;
        case 18: _t->slotRequestForDeletePrinter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->slotRequestForChangeDefaultPrinter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->slotRequestForNewPrinterName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->slotRequestToInheritReport(); break;
        case 22: _t->slotRequestForDetachReport(); break;
        case 23: _t->slotReportObjectDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 24: _t->slotReportNameChangedOutside((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->slotDirtynessChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->slotCoreReportCreated((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 27: _t->slotSetCurrentReport(); break;
        case 28: _t->slotDesignerInitDone(); break;
        case 29: _t->slotAppIsAboutToClose((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 30: _t->slotOpenPrevReport(); break;
        case 31: _t->slotRendererStarted((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 32: _t->slotRendererStopped((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ReportEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ReportEditor::staticMetaObject = {
    { &CuteDesigner::ModuleInterface::staticMetaObject, qt_meta_stringdata_ReportEditor,
      qt_meta_data_ReportEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ReportEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ReportEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ReportEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReportEditor))
        return static_cast<void*>(const_cast< ReportEditor*>(this));
    if (!strcmp(_clname, "CuteDesigner.ModuleInterface/1.0"))
        return static_cast< CuteDesigner::ModuleInterface*>(const_cast< ReportEditor*>(this));
    typedef CuteDesigner::ModuleInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int ReportEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteDesigner::ModuleInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
