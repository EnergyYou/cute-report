/****************************************************************************
** Meta object code from reading C++ file 'creategradientdialog.h'
**
** Created: Wed Feb 8 11:21:43 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "creategradientdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'creategradientdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CreateGradientDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,
      33,   21,   21,   21, 0x08,
      44,   21,   21,   21, 0x08,
      58,   21,   21,   21, 0x08,
      85,   74,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CreateGradientDialog[] = {
    "CreateGradientDialog\0\0addPoint()\0"
    "delPoint()\0chooseColor()\0updatePreview()\0"
    "row,column\0slotCellDoubleClicked(int,int)\0"
};

void CreateGradientDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CreateGradientDialog *_t = static_cast<CreateGradientDialog *>(_o);
        switch (_id) {
        case 0: _t->addPoint(); break;
        case 1: _t->delPoint(); break;
        case 2: _t->chooseColor(); break;
        case 3: _t->updatePreview(); break;
        case 4: _t->slotCellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CreateGradientDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CreateGradientDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CreateGradientDialog,
      qt_meta_data_CreateGradientDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CreateGradientDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CreateGradientDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CreateGradientDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CreateGradientDialog))
        return static_cast<void*>(const_cast< CreateGradientDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CreateGradientDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
