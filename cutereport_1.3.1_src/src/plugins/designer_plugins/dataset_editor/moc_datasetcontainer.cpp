/****************************************************************************
** Meta object code from reading C++ file 'datasetcontainer.h'
**
** Created: Sun Jan 22 17:37:11 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "datasetcontainer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datasetcontainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DatasetContainer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x05,
      56,   17,   17,   17, 0x05,
      82,   18,   17,   17, 0x05,
     109,   18,   17,   17, 0x05,
     135,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     163,   17,   17,   17, 0x08,
     193,  187,   17,   17, 0x08,
     224,  187,   17,   17, 0x08,
     252,  250,   17,   17, 0x08,
     284,   17,   17,   17, 0x08,
     303,   17,   17,   17, 0x08,
     325,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DatasetContainer[] = {
    "DatasetContainer\0\0name\0"
    "requestForCreateDataset(QString)\0"
    "requestForDeleteDataset()\0"
    "currentTabChanged(QString)\0"
    "requestForRename(QString)\0"
    "requestForPopulateDataset()\0"
    "slotNewDatasetPressed()\0index\0"
    "slotCurrentDatasetChanged(int)\0"
    "slotTabDoubleClicked(int)\0b\0"
    "slotPropertyButtonToggled(bool)\0"
    "slotShowDataPage()\0slotShowOptionsPage()\0"
    "populateClicked()\0"
};

void DatasetContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DatasetContainer *_t = static_cast<DatasetContainer *>(_o);
        switch (_id) {
        case 0: _t->requestForCreateDataset((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->requestForDeleteDataset(); break;
        case 2: _t->currentTabChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->requestForRename((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->requestForPopulateDataset(); break;
        case 5: _t->slotNewDatasetPressed(); break;
        case 6: _t->slotCurrentDatasetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slotTabDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slotPropertyButtonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->slotShowDataPage(); break;
        case 10: _t->slotShowOptionsPage(); break;
        case 11: _t->populateClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DatasetContainer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DatasetContainer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DatasetContainer,
      qt_meta_data_DatasetContainer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DatasetContainer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DatasetContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DatasetContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DatasetContainer))
        return static_cast<void*>(const_cast< DatasetContainer*>(this));
    return QWidget::qt_metacast(_clname);
}

int DatasetContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void DatasetContainer::requestForCreateDataset(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DatasetContainer::requestForDeleteDataset()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void DatasetContainer::currentTabChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DatasetContainer::requestForRename(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DatasetContainer::requestForPopulateDataset()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
