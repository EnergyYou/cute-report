/****************************************************************************
** Meta object code from reading C++ file 'objectinspector.h'
**
** Created: Sun Jan 22 16:36:49 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "objectinspector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objectinspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ObjectInspector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   17,   16,   16, 0x05,
      48,   16,   16,   16, 0x05,
      67,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      94,   83,   16,   16, 0x0a,
     133,  118,   16,   16, 0x0a,
     191,   17,   16,   16, 0x2a,
     221,  214,   16,   16, 0x08,
     266,  264,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ObjectInspector[] = {
    "ObjectInspector\0\0object\0objectChanged(QObject*)\0"
    "selectionChanged()\0deletePressed()\0"
    "rootObject\0setRootObject(QObject*)\0"
    "object,selFlag\0"
    "selectObject(QObject*,QItemSelectionModel::SelectionFlag)\0"
    "selectObject(QObject*)\0index,\0"
    "slotObjectChanged(QModelIndex,QModelIndex)\0"
    ",\0slotSelectionChanged(QItemSelection,QItemSelection)\0"
};

void ObjectInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ObjectInspector *_t = static_cast<ObjectInspector *>(_o);
        switch (_id) {
        case 0: _t->objectChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->deletePressed(); break;
        case 3: _t->setRootObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->selectObject((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlag(*)>(_a[2]))); break;
        case 5: _t->selectObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->slotObjectChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 7: _t->slotSelectionChanged((*reinterpret_cast< QItemSelection(*)>(_a[1])),(*reinterpret_cast< QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ObjectInspector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ObjectInspector::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_ObjectInspector,
      qt_meta_data_ObjectInspector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ObjectInspector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ObjectInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ObjectInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectInspector))
        return static_cast<void*>(const_cast< ObjectInspector*>(this));
    return QTreeView::qt_metacast(_clname);
}

int ObjectInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ObjectInspector::objectChanged(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ObjectInspector::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ObjectInspector::deletePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
