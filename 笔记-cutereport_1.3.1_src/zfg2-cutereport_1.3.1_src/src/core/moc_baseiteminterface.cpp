/****************************************************************************
** Meta object code from reading C++ file 'baseiteminterface.h'
**
** Created: Wed Feb 8 11:23:14 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "baseiteminterface.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'baseiteminterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReport__BaseItemInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
      16,  129, // properties
       5,  193, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,
      61,   49,   30,   30, 0x05,
      96,   85,   30,   30, 0x05,
     118,   30,   30,   30, 0x05,
     145,  139,   30,   30, 0x05,
     172,  168,   30,   30, 0x05,
     201,  195,   30,   30, 0x05,
     236,  232,   30,   30, 0x05,
     252,   30,   30,   30, 0x05,
     273,   30,   30,   30, 0x05,
     298,  291,   30,   30, 0x05,
     348,   30,   30,   30, 0x05,
     374,   30,   30,   30, 0x05,
     418,   30,   30,   30, 0x05,
     448,   30,   30,   30, 0x05,
     475,   30,   30,   30, 0x05,
     501,   30,   30,   30, 0x05,
     523,   30,   30,   30, 0x05,
     535,   30,   30,   30, 0x05,
     548,   30,   30,   30, 0x05,
     568,   30,   30,   30, 0x05,
     586,   30,   30,   30, 0x05,
     600,   30,   30,   30, 0x05,

 // properties: name, type, flags
     618,  613, 0x01495103,
     633,  626, 0x14495103,
     649,  642, 0x0049510b,
     661,  655, ((uint)QMetaType::QReal << 24) | 0x00495103,
     669,  655, ((uint)QMetaType::QReal << 24) | 0x00495103,
     683,  678, 0x4d495103,
     701,  693, 0x0a495003,
     719,  712, 0x42495103,
     739,  735, 0x02495103,
     745,  735, 0x02494103,
     701,  759, 0x0048410b,
     782,  770, 0x0b084001,
     803,  735, 0x02084003,
     821,  693, 0x0a084001,
     851,  735, 0x02084001,
     885,  879, 0x45084001,

 // properties: notify_signal_id
       8,
       1,
       3,
       2,
       4,
       5,
      13,
       6,
       9,
      15,
      13,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
     891, 0x0,    4,  213,
     642, 0x1,    4,  221,
     897, 0x0,    6,  229,
     759, 0x0,    3,  241,
     909, 0x0,    3,  247,

 // enum data: key, value
     922, uint(CuteReport::BaseItemInterface::DrawLeft),
     931, uint(CuteReport::BaseItemInterface::DrawRight),
     941, uint(CuteReport::BaseItemInterface::DrawTop),
     949, uint(CuteReport::BaseItemInterface::DrawBottom),
     922, uint(CuteReport::BaseItemInterface::DrawLeft),
     931, uint(CuteReport::BaseItemInterface::DrawRight),
     941, uint(CuteReport::BaseItemInterface::DrawTop),
     949, uint(CuteReport::BaseItemInterface::DrawBottom),
     960, uint(CuteReport::BaseItemInterface::Fixed),
     966, uint(CuteReport::BaseItemInterface::ResizeLeft),
     977, uint(CuteReport::BaseItemInterface::ResizeRight),
     989, uint(CuteReport::BaseItemInterface::ResizeTop),
     999, uint(CuteReport::BaseItemInterface::ResizeBottom),
    1012, uint(CuteReport::BaseItemInterface::FixedPos),
    1021, uint(CuteReport::BaseItemInterface::Middle),
    1028, uint(CuteReport::BaseItemInterface::Inner),
    1034, uint(CuteReport::BaseItemInterface::Outer),
    1040, uint(CuteReport::BaseItemInterface::BaseReportItem),
    1055, uint(CuteReport::BaseItemInterface::LockedItem),
    1066, uint(CuteReport::BaseItemInterface::AutoRenamedFromBaseReport),

       0        // eod
};

static const char qt_meta_stringdata_CuteReport__BaseItemInterface[] = {
    "CuteReport::BaseItemInterface\0\0"
    "unitChanged(Unit)\0newGeometry\0"
    "geometryChanged(QRectF)\0newOpacity\0"
    "opacityChanged(qreal)\0frameChanged(Frames)\0"
    "angle\0rotationChanged(qreal)\0pen\0"
    "borderPenChanged(QPen)\0brush\0"
    "backgroundBrushChanged(QBrush)\0dpi\0"
    "dpiChanged(int)\0enabledChanged(bool)\0"
    "orderChanged(int)\0parent\0"
    "parentItemChanged(CuteReport::BaseItemInterface*)\0"
    "renderingStringsChanged()\0"
    "stdEditorListChanded(StdEditorPropertyList)\0"
    "borderTypeChanged(BorderType)\0"
    "borderTypeChanged(QString)\0"
    "baseItemFlagsChanged(int)\0"
    "boundingRectChanged()\0printInit()\0"
    "printReset()\0printCreateBefore()\0"
    "printDataBefore()\0printBefore()\0"
    "printAfter()\0bool\0enabled\0QRectF\0"
    "geometry\0Frames\0frame\0qreal\0opacity\0"
    "rotation\0QPen\0borderPen\0QString\0"
    "borderType\0QBrush\0backgroundBrush\0int\0"
    "order\0baseItemFlags\0BorderType\0"
    "QStringList\0_borderType_variants\0"
    "_current_property\0_current_property_description\0"
    "_current_property_precision\0QIcon\0"
    "_icon\0Frame\0ResizeFlags\0BaseItemFlag\0"
    "DrawLeft\0DrawRight\0DrawTop\0DrawBottom\0"
    "Fixed\0ResizeLeft\0ResizeRight\0ResizeTop\0"
    "ResizeBottom\0FixedPos\0Middle\0Inner\0"
    "Outer\0BaseReportItem\0LockedItem\0"
    "AutoRenamedFromBaseReport\0"
};

void CuteReport::BaseItemInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BaseItemInterface *_t = static_cast<BaseItemInterface *>(_o);
        switch (_id) {
        case 0: _t->unitChanged((*reinterpret_cast< Unit(*)>(_a[1]))); break;
        case 1: _t->geometryChanged((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 2: _t->opacityChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->frameChanged((*reinterpret_cast< Frames(*)>(_a[1]))); break;
        case 4: _t->rotationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->borderPenChanged((*reinterpret_cast< QPen(*)>(_a[1]))); break;
        case 6: _t->backgroundBrushChanged((*reinterpret_cast< QBrush(*)>(_a[1]))); break;
        case 7: _t->dpiChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->orderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->parentItemChanged((*reinterpret_cast< CuteReport::BaseItemInterface*(*)>(_a[1]))); break;
        case 11: _t->renderingStringsChanged(); break;
        case 12: _t->stdEditorListChanded((*reinterpret_cast< StdEditorPropertyList(*)>(_a[1]))); break;
        case 13: _t->borderTypeChanged((*reinterpret_cast< BorderType(*)>(_a[1]))); break;
        case 14: _t->borderTypeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->baseItemFlagsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->boundingRectChanged(); break;
        case 17: _t->printInit(); break;
        case 18: _t->printReset(); break;
        case 19: _t->printCreateBefore(); break;
        case 20: _t->printDataBefore(); break;
        case 21: _t->printBefore(); break;
        case 22: _t->printAfter(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteReport::BaseItemInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::BaseItemInterface::staticMetaObject = {
    { &ReportPluginInterface::staticMetaObject, qt_meta_stringdata_CuteReport__BaseItemInterface,
      qt_meta_data_CuteReport__BaseItemInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::BaseItemInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::BaseItemInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::BaseItemInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__BaseItemInterface))
        return static_cast<void*>(const_cast< BaseItemInterface*>(this));
    if (!strcmp(_clname, "CuteReport.ReportPluginInterface/1.0"))
        return static_cast< CuteReport::ReportPluginInterface*>(const_cast< BaseItemInterface*>(this));
    return ReportPluginInterface::qt_metacast(_clname);
}

int CuteReport::BaseItemInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReportPluginInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = enabled(); break;
        case 1: *reinterpret_cast< QRectF*>(_v) = geometry(); break;
        case 2: *reinterpret_cast<int*>(_v) = QFlag(frame()); break;
        case 3: *reinterpret_cast< qreal*>(_v) = opacity(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = rotation(); break;
        case 5: *reinterpret_cast< QPen*>(_v) = borderPen(); break;
        case 6: *reinterpret_cast< QString*>(_v) = borderTypeStr(); break;
        case 7: *reinterpret_cast< QBrush*>(_v) = backgroundBrush(); break;
        case 8: *reinterpret_cast< int*>(_v) = order(); break;
        case 9: *reinterpret_cast< int*>(_v) = baseItemFlags(); break;
        case 10: *reinterpret_cast< BorderType*>(_v) = borderType(); break;
        case 11: *reinterpret_cast< QStringList*>(_v) = _borderType_variants(); break;
        case 12: *reinterpret_cast< int*>(_v) = _currentProperty(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _current_property_description(); break;
        case 14: *reinterpret_cast< int*>(_v) = _current_property_precision(); break;
        case 15: *reinterpret_cast< QIcon*>(_v) = itemIcon(); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: setGeometry(*reinterpret_cast< QRectF*>(_v)); break;
        case 2: setFrame(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 3: setOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setRotation(*reinterpret_cast< qreal*>(_v)); break;
        case 5: setBorderPen(*reinterpret_cast< QPen*>(_v)); break;
        case 6: setBorderTypeStr(*reinterpret_cast< QString*>(_v)); break;
        case 7: setBackgroundBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 8: setOrder(*reinterpret_cast< int*>(_v)); break;
        case 9: setBaseItemFlags(*reinterpret_cast< int*>(_v)); break;
        case 10: setBorderType(*reinterpret_cast< BorderType*>(_v)); break;
        case 12: _setCurrentProperty(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CuteReport::BaseItemInterface::unitChanged(Unit _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CuteReport::BaseItemInterface::geometryChanged(QRectF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CuteReport::BaseItemInterface::opacityChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CuteReport::BaseItemInterface::frameChanged(Frames _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CuteReport::BaseItemInterface::rotationChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CuteReport::BaseItemInterface::borderPenChanged(QPen _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CuteReport::BaseItemInterface::backgroundBrushChanged(QBrush _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CuteReport::BaseItemInterface::dpiChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CuteReport::BaseItemInterface::enabledChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CuteReport::BaseItemInterface::orderChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CuteReport::BaseItemInterface::parentItemChanged(CuteReport::BaseItemInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void CuteReport::BaseItemInterface::renderingStringsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void CuteReport::BaseItemInterface::stdEditorListChanded(StdEditorPropertyList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void CuteReport::BaseItemInterface::borderTypeChanged(BorderType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void CuteReport::BaseItemInterface::borderTypeChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void CuteReport::BaseItemInterface::baseItemFlagsChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void CuteReport::BaseItemInterface::boundingRectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, 0);
}

// SIGNAL 17
void CuteReport::BaseItemInterface::printInit()
{
    QMetaObject::activate(this, &staticMetaObject, 17, 0);
}

// SIGNAL 18
void CuteReport::BaseItemInterface::printReset()
{
    QMetaObject::activate(this, &staticMetaObject, 18, 0);
}

// SIGNAL 19
void CuteReport::BaseItemInterface::printCreateBefore()
{
    QMetaObject::activate(this, &staticMetaObject, 19, 0);
}

// SIGNAL 20
void CuteReport::BaseItemInterface::printDataBefore()
{
    QMetaObject::activate(this, &staticMetaObject, 20, 0);
}

// SIGNAL 21
void CuteReport::BaseItemInterface::printBefore()
{
    QMetaObject::activate(this, &staticMetaObject, 21, 0);
}

// SIGNAL 22
void CuteReport::BaseItemInterface::printAfter()
{
    QMetaObject::activate(this, &staticMetaObject, 22, 0);
}
QT_END_MOC_NAMESPACE
