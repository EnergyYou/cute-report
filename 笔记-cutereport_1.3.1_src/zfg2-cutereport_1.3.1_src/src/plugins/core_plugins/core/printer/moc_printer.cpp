/****************************************************************************
** Meta object code from reading C++ file 'printer.h'
**
** Created: Wed Feb 8 11:26:42 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "printer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Printer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      33,    8,    8,    8, 0x05,
      57,    8,    8,    8, 0x05,
      86,    8,    8,    8, 0x05,
     111,    8,    8,    8, 0x05,
     136,    8,    8,    8, 0x05,

 // properties: name, type, flags
     174,  169, 0x01495103,
     185,  169, 0x01495103,
     196,  169, 0x01495103,
     212,  169, 0x01495103,
     224,  169, 0x01495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

static const char qt_meta_stringdata_Printer[] = {
    "Printer\0\0showDialogChanged(bool)\0"
    "scaleToFitChanged(bool)\0"
    "keepAspectRatioChanged(bool)\0"
    "doubleSidedChanged(bool)\0"
    "useDuplexerChanged(bool)\0"
    "duplexerMarginsChanged(QMargins)\0bool\0"
    "showDialog\0scaleToFit\0keepAspectRatio\0"
    "doubleSided\0useDuplexerIfExists\0"
};

void Printer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Printer *_t = static_cast<Printer *>(_o);
        switch (_id) {
        case 0: _t->showDialogChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->scaleToFitChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->keepAspectRatioChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->doubleSidedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->useDuplexerChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->duplexerMarginsChanged((*reinterpret_cast< QMargins(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Printer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Printer::staticMetaObject = {
    { &CuteReport::PrinterInterface::staticMetaObject, qt_meta_stringdata_Printer,
      qt_meta_data_Printer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Printer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Printer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Printer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Printer))
        return static_cast<void*>(const_cast< Printer*>(this));
    if (!strcmp(_clname, "CuteReport.PrinterInterface/1.0"))
        return static_cast< CuteReport::PrinterInterface*>(const_cast< Printer*>(this));
    typedef CuteReport::PrinterInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Printer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::PrinterInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isShowDialog(); break;
        case 1: *reinterpret_cast< bool*>(_v) = scaleToFit(); break;
        case 2: *reinterpret_cast< bool*>(_v) = keepAspectRatio(); break;
        case 3: *reinterpret_cast< bool*>(_v) = doubleSided(); break;
        case 4: *reinterpret_cast< bool*>(_v) = useDuplexer(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setShowDialog(*reinterpret_cast< bool*>(_v)); break;
        case 1: setScaleToFit(*reinterpret_cast< bool*>(_v)); break;
        case 2: setKeepAspectRatio(*reinterpret_cast< bool*>(_v)); break;
        case 3: setDoubleSided(*reinterpret_cast< bool*>(_v)); break;
        case 4: setUseDuplexer(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Printer::showDialogChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Printer::scaleToFitChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Printer::keepAspectRatioChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Printer::doubleSidedChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Printer::useDuplexerChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Printer::duplexerMarginsChanged(QMargins _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
