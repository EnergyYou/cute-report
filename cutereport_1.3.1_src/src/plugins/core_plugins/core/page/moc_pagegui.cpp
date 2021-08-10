/****************************************************************************
** Meta object code from reading C++ file 'pagegui.h'
**
** Created: Sun Jan 22 17:23:33 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pagegui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagegui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,    9,    8,    8, 0x05,
      46,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   61,    8,    8, 0x0a,
     114,  109,    8,    8, 0x0a,
     171,  166,    8,    8, 0x08,
     200,  195,    8,    8, 0x08,
     229,    8,    8,    8, 0x08,
     255,  249,    8,    8, 0x08,
     299,  249,    8,    8, 0x08,
     344,  249,    8,    8, 0x08,
     399,  394,    8,    8, 0x08,
     435,  431,    8,    8, 0x08,
     461,  455,    8,    8, 0x08,
     496,  491,    8,    8, 0x08,
     530,    8,    8,    8, 0x08,
     551,  544,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PageGUI[] = {
    "PageGUI\0\0object\0activeObjectChanged(QObject*)\0"
    "sceneUpdated()\0className,pagePos\0"
    "slotDropItem(QString,QPointF)\0item\0"
    "itemBeforeDestroyed(CuteReport::BaseItemInterface*)\0"
    "view\0viewDestroyed(QObject*)\0size\0"
    "slotPaperSizeChanged(QSizeF)\0"
    "slotMarginChanged()\0event\0"
    "slotMousePressed(QGraphicsSceneMouseEvent*)\0"
    "slotMouseReleased(QGraphicsSceneMouseEvent*)\0"
    "slotMouseDoubleClicked(QGraphicsSceneMouseEvent*)\0"
    "rect\0slotItemGeometryChanged(QRectF)\0"
    "dpi\0slotDPIChanged(int)\0color\0"
    "slotBackgroundChanged(QColor)\0unit\0"
    "slotUnitChanged(CuteReport::Unit)\0"
    "updateScene()\0item,e\0"
    "slotItemClickedBySelector(CuteReport::BaseItemInterface*,QGraphicsScen"
    "eMouseEvent*)\0"
};

void PageGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageGUI *_t = static_cast<PageGUI *>(_o);
        switch (_id) {
        case 0: _t->activeObjectChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->sceneUpdated(); break;
        case 2: _t->slotDropItem((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 3: _t->itemBeforeDestroyed((*reinterpret_cast< CuteReport::BaseItemInterface*(*)>(_a[1]))); break;
        case 4: _t->viewDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 5: _t->slotPaperSizeChanged((*reinterpret_cast< QSizeF(*)>(_a[1]))); break;
        case 6: _t->slotMarginChanged(); break;
        case 7: _t->slotMousePressed((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1]))); break;
        case 8: _t->slotMouseReleased((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1]))); break;
        case 9: _t->slotMouseDoubleClicked((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1]))); break;
        case 10: _t->slotItemGeometryChanged((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 11: _t->slotDPIChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->slotBackgroundChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 13: _t->slotUnitChanged((*reinterpret_cast< CuteReport::Unit(*)>(_a[1]))); break;
        case 14: _t->updateScene(); break;
        case 15: _t->slotItemClickedBySelector((*reinterpret_cast< CuteReport::BaseItemInterface*(*)>(_a[1])),(*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PageGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageGUI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PageGUI,
      qt_meta_data_PageGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageGUI))
        return static_cast<void*>(const_cast< PageGUI*>(this));
    return QObject::qt_metacast(_clname);
}

int PageGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void PageGUI::activeObjectChanged(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PageGUI::sceneUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_PageView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_PageView[] = {
    "PageView\0"
};

void PageView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PageView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageView::staticMetaObject = {
    { &CuteReport::PageViewInterface::staticMetaObject, qt_meta_stringdata_PageView,
      qt_meta_data_PageView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageView))
        return static_cast<void*>(const_cast< PageView*>(this));
    if (!strcmp(_clname, "CuteReport.PageViewInterface/1.0"))
        return static_cast< CuteReport::PageViewInterface*>(const_cast< PageView*>(this));
    typedef CuteReport::PageViewInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PageView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::PageViewInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
