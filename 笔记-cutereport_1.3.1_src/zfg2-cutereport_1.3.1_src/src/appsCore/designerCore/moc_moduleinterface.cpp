/****************************************************************************
** Meta object code from reading C++ file 'moduleinterface.h'
**
** Created: Wed Feb 8 11:25:14 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "moduleinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'moduleinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteDesigner__ModuleInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      39,   31,   30,   30, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_CuteDesigner__ModuleInterface[] = {
    "CuteDesigner::ModuleInterface\0\0actions\0"
    "stdActionsChanged(CuteDesigner::Core::StdActions)\0"
};

void CuteDesigner::ModuleInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModuleInterface *_t = static_cast<ModuleInterface *>(_o);
        switch (_id) {
        case 0: _t->stdActionsChanged((*reinterpret_cast< CuteDesigner::Core::StdActions(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteDesigner::ModuleInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteDesigner::ModuleInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CuteDesigner__ModuleInterface,
      qt_meta_data_CuteDesigner__ModuleInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteDesigner::ModuleInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteDesigner::ModuleInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteDesigner::ModuleInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteDesigner__ModuleInterface))
        return static_cast<void*>(const_cast< ModuleInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int CuteDesigner::ModuleInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void CuteDesigner::ModuleInterface::stdActionsChanged(CuteDesigner::Core::StdActions _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
