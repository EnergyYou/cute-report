/****************************************************************************
** Meta object code from reading C++ file 'flagslist.h'
**
** Created: Sun Jan 22 16:07:23 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "flagslist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flagslist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FlagsList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x09,
      22,   10,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FlagsList[] = {
    "FlagsList\0\0checkAll()\0uncheckAll()\0"
};

void FlagsList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FlagsList *_t = static_cast<FlagsList *>(_o);
        switch (_id) {
        case 0: _t->checkAll(); break;
        case 1: _t->uncheckAll(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FlagsList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FlagsList::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FlagsList,
      qt_meta_data_FlagsList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FlagsList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FlagsList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FlagsList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FlagsList))
        return static_cast<void*>(const_cast< FlagsList*>(this));
    if (!strcmp(_clname, "Ui::flagsDialog"))
        return static_cast< Ui::flagsDialog*>(const_cast< FlagsList*>(this));
    return QDialog::qt_metacast(_clname);
}

int FlagsList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
