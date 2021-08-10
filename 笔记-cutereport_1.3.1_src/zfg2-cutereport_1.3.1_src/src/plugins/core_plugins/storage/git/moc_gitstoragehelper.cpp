/****************************************************************************
** Meta object code from reading C++ file 'gitstoragehelper.h'
**
** Created: Wed Feb 8 11:29:29 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gitstoragehelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gitstoragehelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GitStorageHelper[] = {

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
      18,   17,   17,   17, 0x0a,
      25,   17,   17,   17, 0x0a,
      40,   32,   17,   17, 0x08,
      65,   17,   17,   17, 0x08,
      76,   17,   17,   17, 0x08,
      95,   17,   17,   17, 0x08,
     125,   17,  120,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GitStorageHelper[] = {
    "GitStorageHelper\0\0load()\0save()\0message\0"
    "showSyncMessage(QString)\0slotSync()\0"
    "slotBinaryBrowse()\0localPathChooseClicked()\0"
    "bool\0setGitVersion()\0"
};

void GitStorageHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GitStorageHelper *_t = static_cast<GitStorageHelper *>(_o);
        switch (_id) {
        case 0: _t->load(); break;
        case 1: _t->save(); break;
        case 2: _t->showSyncMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotSync(); break;
        case 4: _t->slotBinaryBrowse(); break;
        case 5: _t->localPathChooseClicked(); break;
        case 6: { bool _r = _t->setGitVersion();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GitStorageHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GitStorageHelper::staticMetaObject = {
    { &CuteReport::StorageHelperInterface::staticMetaObject, qt_meta_stringdata_GitStorageHelper,
      qt_meta_data_GitStorageHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GitStorageHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GitStorageHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GitStorageHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GitStorageHelper))
        return static_cast<void*>(const_cast< GitStorageHelper*>(this));
    typedef CuteReport::StorageHelperInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int GitStorageHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::StorageHelperInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
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
