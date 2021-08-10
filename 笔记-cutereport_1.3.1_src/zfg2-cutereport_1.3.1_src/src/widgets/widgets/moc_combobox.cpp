/****************************************************************************
** Meta object code from reading C++ file 'combobox.h'
**
** Created: Wed Feb 8 11:24:10 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "combobox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'combobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReportComboBox[] = {

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

 // methods: signature, parameters, type, tag, flags
      23,   20,   19,   19, 0x02,
      78,   65,   19,   19, 0x02,
     118,  111,  102,   19, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_CuteReportComboBox[] = {
    "CuteReportComboBox\0\0ds\0"
    "setDataset(CuteReport::DatasetInterface*)\0"
    "column,value\0setCurrent(int,QString)\0"
    "QVariant\0column\0current(int)\0"
};

void CuteReportComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CuteReportComboBox *_t = static_cast<CuteReportComboBox *>(_o);
        switch (_id) {
        case 0: _t->setDataset((*reinterpret_cast< CuteReport::DatasetInterface*(*)>(_a[1]))); break;
        case 1: _t->setCurrent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: { QVariant _r = _t->current((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteReportComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReportComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_CuteReportComboBox,
      qt_meta_data_CuteReportComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReportComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReportComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReportComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReportComboBox))
        return static_cast<void*>(const_cast< CuteReportComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int CuteReportComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
