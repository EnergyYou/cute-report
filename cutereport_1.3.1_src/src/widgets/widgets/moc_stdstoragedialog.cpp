/****************************************************************************
** Meta object code from reading C++ file 'stdstoragedialog.h'
**
** Created: Sun Jan 22 16:38:39 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stdstoragedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stdstoragedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReport__StdStorageDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   30,   29,   29, 0x08,
      69,   30,   29,   29, 0x08,
     118,  101,   29,   29, 0x08,
     181,  172,   29,   29, 0x08,
     233,  221,   29,   29, 0x08,
     269,   29,   29,   29, 0x08,
     281,   29,   29,   29, 0x08,
     295,  289,   29,   29, 0x08,
     327,  318,   29,   29, 0x08,
     365,  351,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CuteReport__StdStorageDialog[] = {
    "CuteReport::StdStorageDialog\0\0index\0"
    "currentStoragetIndexChanged(int)\0"
    "currentFiltertIndexChanged(int)\0"
    "current,previous\0"
    "currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "current,\0itemDoubleClicked(QTreeWidgetItem*,int)\0"
    "item,column\0itemActivated(QTreeWidgetItem*,int)\0"
    "toRootDir()\0dirUp()\0event\0"
    "showEvent(QShowEvent*)\0filename\0"
    "filenameEdited(QString)\0oldPos,newPos\0"
    "filenameCursorPositionChanged(int,int)\0"
};

void CuteReport::StdStorageDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StdStorageDialog *_t = static_cast<StdStorageDialog *>(_o);
        switch (_id) {
        case 0: _t->currentStoragetIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentFiltertIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 3: _t->itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->toRootDir(); break;
        case 6: _t->dirUp(); break;
        case 7: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 8: _t->filenameEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->filenameCursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteReport::StdStorageDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::StdStorageDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CuteReport__StdStorageDialog,
      qt_meta_data_CuteReport__StdStorageDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::StdStorageDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::StdStorageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::StdStorageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__StdStorageDialog))
        return static_cast<void*>(const_cast< StdStorageDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CuteReport::StdStorageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
