/****************************************************************************
** Meta object code from reading C++ file 'pagemanipulator.h'
**
** Created: Wed Feb 8 11:26:04 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pagemanipulator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pagemanipulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageManipulator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      30,   16,   16,   16, 0x08,
      44,   16,   16,   16, 0x08,
      59,   16,   16,   16, 0x08,
      75,   73,   16,   16, 0x08,
      95,   73,   16,   16, 0x08,
     117,   73,   16,   16, 0x08,
     140,   73,   16,   16, 0x08,
     161,   16,   16,   16, 0x08,
     180,   16,   16,   16, 0x08,
     207,  200,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PageManipulator[] = {
    "PageManipulator\0\0slotZoomIn()\0"
    "slotZoomOut()\0slotZoomOrig()\0slotZoomFit()\0"
    "b\0slotMagnetTop(bool)\0slotMagnetRight(bool)\0"
    "slotMagnetBottom(bool)\0slotMagnetLeft(bool)\0"
    "slotBringForward()\0slotBringBackward()\0"
    "object\0activeObjectChanged(QObject*)\0"
};

void PageManipulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageManipulator *_t = static_cast<PageManipulator *>(_o);
        switch (_id) {
        case 0: _t->slotZoomIn(); break;
        case 1: _t->slotZoomOut(); break;
        case 2: _t->slotZoomOrig(); break;
        case 3: _t->slotZoomFit(); break;
        case 4: _t->slotMagnetTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slotMagnetRight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slotMagnetBottom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->slotMagnetLeft((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slotBringForward(); break;
        case 9: _t->slotBringBackward(); break;
        case 10: _t->activeObjectChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PageManipulator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageManipulator::staticMetaObject = {
    { &CuteReport::PageManipulatorInterface::staticMetaObject, qt_meta_stringdata_PageManipulator,
      qt_meta_data_PageManipulator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageManipulator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageManipulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageManipulator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageManipulator))
        return static_cast<void*>(const_cast< PageManipulator*>(this));
    typedef CuteReport::PageManipulatorInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PageManipulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::PageManipulatorInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
