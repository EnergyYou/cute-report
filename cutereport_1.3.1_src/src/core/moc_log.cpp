/****************************************************************************
** Meta object code from reading C++ file 'log.h'
**
** Created: Sun Jan 22 16:19:59 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "log/log.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'log.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReport__Log[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      58,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     115,   16,   16,   16, 0x08,
     122,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CuteReport__Log[] = {
    "CuteReport::Log\0\0"
    "logLevel,sender,shortMessage,fullMessage\0"
    "logMessage(CuteReport::LogLevel,QString,QString,QString)\0"
    "init()\0initMouseHandler()\0"
};

void CuteReport::Log::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Log *_t = static_cast<Log *>(_o);
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< CuteReport::LogLevel(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: _t->init(); break;
        case 2: _t->initMouseHandler(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteReport::Log::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::Log::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CuteReport__Log,
      qt_meta_data_CuteReport__Log, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::Log::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::Log::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::Log::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__Log))
        return static_cast<void*>(const_cast< Log*>(this));
    return QObject::qt_metacast(_clname);
}

int CuteReport::Log::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CuteReport::Log::logMessage(CuteReport::LogLevel _t1, const QString & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
