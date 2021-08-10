/****************************************************************************
** Meta object code from reading C++ file 'brush.h'
**
** Created: Wed Feb 8 11:20:51 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "brush.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'brush.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Brush[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      17,    6, 0x0019510b,
      30,   23, 0x43195103,
      44,   36, 0x41195103,
      62,   52, 0x0019510b,

 // enums: name, flags, count, data
       6, 0x0,   19,   30,

 // enum data: key, value
      71, uint(Brush::NoBrush),
      79, uint(Brush::SolidPattern),
      92, uint(Brush::Dense1Pattern),
     106, uint(Brush::Dense2Pattern),
     120, uint(Brush::Dense3Pattern),
     134, uint(Brush::Dense4Pattern),
     148, uint(Brush::Dense5Pattern),
     162, uint(Brush::Dense6Pattern),
     176, uint(Brush::Dense7Pattern),
     190, uint(Brush::HorPattern),
     201, uint(Brush::VerPattern),
     212, uint(Brush::CrossPattern),
     225, uint(Brush::BDiagPattern),
     238, uint(Brush::FDiagPattern),
     251, uint(Brush::DiagCrossPattern),
     268, uint(Brush::LinearGradientPattern),
     290, uint(Brush::RadialGradientPattern),
     312, uint(Brush::ConicalGradientPattern),
     335, uint(Brush::TexturePattern),

       0        // eod
};

static const char qt_meta_stringdata_Brush[] = {
    "Brush\0BrushStyle\0style\0QColor\0color\0"
    "QPixmap\0texture\0QGradient\0gradient\0"
    "NoBrush\0SolidPattern\0Dense1Pattern\0"
    "Dense2Pattern\0Dense3Pattern\0Dense4Pattern\0"
    "Dense5Pattern\0Dense6Pattern\0Dense7Pattern\0"
    "HorPattern\0VerPattern\0CrossPattern\0"
    "BDiagPattern\0FDiagPattern\0DiagCrossPattern\0"
    "LinearGradientPattern\0RadialGradientPattern\0"
    "ConicalGradientPattern\0TexturePattern\0"
};

void Brush::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Brush::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Brush::staticMetaObject = {
    { &PropertyInterface::staticMetaObject, qt_meta_stringdata_Brush,
      qt_meta_data_Brush, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Brush::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Brush::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Brush::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Brush))
        return static_cast<void*>(const_cast< Brush*>(this));
    if (!strcmp(_clname, "eu.licentia.PropertyEditor.PropetyInterface/1.0"))
        return static_cast< PropertyEditor::PropertyInterface*>(const_cast< Brush*>(this));
    return PropertyInterface::qt_metacast(_clname);
}

int Brush::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< BrushStyle*>(_v) = style(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = color(); break;
        case 2: *reinterpret_cast< QPixmap*>(_v) = texture(); break;
        case 3: *reinterpret_cast< QGradient*>(_v) = gradient(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setStyle(*reinterpret_cast< BrushStyle*>(_v)); break;
        case 1: setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: setTexture(*reinterpret_cast< QPixmap*>(_v)); break;
        case 3: setGradient(*reinterpret_cast< QGradient*>(_v)); break;
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
QT_END_MOC_NAMESPACE
