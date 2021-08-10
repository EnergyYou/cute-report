/****************************************************************************
** Meta object code from reading C++ file 'fonteditor.h'
**
** Created: Wed Feb 8 11:33:22 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fonteditor/fonteditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fonteditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FontEditor[] = {

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
      12,   11,   11,   11, 0x08,
      35,   11,   11,   11, 0x08,
      60,   11,   11,   11, 0x08,
      89,   11,   11,   11, 0x08,
     116,   11,   11,   11, 0x08,
     133,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FontEditor[] = {
    "FontEditor\0\0fontToObjectProperty()\0"
    "fontFromObjectProperty()\0"
    "fontFamilyToObjectProperty()\0"
    "fontSizeToObjectProperty()\0showFontDialog()\0"
    "showFontColorDialog()\0"
};

void FontEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FontEditor *_t = static_cast<FontEditor *>(_o);
        switch (_id) {
        case 0: _t->fontToObjectProperty(); break;
        case 1: _t->fontFromObjectProperty(); break;
        case 2: _t->fontFamilyToObjectProperty(); break;
        case 3: _t->fontSizeToObjectProperty(); break;
        case 4: _t->showFontDialog(); break;
        case 5: _t->showFontColorDialog(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FontEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FontEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FontEditor,
      qt_meta_data_FontEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FontEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FontEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FontEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FontEditor))
        return static_cast<void*>(const_cast< FontEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int FontEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
