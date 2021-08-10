/****************************************************************************
** Meta object code from reading C++ file 'dummyitem.h'
**
** Created: Sun Jan 22 16:20:37 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dummyitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dummyitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReport__DummyItem[] = {

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

static const char qt_meta_stringdata_CuteReport__DummyItem[] = {
    "CuteReport::DummyItem\0"
};

void CuteReport::DummyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CuteReport::DummyItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::DummyItem::staticMetaObject = {
    { &CuteReport::ItemInterface::staticMetaObject, qt_meta_stringdata_CuteReport__DummyItem,
      qt_meta_data_CuteReport__DummyItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::DummyItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::DummyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::DummyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__DummyItem))
        return static_cast<void*>(const_cast< DummyItem*>(this));
    if (!strcmp(_clname, "CuteReport.ItemInterface/1.0"))
        return static_cast< CuteReport::ItemInterface*>(const_cast< DummyItem*>(this));
    typedef CuteReport::ItemInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int CuteReport::DummyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::ItemInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
