/****************************************************************************
** Meta object code from reading C++ file 'reportpreview.h'
**
** Created: Sun Jan 22 16:38:38 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "reportpreview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reportpreview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CuteReport__ReportPreview[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x05,
      36,   26,   26,   26, 0x05,
      51,   26,   26,   26, 0x05,
      62,   26,   26,   26, 0x05,
      74,   26,   26,   26, 0x05,
      85,   26,   26,   26, 0x05,
      93,   26,   26,   26, 0x05,
     104,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
     123,   26,   26,   26, 0x0a,
     129,   26,   26,   26, 0x0a,
     143,   26,   26,   26, 0x0a,
     160,  158,   26,   26, 0x08,
     213,  208,   26,   26, 0x08,
     251,  237,   26,   26, 0x08,
     290,   26,   26,   26, 0x08,
     308,   26,   26,   26, 0x08,
     321,   26,   26,   26, 0x08,
     335,   26,   26,   26, 0x08,
     350,   26,   26,   26, 0x08,
     365,   26,   26,   26, 0x08,
     384,   26,   26,   26, 0x08,
     400,   26,   26,   26, 0x08,
     415,   26,   26,   26, 0x08,
     427,   26,   26,   26, 0x08,
     446,  440,   26,   26, 0x08,
     504,  461,   26,   26, 0x08,
     548,   26,   26,   26, 0x08,
     569,   26,   26,   26, 0x08,
     616,  592,   26,   26, 0x08,
     661,  654,   26,   26, 0x08,
     720,  712,   26,   26, 0x08,
     806,  772,   26,   26, 0x08,
     879,   26,   26,   26, 0x08,
     901,  440,   26,   26, 0x08,
     935,  440,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CuteReport__ReportPreview[] = {
    "CuteReport::ReportPreview\0\0closed()\0"
    "pagePrevious()\0pageNext()\0pageFirst()\0"
    "pageLast()\0print()\0exported()\0"
    "viewScalled(qreal)\0run()\0slotFitPage()\0"
    "slotFitWidth()\0f\0"
    "initMe(CuteReport::ReportPreview::PreviewFlags)\0"
    "text\0slotZoomEdited(QString)\0oldPos,newPos\0"
    "slotZoomCursorPositionChanged(int,int)\0"
    "slotZoomChanged()\0slotZoomIn()\0"
    "slotZoomOut()\0slotZoomOrig()\0"
    "slotPageNext()\0slotPagePrevious()\0"
    "slotPageFirst()\0slotPageLast()\0"
    "slotPrint()\0slotExport()\0value\0"
    "slotEdit(bool)\0"
    "labelText,cancelButtonText,minimum,maximum\0"
    "showProgressDialog(QString,QString,int,int)\0"
    "hideProgressDialog()\0doShowProgressDialog()\0"
    "labelText,value,maximum\0"
    "updateProgressDialog(QString,int,int)\0"
    "report\0slotRenderingStarted(CuteReport::ReportInterface*)\0"
    "report,\0slotRendererDone(CuteReport::ReportInterface*,bool)\0"
    "report,value,total,pass,passTotal\0"
    "slotRendererProcessingPage(CuteReport::ReportInterface*,int,int,int,in"
    "t)\0"
    "slotDialogCancelled()\0"
    "viewVerticalScrollBarChanged(int)\0"
    "viewHorizontalScrollBarChanged(int)\0"
};

void CuteReport::ReportPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReportPreview *_t = static_cast<ReportPreview *>(_o);
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->pagePrevious(); break;
        case 2: _t->pageNext(); break;
        case 3: _t->pageFirst(); break;
        case 4: _t->pageLast(); break;
        case 5: _t->print(); break;
        case 6: _t->exported(); break;
        case 7: _t->viewScalled((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->run(); break;
        case 9: _t->slotFitPage(); break;
        case 10: _t->slotFitWidth(); break;
        case 11: _t->initMe((*reinterpret_cast< CuteReport::ReportPreview::PreviewFlags(*)>(_a[1]))); break;
        case 12: _t->slotZoomEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->slotZoomCursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->slotZoomChanged(); break;
        case 15: _t->slotZoomIn(); break;
        case 16: _t->slotZoomOut(); break;
        case 17: _t->slotZoomOrig(); break;
        case 18: _t->slotPageNext(); break;
        case 19: _t->slotPagePrevious(); break;
        case 20: _t->slotPageFirst(); break;
        case 21: _t->slotPageLast(); break;
        case 22: _t->slotPrint(); break;
        case 23: _t->slotExport(); break;
        case 24: _t->slotEdit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->showProgressDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 26: _t->hideProgressDialog(); break;
        case 27: _t->doShowProgressDialog(); break;
        case 28: _t->updateProgressDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 29: _t->slotRenderingStarted((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 30: _t->slotRendererDone((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->slotRendererProcessingPage((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 32: _t->slotDialogCancelled(); break;
        case 33: _t->viewVerticalScrollBarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->viewHorizontalScrollBarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CuteReport::ReportPreview::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CuteReport::ReportPreview::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CuteReport__ReportPreview,
      qt_meta_data_CuteReport__ReportPreview, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CuteReport::ReportPreview::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CuteReport::ReportPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CuteReport::ReportPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CuteReport__ReportPreview))
        return static_cast<void*>(const_cast< ReportPreview*>(this));
    return QWidget::qt_metacast(_clname);
}

int CuteReport::ReportPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void CuteReport::ReportPreview::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CuteReport::ReportPreview::pagePrevious()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CuteReport::ReportPreview::pageNext()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void CuteReport::ReportPreview::pageFirst()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void CuteReport::ReportPreview::pageLast()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void CuteReport::ReportPreview::print()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void CuteReport::ReportPreview::exported()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void CuteReport::ReportPreview::viewScalled(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
