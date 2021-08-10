/****************************************************************************
** Meta object code from reading C++ file 'pageeditorcontainer.h'
**
** Created: Sun Jan 22 17:36:55 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pageeditorcontainer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageeditorcontainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PageEditorContainer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   21,   20,   20, 0x05,
      71,   62,   20,   20, 0x05,
     101,   62,   20,   20, 0x05,
     130,   62,   20,   20, 0x05,
     160,   62,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     187,   20,   20,   20, 0x08,
     207,   20,   20,   20, 0x08,
     227,   20,   20,   20, 0x08,
     246,   20,   20,   20, 0x08,
     279,  273,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PageEditorContainer[] = {
    "PageEditorContainer\0\0pluginName\0"
    "requestForCreatePage(QString)\0pageName\0"
    "requestForDeletePage(QString)\0"
    "requestForClonePage(QString)\0"
    "requestForRenamePage(QString)\0"
    "currentTabChanged(QString)\0"
    "slotDeleteClicked()\0slotCreateClicked()\0"
    "slotCloneClicked()\0slotCurrentTabChanged(int)\0"
    "index\0slotTabDoubleClicked(int)\0"
};

void PageEditorContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageEditorContainer *_t = static_cast<PageEditorContainer *>(_o);
        switch (_id) {
        case 0: _t->requestForCreatePage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->requestForDeletePage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->requestForClonePage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->requestForRenamePage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->currentTabChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->slotDeleteClicked(); break;
        case 6: _t->slotCreateClicked(); break;
        case 7: _t->slotCloneClicked(); break;
        case 8: _t->slotCurrentTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->slotTabDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PageEditorContainer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PageEditorContainer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PageEditorContainer,
      qt_meta_data_PageEditorContainer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageEditorContainer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageEditorContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageEditorContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageEditorContainer))
        return static_cast<void*>(const_cast< PageEditorContainer*>(this));
    return QWidget::qt_metacast(_clname);
}

int PageEditorContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void PageEditorContainer::requestForCreatePage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PageEditorContainer::requestForDeletePage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PageEditorContainer::requestForClonePage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PageEditorContainer::requestForRenamePage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PageEditorContainer::currentTabChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
