/****************************************************************************
** Meta object code from reading C++ file 'sql.h'
**
** Created: Wed Feb 8 11:29:51 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sql.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sql.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StorageSql[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
      11,   69, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      38,   11,   11,   11, 0x05,
      63,   11,   11,   11, 0x05,
      90,   11,   11,   11, 0x05,
     113,   11,   11,   11, 0x05,
     134,   11,   11,   11, 0x05,
     151,   11,   11,   11, 0x05,
     176,   11,   11,   11, 0x05,
     197,   11,   11,   11, 0x05,
     222,   11,   11,   11, 0x05,
     258,   11,   11,   11, 0x05,

 // properties: name, type, flags
     295,  287, 0x0a495103,
     305,  287, 0x0a495103,
     314,  287, 0x0a495103,
     325,  287, 0x0a495103,
     332,  287, 0x0a495103,
     341,  337, 0x02495103,
     346,  287, 0x0a495103,
     355,  287, 0x0a495103,
     360,  287, 0x0a495103,
     374,  369, 0x01495103,
     397,  287, 0x0a495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,

       0        // eod
};

static const char qt_meta_stringdata_StorageSql[] = {
    "StorageSql\0\0tableNameChanged(QString)\0"
    "columnIdChanged(QString)\0"
    "columnDataChanged(QString)\0"
    "driverChanged(QString)\0hostChanged(QString)\0"
    "portChanged(int)\0databaseChanged(QString)\0"
    "userChanged(QString)\0passwordChanged(QString)\0"
    "useAsDefaultConnectionChanged(bool)\0"
    "connectionIdChanged(QString)\0QString\0"
    "tableName\0columnId\0columnData\0driver\0"
    "host\0int\0port\0database\0user\0password\0"
    "bool\0useAsDefaultConnection\0connectionId\0"
};

void StorageSql::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StorageSql *_t = static_cast<StorageSql *>(_o);
        switch (_id) {
        case 0: _t->tableNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->columnIdChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->columnDataChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->driverChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->hostChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->portChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->databaseChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->userChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->passwordChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->useAsDefaultConnectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->connectionIdChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StorageSql::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StorageSql::staticMetaObject = {
    { &CuteReport::StorageInterface::staticMetaObject, qt_meta_stringdata_StorageSql,
      qt_meta_data_StorageSql, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StorageSql::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StorageSql::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StorageSql::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StorageSql))
        return static_cast<void*>(const_cast< StorageSql*>(this));
    if (!strcmp(_clname, "CuteReport.StorageInterface/1.0"))
        return static_cast< CuteReport::StorageInterface*>(const_cast< StorageSql*>(this));
    typedef CuteReport::StorageInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int StorageSql::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::StorageInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = tableName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = columnId(); break;
        case 2: *reinterpret_cast< QString*>(_v) = columnData(); break;
        case 3: *reinterpret_cast< QString*>(_v) = driver(); break;
        case 4: *reinterpret_cast< QString*>(_v) = host(); break;
        case 5: *reinterpret_cast< int*>(_v) = port(); break;
        case 6: *reinterpret_cast< QString*>(_v) = database(); break;
        case 7: *reinterpret_cast< QString*>(_v) = user(); break;
        case 8: *reinterpret_cast< QString*>(_v) = password(); break;
        case 9: *reinterpret_cast< bool*>(_v) = useAsDefaultConnection(); break;
        case 10: *reinterpret_cast< QString*>(_v) = connectionId(); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTableName(*reinterpret_cast< QString*>(_v)); break;
        case 1: setColumnId(*reinterpret_cast< QString*>(_v)); break;
        case 2: setColumnData(*reinterpret_cast< QString*>(_v)); break;
        case 3: setDriver(*reinterpret_cast< QString*>(_v)); break;
        case 4: setHost(*reinterpret_cast< QString*>(_v)); break;
        case 5: setPort(*reinterpret_cast< int*>(_v)); break;
        case 6: setDatabase(*reinterpret_cast< QString*>(_v)); break;
        case 7: setUser(*reinterpret_cast< QString*>(_v)); break;
        case 8: setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 9: setUseAsDefaultConnection(*reinterpret_cast< bool*>(_v)); break;
        case 10: setConnectionId(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StorageSql::tableNameChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StorageSql::columnIdChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StorageSql::columnDataChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StorageSql::driverChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StorageSql::hostChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StorageSql::portChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StorageSql::databaseChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void StorageSql::userChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void StorageSql::passwordChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void StorageSql::useAsDefaultConnectionChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void StorageSql::connectionIdChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
