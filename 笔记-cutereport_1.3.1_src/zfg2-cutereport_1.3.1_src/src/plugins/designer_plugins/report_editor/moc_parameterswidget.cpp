/****************************************************************************
** Meta object code from reading C++ file 'parameterswidget.h'
**
** Created: Wed Feb 8 11:32:56 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "parameterswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parameterswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ParametersWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      45,   18,   17,   17, 0x08,
      88,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ParametersWidget[] = {
    "ParametersWidget\0\0variableName,variableValue\0"
    "slotModelVariableChanged(QString,QVariant)\0"
    "updateView()\0"
};

void ParametersWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ParametersWidget *_t = static_cast<ParametersWidget *>(_o);
        switch (_id) {
        case 0: _t->slotModelVariableChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->updateView(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ParametersWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ParametersWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ParametersWidget,
      qt_meta_data_ParametersWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ParametersWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ParametersWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ParametersWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ParametersWidget))
        return static_cast<void*>(const_cast< ParametersWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ParametersWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
