/****************************************************************************
** Meta object code from reading C++ file 'reportcore.h'
**
** Created: Sun Jan 22 16:20:02 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "reportcore.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reportcore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReport__ReportCore[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      58,   39,   23,   23, 0x05,
      94,   87,   23,   23, 0x05,
     155,  140,   23,   23, 0x05,
     221,  203,   23,   23, 0x05,
     272,  248,   23,   23, 0x05,
     363,  330,   23,   23, 0x05,
     455,  432,   23,   23, 0x05,
     566,  546,   23,   23, 0x05,
     637,  614,   23,   23, 0x05,
     664,  546,   23,   23, 0x05,
     710,  614,   23,   23, 0x05,
     735,   87,   23,   23, 0x05,
     785,   87,   23,   23, 0x05,
     848,  837,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     895,  837,   23,   23, 0x0a,
     939,   23,   23,   23, 0x08,
     969,  958,   23,   23, 0x08,
    1006,  989,   23,   23, 0x08,
    1062, 1036,   23,   23, 0x08,
    1103,   87,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CuteReport__ReportCore[] = {
    "CuteReport::ReportCore\0\0finished(bool)\0"
    "moduleName,message\0syncMessage(QString,QString)\0"
    "report\0rendererStarted(CuteReport::ReportInterface*)\0"
    "report,success\0"
    "rendererDone(CuteReport::ReportInterface*,bool)\0"
    "reportUrl,success\0rendererDone(QString,bool)\0"
    "report,logLevel,message\0"
    "rendererMessage(CuteReport::ReportInterface*,int,QString)\0"
    "report,page,total,pass,passTotal\0"
    "rendererProcessingPage(CuteReport::ReportInterface*,int,int,int,int)\0"
    "report,page,pageNumber\0"
    "rendererProcessedPage(CuteReport::ReportInterface*,CuteReport::Rendere"
    "dPageInterface*,int)\0"
    "report,successfully\0"
    "printingDone(CuteReport::ReportInterface*,bool)\0"
    "reportUrl,successfully\0"
    "printingDone(QString,bool)\0"
    "exportDone(CuteReport::ReportInterface*,bool)\0"
    "exportDone(QString,bool)\0"
    "reportObjectCreated(CuteReport::ReportInterface*)\0"
    "reportObjectDestroyed(CuteReport::ReportInterface*)\0"
    "type,value\0metricUpdated(CuteReport::MetricType,QVariant)\0"
    "sendMetric(CuteReport::MetricType,QVariant)\0"
    "_rendererStarted()\0successful\0"
    "_rendererDone(bool)\0logLevel,message\0"
    "_rendererMessage(int,QString)\0"
    "page,total,pass,passTotal\0"
    "_rendererProcessingPage(int,int,int,int)\0"
    "_reportObjectCreated(CuteReport::ReportInterface*)\0"
};

void CuteReport::ReportCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReportCore *_t = static_cast<ReportCore *>(_o);
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->syncMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->rendererStarted((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 3: _t->rendererDone((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->rendererDone((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->rendererMessage((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->rendererProcessingPage((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 7: _t->rendererProcessedPage((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1])),(*reinterpret_cast< CuteReport::RenderedPageInterface*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->printingDone((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->printingDone((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->exportDone((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->exportDone((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->reportObjectCreated((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 13: _t->reportObjectDestroyed((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 14: _t->metricUpdated((*reinterpret_cast< CuteReport::MetricType(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 15: _t->sendMetric((*reinterpret_cast< CuteReport::MetricType(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 16: _t->_rendererStarted(); break;
        case 17: _t->_rendererDone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->_rendererMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: _t->_rendererProcessingPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 20: _t->_reportObjectCreated((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteReport::ReportCore::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::ReportCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CuteReport__ReportCore,
      qt_meta_data_CuteReport__ReportCore, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::ReportCore::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::ReportCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::ReportCore::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__ReportCore))
        return static_cast<void*>(const_cast< ReportCore*>(this));
    return QObject::qt_metacast(_clname);
}

int CuteReport::ReportCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void CuteReport::ReportCore::finished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CuteReport::ReportCore::syncMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CuteReport::ReportCore::rendererStarted(CuteReport::ReportInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CuteReport::ReportCore::rendererDone(CuteReport::ReportInterface * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CuteReport::ReportCore::rendererDone(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CuteReport::ReportCore::rendererMessage(CuteReport::ReportInterface * _t1, int _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CuteReport::ReportCore::rendererProcessingPage(CuteReport::ReportInterface * _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CuteReport::ReportCore::rendererProcessedPage(CuteReport::ReportInterface * _t1, CuteReport::RenderedPageInterface * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CuteReport::ReportCore::printingDone(CuteReport::ReportInterface * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CuteReport::ReportCore::printingDone(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CuteReport::ReportCore::exportDone(CuteReport::ReportInterface * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void CuteReport::ReportCore::exportDone(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CuteReport::ReportCore::reportObjectCreated(CuteReport::ReportInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void CuteReport::ReportCore::reportObjectDestroyed(CuteReport::ReportInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void CuteReport::ReportCore::metricUpdated(CuteReport::MetricType _t1, const QVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
