/****************************************************************************
** Meta object code from reading C++ file 'dataseteditor.h'
**
** Created: Sun Jan 22 17:37:13 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dataseteditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataseteditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DatasetEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x08,
      57,   14,   14,   14, 0x08,
      87,   15,   14,   14, 0x08,
     118,   14,   14,   14, 0x08,
     157,  150,   14,   14, 0x08,
     212,   15,   14,   14, 0x08,
     252,  240,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DatasetEditor[] = {
    "DatasetEditor\0\0name\0"
    "slotRequestForCreateDataset(QString)\0"
    "slotRequestForRemoveDataset()\0"
    "slotCurrentTabChanged(QString)\0"
    "slotRequestForPopulatedataset()\0report\0"
    "slotCurrentReportChanged(CuteReport::ReportInterface*)\0"
    "datasetNameChanged(QString)\0currentName\0"
    "slotRequestForRename(QString)\0"
};

void DatasetEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DatasetEditor *_t = static_cast<DatasetEditor *>(_o);
        switch (_id) {
        case 0: _t->slotRequestForCreateDataset((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->slotRequestForRemoveDataset(); break;
        case 2: _t->slotCurrentTabChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->slotRequestForPopulatedataset(); break;
        case 4: _t->slotCurrentReportChanged((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 5: _t->datasetNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->slotRequestForRename((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DatasetEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DatasetEditor::staticMetaObject = {
    { &CuteDesigner::ModuleInterface::staticMetaObject, qt_meta_stringdata_DatasetEditor,
      qt_meta_data_DatasetEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DatasetEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DatasetEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DatasetEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DatasetEditor))
        return static_cast<void*>(const_cast< DatasetEditor*>(this));
    if (!strcmp(_clname, "CuteDesigner.ModuleInterface/1.0"))
        return static_cast< CuteDesigner::ModuleInterface*>(const_cast< DatasetEditor*>(this));
    typedef CuteDesigner::ModuleInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int DatasetEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteDesigner::ModuleInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
