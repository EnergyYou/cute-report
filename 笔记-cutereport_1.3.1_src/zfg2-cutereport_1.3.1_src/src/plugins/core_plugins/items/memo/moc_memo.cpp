/****************************************************************************
** Meta object code from reading C++ file 'memo.h'
**
** Created: Wed Feb 8 11:31:23 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "memo.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'memo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MemoItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
      15,   94, // properties
       3,  154, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      42,    9,    9,    9, 0x05,
      70,    9,    9,    9, 0x05,
      98,    9,    9,    9, 0x05,
     117,    9,    9,    9, 0x05,
     138,    9,    9,    9, 0x05,
     162,    9,    9,    9, 0x05,
     189,    9,    9,    9, 0x05,
     214,    9,    9,    9, 0x05,
     237,    9,    9,    9, 0x05,
     267,    9,    9,    9, 0x05,
     294,    9,    9,    9, 0x05,
     320,    9,    9,    9, 0x05,
     345,    9,    9,    9, 0x05,
     377,    9,    9,    9, 0x05,
     397,    9,    9,    9, 0x05,

 // properties: name, type, flags
     418,  408, 0x0049510b,
     436,  428, 0x0a495003,
     453,  448, 0x01495103,
     472,  448, 0x01495103,
     482,  448, 0x01495103,
     499,  428, 0x0a495103,
     511,  504, 0x43495103,
     529,  521, 0x1a495103,
     546,  540, ((uint)QMetaType::QReal << 24) | 0x00495103,
     558,  540, ((uint)QMetaType::QReal << 24) | 0x00495103,
     575,  569, 0x40495103,
     580,  448, 0x01495103,
     592,  428, 0x0a495003,
     436,  606, 0x0049410b,
     630,  618, 0x0b095001,

 // properties: notify_signal_id
       2,
       0,
      13,
       8,
       9,
       4,
       5,
      10,
      11,
      12,
       3,
       7,
       6,
       0,
       0,

 // enums: name, flags, count, data
     652, 0x0,    9,  166,
     408, 0x1,    9,  184,
     606, 0x0,    3,  202,

 // enum data: key, value
     661, uint(MemoItem::AlignLeft),
     671, uint(MemoItem::AlignRight),
     682, uint(MemoItem::AlignHCenter),
     695, uint(MemoItem::AlignJustify),
     708, uint(MemoItem::AlignTop),
     717, uint(MemoItem::AlignBottom),
     729, uint(MemoItem::AlignVCenter),
     742, uint(MemoItem::AlignCenter),
     754, uint(MemoItem::TextWordWrap),
     661, uint(MemoItem::AlignLeft),
     671, uint(MemoItem::AlignRight),
     682, uint(MemoItem::AlignHCenter),
     695, uint(MemoItem::AlignJustify),
     708, uint(MemoItem::AlignTop),
     717, uint(MemoItem::AlignBottom),
     729, uint(MemoItem::AlignVCenter),
     742, uint(MemoItem::AlignCenter),
     754, uint(MemoItem::TextWordWrap),
     767, uint(MemoItem::DontStretch),
     779, uint(MemoItem::ActualHeight),
     792, uint(MemoItem::MaxHeight),

       0        // eod
};

static const char qt_meta_stringdata_MemoItem[] = {
    "MemoItem\0\0stretchModeChanged(StretchMode)\0"
    "stretchModeChanged(QString)\0"
    "textFlagsChanged(TextFlags)\0"
    "fontChanged(QFont)\0textChanged(QString)\0"
    "textColorChaged(QColor)\0"
    "delimitersChanged(QString)\0"
    "stretchFontChanged(bool)\0"
    "allowHTMLChanged(bool)\0"
    "allowExpressionsChanged(bool)\0"
    "textMarginChanged(QPointF)\0"
    "lineSpacingChanged(qreal)\0"
    "textIndentChanged(qreal)\0"
    "showStretchabilityChanged(bool)\0"
    "textWidthWasReset()\0adjusted()\0TextFlags\0"
    "textFlags\0QString\0stretchMode\0bool\0"
    "showStretchability\0allowHTML\0"
    "allowExpressions\0text\0QColor\0textColor\0"
    "QPointF\0textMargin\0qreal\0lineSpacing\0"
    "textIndent\0QFont\0font\0stretchFont\0"
    "expDelimiters\0StretchMode\0QStringList\0"
    "_stretchMode_variants\0TextFlag\0AlignLeft\0"
    "AlignRight\0AlignHCenter\0AlignJustify\0"
    "AlignTop\0AlignBottom\0AlignVCenter\0"
    "AlignCenter\0TextWordWrap\0DontStretch\0"
    "ActualHeight\0MaxHeight\0"
};

void MemoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MemoItem *_t = static_cast<MemoItem *>(_o);
        switch (_id) {
        case 0: _t->stretchModeChanged((*reinterpret_cast< StretchMode(*)>(_a[1]))); break;
        case 1: _t->stretchModeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->textFlagsChanged((*reinterpret_cast< TextFlags(*)>(_a[1]))); break;
        case 3: _t->fontChanged((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 4: _t->textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->textColorChaged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 6: _t->delimitersChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->stretchFontChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->allowHTMLChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->allowExpressionsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->textMarginChanged((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 11: _t->lineSpacingChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 12: _t->textIndentChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 13: _t->showStretchabilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->textWidthWasReset(); break;
        case 15: _t->adjusted(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MemoItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MemoItem::staticMetaObject = {
    { &CuteReport::ItemInterface::staticMetaObject, qt_meta_stringdata_MemoItem,
      qt_meta_data_MemoItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MemoItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MemoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MemoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MemoItem))
        return static_cast<void*>(const_cast< MemoItem*>(this));
    if (!strcmp(_clname, "CuteReport.ItemInterface/1.0"))
        return static_cast< CuteReport::ItemInterface*>(const_cast< MemoItem*>(this));
    typedef CuteReport::ItemInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int MemoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::ItemInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(textFlags()); break;
        case 1: *reinterpret_cast< QString*>(_v) = stretchModeStr(); break;
        case 2: *reinterpret_cast< bool*>(_v) = showStretchability(); break;
        case 3: *reinterpret_cast< bool*>(_v) = allowHTML(); break;
        case 4: *reinterpret_cast< bool*>(_v) = allowExpressions(); break;
        case 5: *reinterpret_cast< QString*>(_v) = text(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = textColor(); break;
        case 7: *reinterpret_cast< QPointF*>(_v) = textMargin(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = lineSpacing(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = textIndent(); break;
        case 10: *reinterpret_cast< QFont*>(_v) = font(); break;
        case 11: *reinterpret_cast< bool*>(_v) = stretchFont(); break;
        case 12: *reinterpret_cast< QString*>(_v) = delimiters(); break;
        case 13: *reinterpret_cast< StretchMode*>(_v) = stretchMode(); break;
        case 14: *reinterpret_cast< QStringList*>(_v) = _stretchMode_variants(); break;
        }
        _id -= 15;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTextFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 1: setStretchModeStr(*reinterpret_cast< QString*>(_v)); break;
        case 2: setShowStretchability(*reinterpret_cast< bool*>(_v)); break;
        case 3: setAllowHTML(*reinterpret_cast< bool*>(_v)); break;
        case 4: setAllowExpressions(*reinterpret_cast< bool*>(_v)); break;
        case 5: setText(*reinterpret_cast< QString*>(_v)); break;
        case 6: setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: setTextMargin(*reinterpret_cast< QPointF*>(_v)); break;
        case 8: setLineSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 9: setTextIndent(*reinterpret_cast< qreal*>(_v)); break;
        case 10: setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 11: setStretchFont(*reinterpret_cast< bool*>(_v)); break;
        case 12: setDelimiters(*reinterpret_cast< QString*>(_v)); break;
        case 13: setStretchMode(*reinterpret_cast< StretchMode*>(_v)); break;
        }
        _id -= 15;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MemoItem::stretchModeChanged(StretchMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MemoItem::stretchModeChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MemoItem::textFlagsChanged(TextFlags _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MemoItem::fontChanged(QFont _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MemoItem::textChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MemoItem::textColorChaged(QColor _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MemoItem::delimitersChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MemoItem::stretchFontChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MemoItem::allowHTMLChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MemoItem::allowExpressionsChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MemoItem::textMarginChanged(QPointF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MemoItem::lineSpacingChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MemoItem::textIndentChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MemoItem::showStretchabilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MemoItem::textWidthWasReset()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void MemoItem::adjusted()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}
QT_END_MOC_NAMESPACE
