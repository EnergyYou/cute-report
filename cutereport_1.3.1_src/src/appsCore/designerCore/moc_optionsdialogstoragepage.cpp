/****************************************************************************
** Meta object code from reading C++ file 'optionsdialogstoragepage.h'
**
** Created: Sun Jan 22 17:27:49 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "optionsdialogstoragepage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionsdialogstoragepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OptionsDialogStoragePage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   26,   25,   25, 0x08,
     103,   25,   25,   25, 0x08,
     125,   25,   25,   25, 0x08,
     148,   25,   25,   25, 0x08,
     168,   25,   25,   25, 0x08,
     190,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OptionsDialogStoragePage[] = {
    "OptionsDialogStoragePage\0\0current,previous\0"
    "storagesListIndexChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "setNewStorageModule()\0deleteCurrentStorage()\0"
    "setDefaultStorage()\0clearDefaultStorage()\0"
    "updateStorageList()\0"
};

void OptionsDialogStoragePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OptionsDialogStoragePage *_t = static_cast<OptionsDialogStoragePage *>(_o);
        switch (_id) {
        case 0: _t->storagesListIndexChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->setNewStorageModule(); break;
        case 2: _t->deleteCurrentStorage(); break;
        case 3: _t->setDefaultStorage(); break;
        case 4: _t->clearDefaultStorage(); break;
        case 5: _t->updateStorageList(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OptionsDialogStoragePage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OptionsDialogStoragePage::staticMetaObject = {
    { &OptionsDialogPageInterface::staticMetaObject, qt_meta_stringdata_OptionsDialogStoragePage,
      qt_meta_data_OptionsDialogStoragePage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OptionsDialogStoragePage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OptionsDialogStoragePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OptionsDialogStoragePage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsDialogStoragePage))
        return static_cast<void*>(const_cast< OptionsDialogStoragePage*>(this));
    return OptionsDialogPageInterface::qt_metacast(_clname);
}

int OptionsDialogStoragePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OptionsDialogPageInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
