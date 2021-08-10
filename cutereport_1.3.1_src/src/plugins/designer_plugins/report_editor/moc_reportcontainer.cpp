/****************************************************************************
** Meta object code from reading C++ file 'reportcontainer.h'
**
** Created: Sun Jan 22 17:36:26 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "reportcontainer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reportcontainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ReportContainer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      39,   16,   16,   16, 0x05,
      60,   16,   16,   16, 0x05,
      83,   16,   16,   16, 0x05,
     106,   16,   16,   16, 0x05,
     136,  130,   16,   16, 0x05,
     159,  130,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     187,  130,   16,   16, 0x08,
     214,  130,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ReportContainer[] = {
    "ReportContainer\0\0requestForNewReport()\0"
    "requestForTemplate()\0requestForOpenReport()\0"
    "requestForSaveReport()\0requestForCloseReport()\0"
    "index\0currentTabChanged(int)\0"
    "requestForRenameReport(int)\0"
    "slotCurrentTabChanged(int)\0"
    "slotTabDoubleClicked(int)\0"
};

void ReportContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReportContainer *_t = static_cast<ReportContainer *>(_o);
        switch (_id) {
        case 0: _t->requestForNewReport(); break;
        case 1: _t->requestForTemplate(); break;
        case 2: _t->requestForOpenReport(); break;
        case 3: _t->requestForSaveReport(); break;
        case 4: _t->requestForCloseReport(); break;
        case 5: _t->currentTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->requestForRenameReport((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slotCurrentTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slotTabDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ReportContainer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ReportContainer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ReportContainer,
      qt_meta_data_ReportContainer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ReportContainer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ReportContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ReportContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReportContainer))
        return static_cast<void*>(const_cast< ReportContainer*>(this));
    return QWidget::qt_metacast(_clname);
}

int ReportContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ReportContainer::requestForNewReport()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ReportContainer::requestForTemplate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ReportContainer::requestForOpenReport()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ReportContainer::requestForSaveReport()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void ReportContainer::requestForCloseReport()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void ReportContainer::currentTabChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ReportContainer::requestForRenameReport(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
