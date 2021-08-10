/****************************************************************************
** Meta object code from reading C++ file 'pageeditor.h'
**
** Created: Wed Feb 8 11:33:19 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pageeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x08,
      71,   11,   11,   11, 0x08,
     102,   95,   11,   11, 0x08,
     136,   11,   11,   11, 0x08,
     159,   11,   11,   11, 0x08,
     194,  187,   11,   11, 0x08,
     253,  242,   11,   11, 0x08,
     292,  287,   11,   11, 0x08,
     352,  343,   11,   11, 0x08,
     386,  287,   11,   11, 0x08,
     437,  343,   11,   11, 0x08,
     470,  343,   11,   11, 0x08,
     507,  287,   11,   11, 0x08,
     564,  287,   11,   11, 0x08,
     614,  343,   11,   11, 0x08,
     656,  648,   11,   11, 0x08,
     692,   11,   11,   11, 0x08,
     706,   11,   11,   11, 0x08,
     723,   11,   11,   11, 0x08,
     743,   11,   11,   11, 0x08,
     762,   11,   11,   11, 0x08,
     780,   11,   11,   11, 0x08,
     798,   11,   11,   11, 0x08,
     833,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PageEditor[] = {
    "PageEditor\0\0item\0"
    "slotItemHelperRequest(CuteReport::BaseItemInterface*)\0"
    "slotPageHelperRequest()\0object\0"
    "slotActiveObjectChanged(QObject*)\0"
    "slotSelectionChanged()\0"
    "slotUpdateObjectInspector()\0report\0"
    "slotReportChanged(CuteReport::ReportInterface*)\0"
    "moduleName\0slotRequestForCreatePage(QString)\0"
    "page\0slotPageCreatedOutside(CuteReport::PageInterface*)\0"
    "pageName\0slotRequestForDeletePage(QString)\0"
    "slotPageDeletedOutside(CuteReport::PageInterface*)\0"
    "slotRequestForClonePage(QString)\0"
    "slotCurrentPageChangedByGUI(QString)\0"
    "slotCurrentPageChangedByCore(CuteReport::PageInterface*)\0"
    "slotChangeCurrentPage(CuteReport::PageInterface*)\0"
    "slotRequestForRenamePage(QString)\0"
    "newName\0slotPageNameChangedOutside(QString)\0"
    "slotNewPage()\0slotDeletePage()\0"
    "slotPageMoveFront()\0slotPageMoveBack()\0"
    "slotObjectsLoad()\0slotObjectsSave()\0"
    "slotObjectInspectorDeletePressed()\0"
    "updateStdEditors()\0"
};

void PageEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageEditor *_t = static_cast<PageEditor *>(_o);
        switch (_id) {
        case 0: _t->slotItemHelperRequest((*reinterpret_cast< CuteReport::BaseItemInterface*(*)>(_a[1]))); break;
        case 1: _t->slotPageHelperRequest(); break;
        case 2: _t->slotActiveObjectChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->slotSelectionChanged(); break;
        case 4: _t->slotUpdateObjectInspector(); break;
        case 5: _t->slotReportChanged((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 6: _t->slotRequestForCreatePage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->slotPageCreatedOutside((*reinterpret_cast< CuteReport::PageInterface*(*)>(_a[1]))); break;
        case 8: _t->slotRequestForDeletePage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->slotPageDeletedOutside((*reinterpret_cast< CuteReport::PageInterface*(*)>(_a[1]))); break;
        case 10: _t->slotRequestForClonePage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->slotCurrentPageChangedByGUI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->slotCurrentPageChangedByCore((*reinterpret_cast< CuteReport::PageInterface*(*)>(_a[1]))); break;
        case 13: _t->slotChangeCurrentPage((*reinterpret_cast< CuteReport::PageInterface*(*)>(_a[1]))); break;
        case 14: _t->slotRequestForRenamePage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->slotPageNameChangedOutside((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->slotNewPage(); break;
        case 17: _t->slotDeletePage(); break;
        case 18: _t->slotPageMoveFront(); break;
        case 19: _t->slotPageMoveBack(); break;
        case 20: _t->slotObjectsLoad(); break;
        case 21: _t->slotObjectsSave(); break;
        case 22: _t->slotObjectInspectorDeletePressed(); break;
        case 23: _t->updateStdEditors(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PageEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageEditor::staticMetaObject = {
    { &CuteDesigner::ModuleInterface::staticMetaObject, qt_meta_stringdata_PageEditor,
      qt_meta_data_PageEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageEditor))
        return static_cast<void*>(const_cast< PageEditor*>(this));
    if (!strcmp(_clname, "CuteDesigner.ModuleInterface/1.0"))
        return static_cast< CuteDesigner::ModuleInterface*>(const_cast< PageEditor*>(this));
    typedef CuteDesigner::ModuleInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PageEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteDesigner::ModuleInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
