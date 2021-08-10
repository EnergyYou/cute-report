/****************************************************************************
** Meta object code from reading C++ file 'modeldatasethelper.h'
**
** Created: Sun Jan 22 17:34:35 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modeldatasethelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modeldatasethelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ModelDatasetHelper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      29,   19,   19,   19, 0x08,
      41,   19,   19,   19, 0x08,
      53,   19,   19,   19, 0x08,
      68,   19,   19,   19, 0x08,
      87,   19,   19,   19, 0x08,
     105,   98,   19,   19, 0x08,
     127,   19,   19,   19, 0x08,
     157,  155,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ModelDatasetHelper[] = {
    "ModelDatasetHelper\0\0addRow()\0removeRow()\0"
    "addColumn()\0removeColumn()\0"
    "onCmbTypeChanged()\0scRemove()\0column\0"
    "slotRenameColumn(int)\0slotRenameActivatedColumn()\0"
    "p\0showContextHorizontalHeaderMenu(QPoint)\0"
};

void ModelDatasetHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModelDatasetHelper *_t = static_cast<ModelDatasetHelper *>(_o);
        switch (_id) {
        case 0: _t->addRow(); break;
        case 1: _t->removeRow(); break;
        case 2: _t->addColumn(); break;
        case 3: _t->removeColumn(); break;
        case 4: _t->onCmbTypeChanged(); break;
        case 5: _t->scRemove(); break;
        case 6: _t->slotRenameColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slotRenameActivatedColumn(); break;
        case 8: _t->showContextHorizontalHeaderMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ModelDatasetHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModelDatasetHelper::staticMetaObject = {
    { &CuteReport::DatasetHelperInterface::staticMetaObject, qt_meta_stringdata_ModelDatasetHelper,
      qt_meta_data_ModelDatasetHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModelDatasetHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModelDatasetHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModelDatasetHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModelDatasetHelper))
        return static_cast<void*>(const_cast< ModelDatasetHelper*>(this));
    typedef CuteReport::DatasetHelperInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int ModelDatasetHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::DatasetHelperInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
