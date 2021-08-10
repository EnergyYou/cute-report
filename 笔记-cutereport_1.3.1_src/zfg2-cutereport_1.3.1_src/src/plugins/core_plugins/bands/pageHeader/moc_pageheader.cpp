/****************************************************************************
** Meta object code from reading C++ file 'pageheader.h'
**
** Created: Wed Feb 8 11:28:05 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pageheader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageheader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageHeader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      38,   11,   11,   11, 0x05,

 // properties: name, type, flags
      62,   57, 0x01495003,
      72,   57, 0x01495003,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

static const char qt_meta_stringdata_PageHeader[] = {
    "PageHeader\0\0printOnFirstPageChanged()\0"
    "printOnceChanged()\0bool\0firstPage\0"
    "once\0"
};

void PageHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageHeader *_t = static_cast<PageHeader *>(_o);
        switch (_id) {
        case 0: _t->printOnFirstPageChanged(); break;
        case 1: _t->printOnceChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PageHeader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageHeader::staticMetaObject = {
    { &CuteReport::BandInterface::staticMetaObject, qt_meta_stringdata_PageHeader,
      qt_meta_data_PageHeader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageHeader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageHeader))
        return static_cast<void*>(const_cast< PageHeader*>(this));
    if (!strcmp(_clname, "CuteReport.BandInterface/1.0"))
        return static_cast< CuteReport::BandInterface*>(const_cast< PageHeader*>(this));
    typedef CuteReport::BandInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PageHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::BandInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = printOnFirstPage(); break;
        case 1: *reinterpret_cast< bool*>(_v) = printOnce(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPrintOnFirstPage(*reinterpret_cast< bool*>(_v)); break;
        case 1: setPrintOnce(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PageHeader::printOnFirstPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PageHeader::printOnceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
