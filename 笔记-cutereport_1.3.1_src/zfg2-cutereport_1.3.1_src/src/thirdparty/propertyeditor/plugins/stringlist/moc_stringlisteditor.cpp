/****************************************************************************
** Meta object code from reading C++ file 'stringlisteditor.h'
**
** Created: Wed Feb 8 11:21:23 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stringlisteditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stringlisteditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StringListEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      40,   17,   17,   17, 0x08,
      64,   17,   17,   17, 0x08,
      87,   17,   17,   17, 0x08,
     113,   17,   17,   17, 0x08,
     137,   17,   17,   17, 0x08,
     167,  162,   17,   17, 0x08,
     217,  200,   17,   17, 0x08,
     262,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StringListEditor[] = {
    "StringListEditor\0\0on_upButton_clicked()\0"
    "on_downButton_clicked()\0on_newButton_clicked()\0"
    "on_deleteButton_clicked()\0"
    "on_fileButton_clicked()\0"
    "on_clearButton_clicked()\0text\0"
    "on_valueEdit_textEdited(QString)\0"
    "current,previous\0"
    "currentIndexChanged(QModelIndex,QModelIndex)\0"
    "currentValueChanged()\0"
};

void StringListEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StringListEditor *_t = static_cast<StringListEditor *>(_o);
        switch (_id) {
        case 0: _t->on_upButton_clicked(); break;
        case 1: _t->on_downButton_clicked(); break;
        case 2: _t->on_newButton_clicked(); break;
        case 3: _t->on_deleteButton_clicked(); break;
        case 4: _t->on_fileButton_clicked(); break;
        case 5: _t->on_clearButton_clicked(); break;
        case 6: _t->on_valueEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->currentIndexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 8: _t->currentValueChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StringListEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StringListEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_StringListEditor,
      qt_meta_data_StringListEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StringListEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StringListEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StringListEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StringListEditor))
        return static_cast<void*>(const_cast< StringListEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int StringListEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
