/****************************************************************************
** Meta object code from reading C++ file 'preview.h'
**
** Created: Wed Feb 8 11:33:48 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "preview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Preview[] = {

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
      16,    9,    8,    8, 0x08,
      71,    9,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Preview[] = {
    "Preview\0\0report\0"
    "slotCurrentReportChanged(CuteReport::ReportInterface*)\0"
    "slotRenderingStarted(CuteReport::ReportInterface*)\0"
};

void Preview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Preview *_t = static_cast<Preview *>(_o);
        switch (_id) {
        case 0: _t->slotCurrentReportChanged((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 1: _t->slotRenderingStarted((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Preview::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Preview::staticMetaObject = {
    { &CuteDesigner::ModuleInterface::staticMetaObject, qt_meta_stringdata_Preview,
      qt_meta_data_Preview, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Preview::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Preview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Preview::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Preview))
        return static_cast<void*>(const_cast< Preview*>(this));
    if (!strcmp(_clname, "CuteDesigner.ModuleInterface/1.0"))
        return static_cast< CuteDesigner::ModuleInterface*>(const_cast< Preview*>(this));
    typedef CuteDesigner::ModuleInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Preview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteDesigner::ModuleInterface QMocSuperClass;
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
