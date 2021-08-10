/****************************************************************************
** Meta object code from reading C++ file 'frameeditor.h'
**
** Created: Sun Jan 22 17:37:02 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "frameeditor/frameeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frameeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FrameEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      37,   12,   12,   12, 0x08,
      63,   12,   12,   12, 0x08,
      85,   12,   12,   12, 0x08,
     109,   12,   12,   12, 0x08,
     125,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FrameEditor[] = {
    "FrameEditor\0\0frameToObjectProperty()\0"
    "frameFromObjectProperty()\0"
    "penToObjectProperty()\0penFromObjectProperty()\0"
    "buttonPressed()\0penWidthChanged()\0"
};

void FrameEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FrameEditor *_t = static_cast<FrameEditor *>(_o);
        switch (_id) {
        case 0: _t->frameToObjectProperty(); break;
        case 1: _t->frameFromObjectProperty(); break;
        case 2: _t->penToObjectProperty(); break;
        case 3: _t->penFromObjectProperty(); break;
        case 4: _t->buttonPressed(); break;
        case 5: _t->penWidthChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FrameEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FrameEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FrameEditor,
      qt_meta_data_FrameEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FrameEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FrameEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FrameEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrameEditor))
        return static_cast<void*>(const_cast< FrameEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int FrameEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
