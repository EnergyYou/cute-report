/****************************************************************************
** Meta object code from reading C++ file 'sqldataset.h'
**
** Created: Wed Feb 8 11:30:04 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sqldataset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sqldataset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SqlDataset[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      34,   11,   11,   11, 0x05,
      57,   11,   11,   11, 0x05,
      80,   11,   11,   11, 0x05,
     103,   11,   11,   11, 0x05,
     128,   11,   11,   11, 0x05,
     151,   11,   11,   11, 0x05,

 // properties: name, type, flags
     183,  175, 0x0a495103,
     189,  175, 0x0a495003,
     196,  175, 0x0a495003,
     203,  175, 0x0a495003,
     210,  175, 0x0a495003,
     219,  175, 0x0a495103,
     226,  175, 0x0a495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

static const char qt_meta_stringdata_SqlDataset[] = {
    "SqlDataset\0\0queryChanged(QString)\0"
    "dbhostChanged(QString)\0dbnameChanged(QString)\0"
    "dbuserChanged(QString)\0dbpasswdChanged(QString)\0"
    "driverChanged(QString)\0optionsChanged(QString)\0"
    "QString\0query\0dbhost\0dbname\0dbuser\0"
    "dbpasswd\0driver\0options\0"
};

void SqlDataset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SqlDataset *_t = static_cast<SqlDataset *>(_o);
        switch (_id) {
        case 0: _t->queryChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->dbhostChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->dbnameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->dbuserChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->dbpasswdChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->driverChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->optionsChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SqlDataset::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SqlDataset::staticMetaObject = {
    { &CuteReport::DatasetInterface::staticMetaObject, qt_meta_stringdata_SqlDataset,
      qt_meta_data_SqlDataset, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SqlDataset::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SqlDataset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SqlDataset::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SqlDataset))
        return static_cast<void*>(const_cast< SqlDataset*>(this));
    if (!strcmp(_clname, "CuteReport.DatasetInterface/1.0"))
        return static_cast< CuteReport::DatasetInterface*>(const_cast< SqlDataset*>(this));
    typedef CuteReport::DatasetInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int SqlDataset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::DatasetInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = query(); break;
        case 1: *reinterpret_cast< QString*>(_v) = dbhost(); break;
        case 2: *reinterpret_cast< QString*>(_v) = dbname(); break;
        case 3: *reinterpret_cast< QString*>(_v) = dbuser(); break;
        case 4: *reinterpret_cast< QString*>(_v) = dbpasswd(); break;
        case 5: *reinterpret_cast< QString*>(_v) = driver(); break;
        case 6: *reinterpret_cast< QString*>(_v) = options(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setQuery(*reinterpret_cast< QString*>(_v)); break;
        case 1: setdbhost(*reinterpret_cast< QString*>(_v)); break;
        case 2: setdbname(*reinterpret_cast< QString*>(_v)); break;
        case 3: setdbuser(*reinterpret_cast< QString*>(_v)); break;
        case 4: setdbpasswd(*reinterpret_cast< QString*>(_v)); break;
        case 5: setDriver(*reinterpret_cast< QString*>(_v)); break;
        case 6: setOptions(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SqlDataset::queryChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SqlDataset::dbhostChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SqlDataset::dbnameChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SqlDataset::dbuserChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SqlDataset::dbpasswdChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SqlDataset::driverChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SqlDataset::optionsChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
