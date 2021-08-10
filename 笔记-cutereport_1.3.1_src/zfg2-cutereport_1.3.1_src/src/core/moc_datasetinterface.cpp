/****************************************************************************
** Meta object code from reading C++ file 'datasetinterface.h'
**
** Created: Wed Feb 8 11:23:09 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "datasetinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datasetinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReport__DatasetInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       4,  259, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,
      43,   29,   29,   29, 0x05,
      55,   29,   29,   29, 0x05,
      72,   29,   29,   29, 0x05,
      88,   29,   29,   29, 0x05,
     102,   29,   29,   29, 0x05,
     115,   29,   29,   29, 0x05,
     128,   29,   29,   29, 0x05,
     146,  140,   29,   29, 0x05,
     162,  140,   29,   29, 0x05,
     177,   29,   29,   29, 0x05,
     194,   29,   29,   29, 0x05,
     218,  210,   29,   29, 0x05,
     247,  210,   29,   29, 0x05,
     275,   29,   29,   29, 0x05,
     307,  301,   29,   29, 0x05,

 // methods: signature, parameters, type, tag, flags
     352,   29,  332,   29, 0x02,
     368,   29,  360,   29, 0x02,
     388,   29,  383,   29, 0x02,
     399,   29,  383,   29, 0x02,
     413,   29,   29,   29, 0x02,
     421,   29,   29,   29, 0x02,
     435,   29,  383,   29, 0x02,
     449,   29,  383,   29, 0x02,
     462,   29,  383,   29, 0x02,
     475,   29,  383,   29, 0x02,
     494,  492,   29,   29, 0x02,
     517,   29,  513,   29, 0x02,
     539,  140,  383,   29, 0x02,
     564,   29,  513,   29, 0x02,
     578,   29,  513,   29, 0x02,
     615,  604,  595,   29, 0x02,
     640,  633,  595,   29, 0x22,
     668,  654,  595,   29, 0x02,
     700,  690,  595,   29, 0x22,
     718,  140,  595,   29, 0x02,
     745,  739,  595,   29, 0x02,
     770,  140,  595,   29, 0x02,
     795,  739,  595,   29, 0x02,
     824,  633,  360,   29, 0x02,
     857,  633,  842,   29, 0x02,
     886,  875,   29,   29, 0x02,
     929,  210,   29,   29, 0x22,
     952,   29,  360,   29, 0x02,
     980,  971,   29,   29, 0x02,
    1006,   29,  360,   29, 0x02,
    1031, 1027,   29,   29, 0x02,
    1059,   29,  513,   29, 0x02,
    1081, 1077,   29,   29, 0x02,

 // properties: name, type, flags
    1102,  360, 0x0a095103,
    1116,  360, 0x0a095103,
    1132,  513, 0x02095103,
    1145,  513, 0x02494103,

 // properties: notify_signal_id
       0,
       0,
       0,
      15,

       0        // eod
};

static const char qt_meta_stringdata_CuteReport__DatasetInterface[] = {
    "CuteReport::DatasetInterface\0\0"
    "beforeNext()\0afterNext()\0beforePrevious()\0"
    "afterPrevious()\0beforeFirst()\0"
    "afterFirst()\0beforeLast()\0afterLast()\0"
    "index\0beforeSeek(int)\0afterSeek(int)\0"
    "beforePopulate()\0afterPopulate()\0"
    "col,str\0beforeSetFilter(int,QString)\0"
    "afterSetFilter(int,QString)\0"
    "renderingStringsChanged()\0flags\0"
    "datasetFlagsChanged(int)\0QAbstractItemModel*\0"
    "model()\0QString\0getLastError()\0bool\0"
    "populate()\0isPopulated()\0reset()\0"
    "resetCursor()\0setFirstRow()\0setLastRow()\0"
    "setNextRow()\0setPreviousRow()\0b\0"
    "setPopulated(bool)\0int\0getCurrentRowNumber()\0"
    "setCurrentRowNumber(int)\0getRowCount()\0"
    "getColumnCount()\0QVariant\0column,row\0"
    "getValue(int,int)\0column\0getValue(int)\0"
    "fieldName,row\0getValue(QString,int)\0"
    "fieldName\0getValue(QString)\0"
    "getNextRowValue(int)\0field\0"
    "getNextRowValue(QString)\0"
    "getPreviousRowValue(int)\0"
    "getPreviousRowValue(QString)\0"
    "getFieldName(int)\0QVariant::Type\0"
    "getFieldType(int)\0col,str,cs\0"
    "setFilter(int,QString,Qt::CaseSensitivity)\0"
    "setFilter(int,QString)\0getParentDataset()\0"
    "pDataset\0setParentDataset(QString)\0"
    "getFilterCondition()\0str\0"
    "setFilterCondition(QString)\0"
    "getFilterColumn()\0col\0setFilterColumn(int)\0"
    "parentDataset\0filterCondition\0"
    "filterColumn\0datasetFlags\0"
};

void CuteReport::DatasetInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DatasetInterface *_t = static_cast<DatasetInterface *>(_o);
        switch (_id) {
        case 0: _t->beforeNext(); break;
        case 1: _t->afterNext(); break;
        case 2: _t->beforePrevious(); break;
        case 3: _t->afterPrevious(); break;
        case 4: _t->beforeFirst(); break;
        case 5: _t->afterFirst(); break;
        case 6: _t->beforeLast(); break;
        case 7: _t->afterLast(); break;
        case 8: _t->beforeSeek((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->afterSeek((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->beforePopulate(); break;
        case 11: _t->afterPopulate(); break;
        case 12: _t->beforeSetFilter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 13: _t->afterSetFilter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->renderingStringsChanged(); break;
        case 15: _t->datasetFlagsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: { QAbstractItemModel* _r = _t->model();
            if (_a[0]) *reinterpret_cast< QAbstractItemModel**>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->getLastError();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->populate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->isPopulated();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: _t->reset(); break;
        case 21: _t->resetCursor(); break;
        case 22: { bool _r = _t->setFirstRow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->setLastRow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->setNextRow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->setPreviousRow();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: _t->setPopulated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: { int _r = _t->getCurrentRowNumber();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->setCurrentRowNumber((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { int _r = _t->getRowCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->getColumnCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: { QVariant _r = _t->getValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 32: { QVariant _r = _t->getValue((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 33: { QVariant _r = _t->getValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 34: { QVariant _r = _t->getValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 35: { QVariant _r = _t->getNextRowValue((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 36: { QVariant _r = _t->getNextRowValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 37: { QVariant _r = _t->getPreviousRowValue((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 38: { QVariant _r = _t->getPreviousRowValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 39: { QString _r = _t->getFieldName((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 40: { QVariant::Type _r = _t->getFieldType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant::Type*>(_a[0]) = _r; }  break;
        case 41: _t->setFilter((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[3]))); break;
        case 42: _t->setFilter((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 43: { QString _r = _t->getParentDataset();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 44: _t->setParentDataset((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 45: { QString _r = _t->getFilterCondition();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 46: _t->setFilterCondition((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 47: { int _r = _t->getFilterColumn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 48: _t->setFilterColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteReport::DatasetInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::DatasetInterface::staticMetaObject = {
    { &ReportPluginInterface::staticMetaObject, qt_meta_stringdata_CuteReport__DatasetInterface,
      qt_meta_data_CuteReport__DatasetInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::DatasetInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::DatasetInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::DatasetInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__DatasetInterface))
        return static_cast<void*>(const_cast< DatasetInterface*>(this));
    if (!strcmp(_clname, "CuteReport.ReportPluginInterface/1.0"))
        return static_cast< CuteReport::ReportPluginInterface*>(const_cast< DatasetInterface*>(this));
    return ReportPluginInterface::qt_metacast(_clname);
}

int CuteReport::DatasetInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReportPluginInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getParentDataset(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getFilterCondition(); break;
        case 2: *reinterpret_cast< int*>(_v) = getFilterColumn(); break;
        case 3: *reinterpret_cast< int*>(_v) = datasetFlags(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setParentDataset(*reinterpret_cast< QString*>(_v)); break;
        case 1: setFilterCondition(*reinterpret_cast< QString*>(_v)); break;
        case 2: setFilterColumn(*reinterpret_cast< int*>(_v)); break;
        case 3: setDatasetFlags(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CuteReport::DatasetInterface::beforeNext()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CuteReport::DatasetInterface::afterNext()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CuteReport::DatasetInterface::beforePrevious()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void CuteReport::DatasetInterface::afterPrevious()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void CuteReport::DatasetInterface::beforeFirst()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void CuteReport::DatasetInterface::afterFirst()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void CuteReport::DatasetInterface::beforeLast()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void CuteReport::DatasetInterface::afterLast()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void CuteReport::DatasetInterface::beforeSeek(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CuteReport::DatasetInterface::afterSeek(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CuteReport::DatasetInterface::beforePopulate()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void CuteReport::DatasetInterface::afterPopulate()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void CuteReport::DatasetInterface::beforeSetFilter(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void CuteReport::DatasetInterface::afterSetFilter(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void CuteReport::DatasetInterface::renderingStringsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void CuteReport::DatasetInterface::datasetFlagsChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_END_MOC_NAMESPACE
