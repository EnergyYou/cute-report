/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Feb 8 11:25:16 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      29,   27,   11,   11, 0x05,
      88,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     116,  110,   11,   11, 0x08,
     148,  141,   11,   11, 0x08,
     198,   11,   11,   11, 0x08,
     244,  141,   11,   11, 0x08,
     301,  295,   11,   11, 0x08,
     323,   11,   11,   11, 0x08,
     335,   11,   11,   11, 0x08,
     349,   11,   11,   11, 0x08,
     366,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0closeRequest()\0,\0"
    "stdActionTriggered(CuteDesigner::Core::StdAction,QAction*)\0"
    "optionsDialogClosed()\0event\0"
    "closeEvent(QCloseEvent*)\0report\0"
    "slotNewReport_after(CuteReport::ReportInterface*)\0"
    "slotNewPage_after(CuteReport::PageInterface*)\0"
    "slotLoadReport_after(CuteReport::ReportInterface*)\0"
    "index\0slotTabsSwitched(int)\0slotAbout()\0"
    "slotOptions()\0slotUpdateTabs()\0"
    "slotStdActionTriggered()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->closeRequest(); break;
        case 1: _t->stdActionTriggered((*reinterpret_cast< CuteDesigner::Core::StdAction(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 2: _t->optionsDialogClosed(); break;
        case 3: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 4: _t->slotNewReport_after((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 5: _t->slotNewPage_after((*reinterpret_cast< CuteReport::PageInterface*(*)>(_a[1]))); break;
        case 6: _t->slotLoadReport_after((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 7: _t->slotTabsSwitched((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slotAbout(); break;
        case 9: _t->slotOptions(); break;
        case 10: _t->slotUpdateTabs(); break;
        case 11: _t->slotStdActionTriggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::closeRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MainWindow::stdActionTriggered(CuteDesigner::Core::StdAction _t1, QAction * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::optionsDialogClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
