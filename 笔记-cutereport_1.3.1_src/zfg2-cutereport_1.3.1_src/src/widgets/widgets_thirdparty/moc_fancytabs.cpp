/****************************************************************************
** Meta object code from reading C++ file 'fancytabs.h'
**
** Created: Wed Feb 8 11:24:30 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fancytabs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fancytabs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Core__Internal__FancyTabProxyStyle[] = {

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

static const char qt_meta_stringdata_Core__Internal__FancyTabProxyStyle[] = {
    "Core::Internal::FancyTabProxyStyle\0"
};

void Core::Internal::FancyTabProxyStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Core::Internal::FancyTabProxyStyle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Core::Internal::FancyTabProxyStyle::staticMetaObject = {
    { &QProxyStyle::staticMetaObject, qt_meta_stringdata_Core__Internal__FancyTabProxyStyle,
      qt_meta_data_Core__Internal__FancyTabProxyStyle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Core::Internal::FancyTabProxyStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Core::Internal::FancyTabProxyStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Core::Internal::FancyTabProxyStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Core__Internal__FancyTabProxyStyle))
        return static_cast<void*>(const_cast< FancyTabProxyStyle*>(this));
    return QProxyStyle::qt_metacast(_clname);
}

int Core::Internal::FancyTabProxyStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProxyStyle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Core__Internal__TabBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Core__Internal__TabBar[] = {
    "Core::Internal::TabBar\0\0tabDoubleClicked(int)\0"
};

void Core::Internal::TabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TabBar *_t = static_cast<TabBar *>(_o);
        switch (_id) {
        case 0: _t->tabDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Core::Internal::TabBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Core::Internal::TabBar::staticMetaObject = {
    { &QTabBar::staticMetaObject, qt_meta_stringdata_Core__Internal__TabBar,
      qt_meta_data_Core__Internal__TabBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Core::Internal::TabBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Core::Internal::TabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Core::Internal::TabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Core__Internal__TabBar))
        return static_cast<void*>(const_cast< TabBar*>(this));
    return QTabBar::qt_metacast(_clname);
}

int Core::Internal::TabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Core::Internal::TabBar::tabDoubleClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Core__Internal__FancyTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,

 // properties: name, type, flags
      48,   42, 0x87095103,

       0        // eod
};

static const char qt_meta_stringdata_Core__Internal__FancyTab[] = {
    "Core::Internal::FancyTab\0\0doubleClicked()\0"
    "float\0fader\0"
};

void Core::Internal::FancyTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FancyTab *_t = static_cast<FancyTab *>(_o);
        switch (_id) {
        case 0: _t->doubleClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Core::Internal::FancyTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Core::Internal::FancyTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Core__Internal__FancyTab,
      qt_meta_data_Core__Internal__FancyTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Core::Internal::FancyTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Core::Internal::FancyTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Core::Internal::FancyTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Core__Internal__FancyTab))
        return static_cast<void*>(const_cast< FancyTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int Core::Internal::FancyTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = fader(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFader(*reinterpret_cast< float*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Core::Internal::FancyTab::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_Core__Internal__FancyTabBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x05,
      49,   28,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Core__Internal__FancyTabBar[] = {
    "Core::Internal::FancyTabBar\0\0"
    "currentChanged(int)\0tabDoubleClicked(int)\0"
    "emitCurrentIndex()\0"
};

void Core::Internal::FancyTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FancyTabBar *_t = static_cast<FancyTabBar *>(_o);
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->tabDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->emitCurrentIndex(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Core::Internal::FancyTabBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Core::Internal::FancyTabBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Core__Internal__FancyTabBar,
      qt_meta_data_Core__Internal__FancyTabBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Core::Internal::FancyTabBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Core::Internal::FancyTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Core::Internal::FancyTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Core__Internal__FancyTabBar))
        return static_cast<void*>(const_cast< FancyTabBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int Core::Internal::FancyTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void Core::Internal::FancyTabBar::currentChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Core::Internal::FancyTabBar::tabDoubleClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_Core__Internal__FancyTabWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      38,   32,   31,   31, 0x05,
      58,   31,   31,   31, 0x05,
      85,   80,   31,   31, 0x05,

 // slots: signature, parameters, type, tag, flags
     119,   32,   31,   31, 0x0a,
     140,   80,   31,   31, 0x0a,
     154,   80,   31,   31, 0x0a,
     167,   31,   31,   31, 0x0a,
     181,   32,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Core__Internal__FancyTabWidget[] = {
    "Core::Internal::FancyTabWidget\0\0index\0"
    "CurrentChanged(int)\0tabDoubleClicked(int)\0"
    "mode\0ModeChanged(FancyTabWidget::Mode)\0"
    "SetCurrentIndex(int)\0SetMode(Mode)\0"
    "SetMode(int)\0updateState()\0ShowWidget(int)\0"
};

void Core::Internal::FancyTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FancyTabWidget *_t = static_cast<FancyTabWidget *>(_o);
        switch (_id) {
        case 0: _t->CurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->tabDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ModeChanged((*reinterpret_cast< FancyTabWidget::Mode(*)>(_a[1]))); break;
        case 3: _t->SetCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SetMode((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        case 5: _t->SetMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateState(); break;
        case 7: _t->ShowWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Core::Internal::FancyTabWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Core::Internal::FancyTabWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Core__Internal__FancyTabWidget,
      qt_meta_data_Core__Internal__FancyTabWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Core::Internal::FancyTabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Core::Internal::FancyTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Core::Internal::FancyTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Core__Internal__FancyTabWidget))
        return static_cast<void*>(const_cast< FancyTabWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Core::Internal::FancyTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void Core::Internal::FancyTabWidget::CurrentChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Core::Internal::FancyTabWidget::tabDoubleClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Core::Internal::FancyTabWidget::ModeChanged(FancyTabWidget::Mode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_Core__Internal__FancyTabContainer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      41,   35,   34,   34, 0x05,
      61,   34,   34,   34, 0x05,
      88,   83,   34,   34, 0x05,

 // slots: signature, parameters, type, tag, flags
     125,   35,   34,   34, 0x0a,
     146,   83,   34,   34, 0x0a,
     160,   83,   34,   34, 0x0a,
     173,   34,   34,   34, 0x0a,
     187,   35,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Core__Internal__FancyTabContainer[] = {
    "Core::Internal::FancyTabContainer\0\0"
    "index\0currentChanged(int)\0"
    "tabDoubleClicked(int)\0mode\0"
    "modeChanged(FancyTabContainer::Mode)\0"
    "setCurrentIndex(int)\0setMode(Mode)\0"
    "setMode(int)\0updateState()\0showWidget(int)\0"
};

void Core::Internal::FancyTabContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FancyTabContainer *_t = static_cast<FancyTabContainer *>(_o);
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->tabDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->modeChanged((*reinterpret_cast< FancyTabContainer::Mode(*)>(_a[1]))); break;
        case 3: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setMode((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        case 5: _t->setMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateState(); break;
        case 7: _t->showWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Core::Internal::FancyTabContainer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Core::Internal::FancyTabContainer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Core__Internal__FancyTabContainer,
      qt_meta_data_Core__Internal__FancyTabContainer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Core::Internal::FancyTabContainer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Core::Internal::FancyTabContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Core::Internal::FancyTabContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Core__Internal__FancyTabContainer))
        return static_cast<void*>(const_cast< FancyTabContainer*>(this));
    return QWidget::qt_metacast(_clname);
}

int Core::Internal::FancyTabContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void Core::Internal::FancyTabContainer::currentChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Core::Internal::FancyTabContainer::tabDoubleClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Core::Internal::FancyTabContainer::modeChanged(FancyTabContainer::Mode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
