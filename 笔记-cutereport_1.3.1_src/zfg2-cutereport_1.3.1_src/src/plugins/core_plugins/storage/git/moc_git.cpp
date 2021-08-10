/****************************************************************************
** Meta object code from reading C++ file 'git.h'
**
** Created: Wed Feb 8 11:29:28 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "git.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'git.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StorageGit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       6,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      38,   11,   11,   11, 0x05,
      64,   11,   11,   11, 0x05,
      86,   11,   11,   11, 0x05,
     111,   11,   11,   11, 0x05,
     140,   11,   11,   11, 0x05,
     175,  170,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     196,   11,   11,   11, 0x08,

 // properties: name, type, flags
     226,  218, 0x0a495003,
     236,  218, 0x0a495103,
     246,  218, 0x0a495103,
     252,  218, 0x0a495103,
     261,  218, 0x0a495103,
     280,  275, 0x01495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       5,
       4,

       0        // eod
};

static const char qt_meta_stringdata_StorageGit[] = {
    "StorageGit\0\0remoteUrlChanged(QString)\0"
    "localPathChanged(QString)\0"
    "loginChanged(QString)\0passwordChanged(QString)\0"
    "askForOverwriteChanged(bool)\0"
    "gitBinaryPathChanged(QString)\0text\0"
    "syncMessage(QString)\0syncProcessFinished()\0"
    "QString\0remoteURL\0localPath\0login\0"
    "password\0gitBinaryPath\0bool\0askForOverwrite\0"
};

void StorageGit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StorageGit *_t = static_cast<StorageGit *>(_o);
        switch (_id) {
        case 0: _t->remoteUrlChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->localPathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->loginChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->passwordChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->askForOverwriteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->gitBinaryPathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->syncMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->syncProcessFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StorageGit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StorageGit::staticMetaObject = {
    { &CuteReport::StorageInterface::staticMetaObject, qt_meta_stringdata_StorageGit,
      qt_meta_data_StorageGit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StorageGit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StorageGit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StorageGit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StorageGit))
        return static_cast<void*>(const_cast< StorageGit*>(this));
    if (!strcmp(_clname, "CuteReport.StorageInterface/1.0"))
        return static_cast< CuteReport::StorageInterface*>(const_cast< StorageGit*>(this));
    typedef CuteReport::StorageInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int StorageGit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::StorageInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = remoteUrl(); break;
        case 1: *reinterpret_cast< QString*>(_v) = localPath(); break;
        case 2: *reinterpret_cast< QString*>(_v) = login(); break;
        case 3: *reinterpret_cast< QString*>(_v) = password(); break;
        case 4: *reinterpret_cast< QString*>(_v) = gitBinaryPath(); break;
        case 5: *reinterpret_cast< bool*>(_v) = askForOverwrite(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRemoteUrl(*reinterpret_cast< QString*>(_v)); break;
        case 1: setLocalPath(*reinterpret_cast< QString*>(_v)); break;
        case 2: setLogin(*reinterpret_cast< QString*>(_v)); break;
        case 3: setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 4: setGitBinaryPath(*reinterpret_cast< QString*>(_v)); break;
        case 5: setAskForOverwrite(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StorageGit::remoteUrlChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StorageGit::localPathChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StorageGit::loginChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StorageGit::passwordChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StorageGit::askForOverwriteChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StorageGit::gitBinaryPathChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StorageGit::syncMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
