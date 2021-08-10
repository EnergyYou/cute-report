/****************************************************************************
** Meta object code from reading C++ file 'optionsdialogrendererpage.h'
**
** Created: Sun Jan 22 17:27:57 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "optionsdialogrendererpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionsdialogrendererpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OptionsDialogRendererPage[] = {

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
      44,   27,   26,   26, 0x08,
      96,   26,   26,   26, 0x08,
     111,   26,   26,   26, 0x08,
     127,   26,   26,   26, 0x08,
     140,   26,   26,   26, 0x08,
     155,   26,   26,   26, 0x08,
     179,  174,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OptionsDialogRendererPage[] = {
    "OptionsDialogRendererPage\0\0current,previous\0"
    "listIndexChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "setNewObject()\0deleteCurrent()\0"
    "setDefault()\0clearDefault()\0"
    "updateObjectList()\0name\0"
    "slotObjectNameChanged(QString)\0"
};

void OptionsDialogRendererPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OptionsDialogRendererPage *_t = static_cast<OptionsDialogRendererPage *>(_o);
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

const QMetaObjectExtraData OptionsDialogRendererPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OptionsDialogRendererPage::staticMetaObject = {
    { &OptionsDialogPageInterface::staticMetaObject, qt_meta_stringdata_OptionsDialogRendererPage,
      qt_meta_data_OptionsDialogRendererPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OptionsDialogRendererPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OptionsDialogRendererPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OptionsDialogRendererPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsDialogRendererPage))
        return static_cast<void*>(const_cast< OptionsDialogRendererPage*>(this));
    return OptionsDialogPageInterface::qt_metacast(_clname);
}

int OptionsDialogRendererPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
