/****************************************************************************
** Meta object code from reading C++ file 'textformattoolbar.h'
**
** Created: Wed Feb 8 11:31:26 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "textformattoolbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textformattoolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TextFormatToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   19,   18,   18, 0x08,
      68,   18,   18,   18, 0x08,
      92,   18,   18,   18, 0x08,
     103,   18,   18,   18, 0x08,
     119,   18,   18,   18, 0x08,
     134,  132,   18,   18, 0x08,
     156,  154,   18,   18, 0x08,
     174,   18,   18,   18, 0x08,
     188,  186,   18,   18, 0x08,
     208,   18,   18,   18, 0x08,
     219,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TextFormatToolBar[] = {
    "TextFormatToolBar\0\0format\0"
    "currentCharFormatChanged(QTextCharFormat)\0"
    "cursorPositionChanged()\0textBold()\0"
    "textUnderline()\0textItalic()\0f\0"
    "textFamily(QString)\0p\0textSize(QString)\0"
    "textColor()\0a\0textAlign(QAction*)\0"
    "textFont()\0comboSizeChanged()\0"
};

void TextFormatToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TextFormatToolBar *_t = static_cast<TextFormatToolBar *>(_o);
        switch (_id) {
        case 0: _t->currentCharFormatChanged((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        case 1: _t->cursorPositionChanged(); break;
        case 2: _t->textBold(); break;
        case 3: _t->textUnderline(); break;
        case 4: _t->textItalic(); break;
        case 5: _t->textFamily((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->textSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->textColor(); break;
        case 8: _t->textAlign((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 9: _t->textFont(); break;
        case 10: _t->comboSizeChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TextFormatToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TextFormatToolBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_TextFormatToolBar,
      qt_meta_data_TextFormatToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextFormatToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextFormatToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextFormatToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextFormatToolBar))
        return static_cast<void*>(const_cast< TextFormatToolBar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int TextFormatToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
