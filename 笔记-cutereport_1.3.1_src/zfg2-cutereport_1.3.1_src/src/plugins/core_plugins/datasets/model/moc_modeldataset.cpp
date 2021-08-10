/****************************************************************************
** Meta object code from reading C++ file 'modeldataset.h'
**
** Created: Wed Feb 8 11:30:51 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modeldataset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modeldataset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ModelDataset[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      46,   13,   13,   13, 0x05,
      75,   13,   13,   13, 0x05,

 // properties: name, type, flags
     116,  108, 0x0a495103,
     140,  132, 0x05495103,
     164,  153, 0x0c495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_ModelDataset[] = {
    "ModelDataset\0\0addressVariableChanged(QString)\0"
    "modelAddressChanged(quint64)\0"
    "testModelDataChanged(QByteArray)\0"
    "QString\0addressVariable\0quint64\0"
    "modelAddress\0QByteArray\0testModelData\0"
};

void ModelDataset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModelDataset *_t = static_cast<ModelDataset *>(_o);
        switch (_id) {
        case 0: _t->addressVariableChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->modelAddressChanged((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 2: _t->testModelDataChanged((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ModelDataset::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModelDataset::staticMetaObject = {
    { &CuteReport::DatasetInterface::staticMetaObject, qt_meta_stringdata_ModelDataset,
      qt_meta_data_ModelDataset, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModelDataset::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModelDataset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModelDataset::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModelDataset))
        return static_cast<void*>(const_cast< ModelDataset*>(this));
    if (!strcmp(_clname, "CuteReport.DatasetInterface/1.0"))
        return static_cast< CuteReport::DatasetInterface*>(const_cast< ModelDataset*>(this));
    typedef CuteReport::DatasetInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int ModelDataset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::DatasetInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = addressVariable(); break;
        case 1: *reinterpret_cast< quint64*>(_v) = modelAddress(); break;
        case 2: *reinterpret_cast< QByteArray*>(_v) = testModelData(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAddressVariable(*reinterpret_cast< QString*>(_v)); break;
        case 1: setModelAddress(*reinterpret_cast< quint64*>(_v)); break;
        case 2: setTestModelData(*reinterpret_cast< QByteArray*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ModelDataset::addressVariableChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ModelDataset::modelAddressChanged(quint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ModelDataset::testModelDataChanged(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
