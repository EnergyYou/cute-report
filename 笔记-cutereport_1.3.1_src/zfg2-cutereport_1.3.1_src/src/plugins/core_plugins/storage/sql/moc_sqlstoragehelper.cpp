/****************************************************************************
** Meta object code from reading C++ file 'sqlstoragehelper.h'
**
** Created: Wed Feb 8 11:29:53 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sqlstoragehelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sqlstoragehelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SqlStorageHelper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      25,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SqlStorageHelper[] = {
    "SqlStorageHelper\0\0load()\0save()\0"
};

void SqlStorageHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SqlStorageHelper *_t = static_cast<SqlStorageHelper *>(_o);
        switch (_id) {
        case 0: _t->load(); break;
        case 1: _t->save(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SqlStorageHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SqlStorageHelper::staticMetaObject = {
    { &CuteReport::StorageHelperInterface::staticMetaObject, qt_meta_stringdata_SqlStorageHelper,
      qt_meta_data_SqlStorageHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SqlStorageHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SqlStorageHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SqlStorageHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SqlStorageHelper))
        return static_cast<void*>(const_cast< SqlStorageHelper*>(this));
    typedef CuteReport::StorageHelperInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int SqlStorageHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::StorageHelperInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
