/****************************************************************************
** Meta object code from reading C++ file 'rendererprocessor.h'
**
** Created: Sun Jan 22 17:30:28 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rendererprocessor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rendererprocessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RendererProcessor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      42,   29,   18,   18, 0x05,
      77,   63,   18,   18, 0x05,
     142,  116,   18,   18, 0x05,
     205,  174,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     247,   18,   18,   18, 0x0a,
     261,  253,   18,   18, 0x08,
     279,  273,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RendererProcessor[] = {
    "RendererProcessor\0\0started()\0logLevel,msg\0"
    "message(int,QString)\0withouErrors,\0"
    "done(bool,CuteReport::RenderedReport*)\0"
    "page,total,pass,passTotal\0"
    "processingPage(int,int,int,int)\0"
    "level,shortMessage,fullMessage\0"
    "log(CuteReport::LogLevel,QString,QString)\0"
    "run()\0success\0_done(bool)\0value\0"
    "scriptEngineException(QScriptValue)\0"
};

void RendererProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RendererProcessor *_t = static_cast<RendererProcessor *>(_o);
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->done((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< CuteReport::RenderedReport*(*)>(_a[2]))); break;
        case 3: _t->processingPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->log((*reinterpret_cast< CuteReport::LogLevel(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->run(); break;
        case 6: _t->_done((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->scriptEngineException((*reinterpret_cast< QScriptValue(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RendererProcessor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RendererProcessor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RendererProcessor,
      qt_meta_data_RendererProcessor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RendererProcessor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RendererProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RendererProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RendererProcessor))
        return static_cast<void*>(const_cast< RendererProcessor*>(this));
    return QObject::qt_metacast(_clname);
}

int RendererProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void RendererProcessor::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void RendererProcessor::message(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RendererProcessor::done(bool _t1, CuteReport::RenderedReport * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RendererProcessor::processingPage(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RendererProcessor::log(CuteReport::LogLevel _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
static const uint qt_meta_data_Thread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Thread[] = {
    "Thread\0"
};

void Thread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Thread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Thread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Thread,
      qt_meta_data_Thread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Thread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Thread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Thread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Thread))
        return static_cast<void*>(const_cast< Thread*>(this));
    return QThread::qt_metacast(_clname);
}

int Thread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
