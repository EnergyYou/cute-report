/****************************************************************************
** Meta object code from reading C++ file 'forminterface.h'
**
** Created: Wed Feb 8 11:23:34 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "forminterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'forminterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReport__FormInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,
      38,   26,   26,   26, 0x05,
      49,   26,   26,   26, 0x05,
      70,   26,   26,   26, 0x05,

 // methods: signature, parameters, type, tag, flags
      96,   26,   26,   26, 0x02,
     160,  112,  103,   26, 0x02,
     281,  238,  103,   26, 0x22,
     388,  350,  103,   26, 0x22,
     481,  448,  103,   26, 0x22,
     560,  532,  103,   26, 0x22,
     625,  602,  103,   26, 0x22,
     676,  658,  103,   26, 0x22,

 // properties: name, type, flags
     708,  700, 0x0a495103,

 // properties: notify_signal_id
       2,

       0        // eod
};

static const char qt_meta_stringdata_CuteReport__FormInterface[] = {
    "CuteReport::FormInterface\0\0accepted()\0"
    "rejected()\0dataChanged(QString)\0"
    "renderingStringsChanged()\0show()\0"
    "QVariant\0objectName,method,arg1,arg2,arg3,arg4,arg5,arg6\0"
    "invoke(QString,QString,QVariant,QVariant,QVariant,QVariant,QVariant,QV"
    "ariant)\0"
    "objectName,method,arg1,arg2,arg3,arg4,arg5\0"
    "invoke(QString,QString,QVariant,QVariant,QVariant,QVariant,QVariant)\0"
    "objectName,method,arg1,arg2,arg3,arg4\0"
    "invoke(QString,QString,QVariant,QVariant,QVariant,QVariant)\0"
    "objectName,method,arg1,arg2,arg3\0"
    "invoke(QString,QString,QVariant,QVariant,QVariant)\0"
    "objectName,method,arg1,arg2\0"
    "invoke(QString,QString,QVariant,QVariant)\0"
    "objectName,method,arg1\0"
    "invoke(QString,QString,QVariant)\0"
    "objectName,method\0invoke(QString,QString)\0"
    "QString\0data\0"
};

void CuteReport::FormInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FormInterface *_t = static_cast<FormInterface *>(_o);
        switch (_id) {
        case 0: _t->accepted(); break;
        case 1: _t->rejected(); break;
        case 2: _t->dataChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->renderingStringsChanged(); break;
        case 4: _t->show(); break;
        case 5: { QVariant _r = _t->invoke((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])),(*reinterpret_cast< const QVariant(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->invoke((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])),(*reinterpret_cast< const QVariant(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { QVariant _r = _t->invoke((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 8: { QVariant _r = _t->invoke((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const QVariant(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 9: { QVariant _r = _t->invoke((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 10: { QVariant _r = _t->invoke((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 11: { QVariant _r = _t->invoke((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteReport::FormInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::FormInterface::staticMetaObject = {
    { &ReportPluginInterface::staticMetaObject, qt_meta_stringdata_CuteReport__FormInterface,
      qt_meta_data_CuteReport__FormInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::FormInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::FormInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::FormInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__FormInterface))
        return static_cast<void*>(const_cast< FormInterface*>(this));
    return ReportPluginInterface::qt_metacast(_clname);
}

int CuteReport::FormInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReportPluginInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = data(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setData(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CuteReport::FormInterface::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CuteReport::FormInterface::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CuteReport::FormInterface::dataChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CuteReport::FormInterface::renderingStringsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
