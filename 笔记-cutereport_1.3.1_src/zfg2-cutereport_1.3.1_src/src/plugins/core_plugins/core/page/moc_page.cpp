/****************************************************************************
** Meta object code from reading C++ file 'page.h'
**
** Created: Wed Feb 8 11:26:00 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "page.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Page[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      14,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x05,
      33,   27,    5,    5, 0x05,
      73,    5,    5,    5, 0x25,
      96,    5,    5,    5, 0x05,
     121,    5,    5,    5, 0x05,
     144,    5,    5,    5, 0x05,
     168,    5,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
     209,  197,    5,    5, 0x08,
     247,  241,    5,    5, 0x08,
     280,  273,    5,    5, 0x08,

 // properties: name, type, flags
     313,  308, 0x01495103,
     327,  321, ((uint)QMetaType::QReal << 24) | 0x00495103,
     340,  336, 0x02494103,
     352,  336, 0x02495103,
     371,  363, 0x0a094103,
     381,  308, 0x01495103,
     397,  308, 0x01094103,
     417,  308, 0x01094103,
     436,  308, 0x01094103,
     449,  308, 0x01094103,
     475,  463, 0x0b094001,
     492,  463, 0x0b094001,
     507,  336, 0x02094003,
     525,  363, 0x0a094001,

 // properties: notify_signal_id
       0,
       1,
       5,
       4,
       0,
       6,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

static const char qt_meta_stringdata_Page[] = {
    "Page\0\0useGridChanged(bool)\0,unit\0"
    "gridStepChanged(qreal,CuteReport::Unit)\0"
    "gridStepChanged(qreal)\0bandsIndentionsChanged()\0"
    "magnetRateChanged(int)\0magnetValueChanged(int)\0"
    "resetPageNumberChanged(bool)\0newGeometry\0"
    "slotItemGeometryChanged(QRectF)\0order\0"
    "slotItemOrderChanged(int)\0object\0"
    "slotItemDestroyed(QObject*)\0bool\0"
    "useGrid\0qreal\0gridStep\0int\0magnetValue\0"
    "magnetRate\0QString\0gridSteps\0"
    "resetPageNumber\0printOnPreviousPage\0"
    "allowMirrorMargins\0endlessWidth\0"
    "endlessHeight\0QStringList\0_format_variants\0"
    "_unit_variants\0_current_property\0"
    "_current_property_description\0"
};

void Page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Page *_t = static_cast<Page *>(_o);
        switch (_id) {
        case 0: _t->useGridChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->gridStepChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< CuteReport::Unit(*)>(_a[2]))); break;
        case 2: _t->gridStepChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->bandsIndentionsChanged(); break;
        case 4: _t->magnetRateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->magnetValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->resetPageNumberChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->slotItemGeometryChanged((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 8: _t->slotItemOrderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->slotItemDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Page::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Page::staticMetaObject = {
    { &CuteReport::PageInterface::staticMetaObject, qt_meta_stringdata_Page,
      qt_meta_data_Page, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Page::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Page::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Page))
        return static_cast<void*>(const_cast< Page*>(this));
    if (!strcmp(_clname, "CuteReport.PageInterface/1.0"))
        return static_cast< CuteReport::PageInterface*>(const_cast< Page*>(this));
    typedef CuteReport::PageInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::PageInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = useGrid(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = gridStep(); break;
        case 2: *reinterpret_cast< int*>(_v) = magnetValue(); break;
        case 3: *reinterpret_cast< int*>(_v) = magnetRate(); break;
        case 4: *reinterpret_cast< QString*>(_v) = gridSteps(); break;
        case 5: *reinterpret_cast< bool*>(_v) = getResetPageNumber(); break;
        case 6: *reinterpret_cast< bool*>(_v) = printOnPreviousPage(); break;
        case 7: *reinterpret_cast< bool*>(_v) = allowMirrorMargins(); break;
        case 8: *reinterpret_cast< bool*>(_v) = endlessWidth(); break;
        case 9: *reinterpret_cast< bool*>(_v) = endlessHeight(); break;
        case 10: *reinterpret_cast< QStringList*>(_v) = _format_variants(); break;
        case 11: *reinterpret_cast< QStringList*>(_v) = _unit_variants(); break;
        case 12: *reinterpret_cast< int*>(_v) = _currentProperty(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _current_property_description(); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setUseGrid(*reinterpret_cast< bool*>(_v)); break;
        case 1: setGridStep(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setMagnetValue(*reinterpret_cast< int*>(_v)); break;
        case 3: setMagnetRate(*reinterpret_cast< int*>(_v)); break;
        case 4: setGridSteps(*reinterpret_cast< QString*>(_v)); break;
        case 5: setResetPageNumber(*reinterpret_cast< bool*>(_v)); break;
        case 6: setPrintOnPreviousPage(*reinterpret_cast< bool*>(_v)); break;
        case 7: setAllowMirrorMargins(*reinterpret_cast< bool*>(_v)); break;
        case 8: setEndlessWidth(*reinterpret_cast< bool*>(_v)); break;
        case 9: setEndlessHeight(*reinterpret_cast< bool*>(_v)); break;
        case 12: _setCurrentProperty(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Page::useGridChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Page::gridStepChanged(qreal _t1, CuteReport::Unit _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void Page::bandsIndentionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Page::magnetRateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Page::magnetValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Page::resetPageNumberChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
