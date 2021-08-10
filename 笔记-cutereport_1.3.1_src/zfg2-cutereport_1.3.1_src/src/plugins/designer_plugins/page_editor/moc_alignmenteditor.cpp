/****************************************************************************
** Meta object code from reading C++ file 'alignmenteditor.h'
**
** Created: Wed Feb 8 11:33:24 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "alignmenteditor/alignmenteditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alignmenteditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AlignmentEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      45,   16,   16,   16, 0x08,
      75,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AlignmentEditor[] = {
    "AlignmentEditor\0\0alignmentToObjectProperty()\0"
    "alignmentFromObjectProperty()\0"
    "buttonPressed()\0"
};

void AlignmentEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AlignmentEditor *_t = static_cast<AlignmentEditor *>(_o);
        switch (_id) {
        case 0: _t->alignmentToObjectProperty(); break;
        case 1: _t->alignmentFromObjectProperty(); break;
        case 2: _t->buttonPressed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AlignmentEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AlignmentEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AlignmentEditor,
      qt_meta_data_AlignmentEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AlignmentEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AlignmentEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AlignmentEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AlignmentEditor))
        return static_cast<void*>(const_cast< AlignmentEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int AlignmentEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
