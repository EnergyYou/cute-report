/****************************************************************************
** Meta object code from reading C++ file 'optionsdialogprinterpage.h'
**
** Created: Sun Jan 22 17:27:58 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "optionsdialogprinterpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionsdialogprinterpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OptionsDialogPrinterPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   26,   25,   25, 0x08,
      95,   25,   25,   25, 0x08,
     110,   25,   25,   25, 0x08,
     126,   25,   25,   25, 0x08,
     139,   25,   25,   25, 0x08,
     154,   25,   25,   25, 0x08,
     178,  173,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OptionsDialogPrinterPage[] = {
    "OptionsDialogPrinterPage\0\0current,previous\0"
    "listIndexChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "setNewObject()\0deleteCurrent()\0"
    "setDefault()\0clearDefault()\0"
    "updateObjectList()\0name\0"
    "slotObjectNameChanged(QString)\0"
};

void OptionsDialogPrinterPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OptionsDialogPrinterPage *_t = static_cast<OptionsDialogPrinterPage *>(_o);
        switch (_id) {
        case 0: _t->listIndexChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->setNewObject(); break;
        case 2: _t->deleteCurrent(); break;
        case 3: _t->setDefault(); break;
        case 4: _t->clearDefault(); break;
        case 5: _t->updateObjectList(); break;
        case 6: _t->slotObjectNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OptionsDialogPrinterPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OptionsDialogPrinterPage::staticMetaObject = {
    { &OptionsDialogPageInterface::staticMetaObject, qt_meta_stringdata_OptionsDialogPrinterPage,
      qt_meta_data_OptionsDialogPrinterPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OptionsDialogPrinterPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OptionsDialogPrinterPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OptionsDialogPrinterPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsDialogPrinterPage))
        return static_cast<void*>(const_cast< OptionsDialogPrinterPage*>(this));
    return OptionsDialogPageInterface::qt_metacast(_clname);
}

int OptionsDialogPrinterPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OptionsDialogPageInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
