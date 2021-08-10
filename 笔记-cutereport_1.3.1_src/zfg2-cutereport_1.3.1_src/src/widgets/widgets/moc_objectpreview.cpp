/****************************************************************************
** Meta object code from reading C++ file 'objectpreview.h'
**
** Created: Wed Feb 8 11:24:12 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "objectpreview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objectpreview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReport__ObjectPreview[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   27,   26,   26, 0x08,
      52,   26,   26,   26, 0x28,
      68,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CuteReport__ObjectPreview[] = {
    "CuteReport::ObjectPreview\0\0delay\0"
    "delayedResize(int)\0delayedResize()\0"
    "doResize()\0"
};

void CuteReport::ObjectPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ObjectPreview *_t = static_cast<ObjectPreview *>(_o);
        switch (_id) {
        case 0: _t->delayedResize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->delayedResize(); break;
        case 2: _t->doResize(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteReport::ObjectPreview::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::ObjectPreview::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CuteReport__ObjectPreview,
      qt_meta_data_CuteReport__ObjectPreview, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::ObjectPreview::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::ObjectPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::ObjectPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__ObjectPreview))
        return static_cast<void*>(const_cast< ObjectPreview*>(this));
    return QWidget::qt_metacast(_clname);
}

int CuteReport::ObjectPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
