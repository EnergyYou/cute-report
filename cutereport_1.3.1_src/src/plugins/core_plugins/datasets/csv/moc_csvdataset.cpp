/****************************************************************************
** Meta object code from reading C++ file 'csvdataset.h'
**
** Created: Sun Jan 22 17:34:02 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "csvdataset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'csvdataset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CsvDataset[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       6,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      37,   11,   11,   11, 0x05,
      63,   11,   11,   11, 0x05,
      93,   11,   11,   11, 0x05,
     123,   11,   11,   11, 0x05,
     150,   11,   11,   11, 0x05,
     177,   11,   11,   11, 0x05,
     200,   11,   11,   11, 0x05,

 // properties: name, type, flags
     233,  225, 0x0a495103,
     242,  225, 0x0a495103,
     257,  252, 0x01495103,
     274,  252, 0x01495103,
     288,  225, 0x0a495103,
     299,  225, 0x0a495103,

 // properties: notify_signal_id
       0,
       1,
       3,
       4,
       5,
       7,

       0        // eod
};

static const char qt_meta_stringdata_CsvDataset[] = {
    "CsvDataset\0\0fileNameChanged(QString)\0"
    "delimiterChanged(QString)\0"
    "keepDataInternalChanged(bool)\0"
    "firstRowIsHeaderChanged(bool)\0"
    "fixFileIssuesChanged(bool)\0"
    "sortFieldsChanged(QString)\0"
    "maxRecordsChanged(int)\0textDataChanged(QString)\0"
    "QString\0fileName\0delimeter\0bool\0"
    "firstRowIsHeader\0fixFileIssues\0"
    "sortFields\0textData\0"
};

void CsvDataset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CsvDataset *_t = static_cast<CsvDataset *>(_o);
        switch (_id) {
        case 0: _t->fileNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->delimiterChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->keepDataInternalChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->firstRowIsHeaderChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->fixFileIssuesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->sortFieldsChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->maxRecordsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->textDataChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CsvDataset::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CsvDataset::staticMetaObject = {
    { &CuteReport::DatasetInterface::staticMetaObject, qt_meta_stringdata_CsvDataset,
      qt_meta_data_CsvDataset, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CsvDataset::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CsvDataset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CsvDataset::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CsvDataset))
        return static_cast<void*>(const_cast< CsvDataset*>(this));
    if (!strcmp(_clname, "CuteReport.DatasetInterface/1.0"))
        return static_cast< CuteReport::DatasetInterface*>(const_cast< CsvDataset*>(this));
    typedef CuteReport::DatasetInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int CsvDataset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::DatasetInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getFileName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getDelimeter(); break;
        case 2: *reinterpret_cast< bool*>(_v) = getFirstRowIsHeader(); break;
        case 3: *reinterpret_cast< bool*>(_v) = getFixFileIssues(); break;
        case 4: *reinterpret_cast< QString*>(_v) = getSortFields(); break;
        case 5: *reinterpret_cast< QString*>(_v) = getTextData(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFileName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setDelimeter(*reinterpret_cast< QString*>(_v)); break;
        case 2: setFirstRowIsHeader(*reinterpret_cast< bool*>(_v)); break;
        case 3: setFixFileIssues(*reinterpret_cast< bool*>(_v)); break;
        case 4: setSortFields(*reinterpret_cast< QString*>(_v)); break;
        case 5: setTextData(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CsvDataset::fileNameChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CsvDataset::delimiterChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CsvDataset::keepDataInternalChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CsvDataset::firstRowIsHeaderChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CsvDataset::fixFileIssuesChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CsvDataset::sortFieldsChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CsvDataset::maxRecordsChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CsvDataset::textDataChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
