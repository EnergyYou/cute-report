/****************************************************************************
** Meta object code from reading C++ file 'pagefooter.h'
**
** Created: Wed Feb 8 11:28:13 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pagefooter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagefooter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageFooter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      38,   11,   11,   11, 0x05,
      63,   11,   11,   11, 0x05,

 // properties: name, type, flags
      87,   82, 0x01495003,
      97,   82, 0x01495003,
     106,   82, 0x01495003,
     123,  111, 0x0b084001,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,

       0        // eod
};

static const char qt_meta_stringdata_PageFooter[] = {
    "PageFooter\0\0printOnFirstPageChanged()\0"
    "printOnLastPageChanged()\0printOnceChanged()\0"
    "bool\0firstPage\0lastPage\0once\0QStringList\0"
    "_properties_hidden\0"
};

void PageFooter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageFooter *_t = static_cast<PageFooter *>(_o);
        switch (_id) {
        case 0: _t->printOnFirstPageChanged(); break;
        case 1: _t->printOnLastPageChanged(); break;
        case 2: _t->printOnceChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PageFooter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageFooter::staticMetaObject = {
    { &CuteReport::BandInterface::staticMetaObject, qt_meta_stringdata_PageFooter,
      qt_meta_data_PageFooter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageFooter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageFooter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageFooter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageFooter))
        return static_cast<void*>(const_cast< PageFooter*>(this));
    if (!strcmp(_clname, "CuteReport.BandInterface/1.0"))
        return static_cast< CuteReport::BandInterface*>(const_cast< PageFooter*>(this));
    typedef CuteReport::BandInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PageFooter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::BandInterface QMocSuperClass;
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
        case 0: *reinterpret_cast< bool*>(_v) = printOnFirstPage(); break;
        case 1: *reinterpret_cast< bool*>(_v) = printOnLastPage(); break;
        case 2: *reinterpret_cast< bool*>(_v) = printOnce(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _hiddenProperties(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPrintOnFirstPage(*reinterpret_cast< bool*>(_v)); break;
        case 1: setPrintOnLastPage(*reinterpret_cast< bool*>(_v)); break;
        case 2: setPrintOnce(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PageFooter::printOnFirstPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PageFooter::printOnLastPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void PageFooter::printOnceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
