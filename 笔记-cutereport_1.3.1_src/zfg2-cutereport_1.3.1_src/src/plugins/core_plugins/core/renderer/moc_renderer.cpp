/****************************************************************************
** Meta object code from reading C++ file 'renderer.h'
**
** Created: Wed Feb 8 11:26:30 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "renderer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'renderer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Renderer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      36,    9,    9,    9, 0x05,
      66,    9,    9,    9, 0x05,
     101,    9,    9,    9, 0x05,
     133,    9,    9,    9, 0x05,
     149,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     194,  167,    9,    9, 0x08,
     253,  246,    9,    9, 0x08,
     314,  283,    9,    9, 0x08,

 // properties: name, type, flags
     365,  360, 0x01495103,
     378,  360, 0x01495103,
     395,  360, 0x01495103,
     421,  417, 0x02495103,
     425,  417, 0x02495003,

 // properties: notify_signal_id
       0,
       1,
       1,
       4,
       5,

       0        // eod
};

static const char qt_meta_stringdata_Renderer[] = {
    "Renderer\0\0antialiasingChanged(bool)\0"
    "textAntialiasingChanged(bool)\0"
    "smoothPixmapTransformChanged(bool)\0"
    "workWithReportCopyChanged(bool)\0"
    "dpiChanged(int)\0delayChanged(int)\0"
    "successfull,renderedReport\0"
    "slotProcessorDone(bool,CuteReport::RenderedReport*)\0"
    "object\0slotReportDestroyed(QObject*)\0"
    "level,shortMessage,fullMessage\0"
    "slotLog(CuteReport::LogLevel,QString,QString)\0"
    "bool\0antialiasing\0textAntialiasing\0"
    "smoothPixmapTransform\0int\0dpi\0"
    "iterationDelay\0"
};

void Renderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Renderer *_t = static_cast<Renderer *>(_o);
        switch (_id) {
        case 0: _t->antialiasingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->textAntialiasingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->smoothPixmapTransformChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->workWithReportCopyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->dpiChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->delayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotProcessorDone((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< CuteReport::RenderedReport*(*)>(_a[2]))); break;
        case 7: _t->slotReportDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 8: _t->slotLog((*reinterpret_cast< CuteReport::LogLevel(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Renderer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Renderer::staticMetaObject = {
    { &CuteReport::RendererInterface::staticMetaObject, qt_meta_stringdata_Renderer,
      qt_meta_data_Renderer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Renderer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Renderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Renderer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Renderer))
        return static_cast<void*>(const_cast< Renderer*>(this));
    if (!strcmp(_clname, "CuteReport.RendererInterface/1.0"))
        return static_cast< CuteReport::RendererInterface*>(const_cast< Renderer*>(this));
    typedef CuteReport::RendererInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Renderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::RendererInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = antialiasing(); break;
        case 1: *reinterpret_cast< bool*>(_v) = textAntialiasing(); break;
        case 2: *reinterpret_cast< bool*>(_v) = smoothPixmapTransform(); break;
        case 3: *reinterpret_cast< int*>(_v) = dpi(); break;
        case 4: *reinterpret_cast< int*>(_v) = delay(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAntialiasing(*reinterpret_cast< bool*>(_v)); break;
        case 1: setTextAntialiasing(*reinterpret_cast< bool*>(_v)); break;
        case 2: setSmoothPixmapTransform(*reinterpret_cast< bool*>(_v)); break;
        case 3: setDpi(*reinterpret_cast< int*>(_v)); break;
        case 4: setDelay(*reinterpret_cast< int*>(_v)); break;
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
void Renderer::antialiasingChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Renderer::textAntialiasingChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Renderer::smoothPixmapTransformChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Renderer::workWithReportCopyChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Renderer::dpiChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Renderer::delayChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
