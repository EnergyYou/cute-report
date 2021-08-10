/****************************************************************************
** Meta object code from reading C++ file 'imageitem.h'
**
** Created: Wed Feb 8 11:31:05 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "imageitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       9,   79, // properties
       3,  115, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      32,   10,   10,   10, 0x05,
      60,   10,   10,   10, 0x05,
      86,   10,   10,   10, 0x05,
     120,   10,   10,   10, 0x05,
     149,   10,   10,   10, 0x05,
     170,   10,   10,   10, 0x05,
     189,   10,   10,   10, 0x05,
     214,   10,   10,   10, 0x05,
     237,   10,   10,   10, 0x05,
     278,   10,   10,   10, 0x05,
     305,   10,   10,   10, 0x05,
     334,   10,   10,   10, 0x05,

 // properties: name, type, flags
     362,  354, 0x0a495003,
     373,  354, 0x0a495103,
     387,  380, 0x46495103,
     398,  393, 0x01495103,
     414,  393, 0x01495103,
     431,  421, 0x0049410b,
     362,  441, 0x0049410b,
     464,  452, 0x0b094001,
     485,  452, 0x0b094001,

 // properties: notify_signal_id
       9,
       8,
       0,
      11,
      12,
       1,
       9,
       0,
       0,

 // enums: name, flags, count, data
     441, 0x0,    3,  127,
     421, 0x0,    3,  133,
     505, 0x0,    5,  139,

 // enum data: key, value
     518, uint(ImageItem::Static),
     525, uint(ImageItem::Storage),
     533, uint(ImageItem::Dataset),
     541, uint(ImageItem::NoScale),
     549, uint(ImageItem::ScaleImage),
     560, uint(ImageItem::ScaleFrame),
     571, uint(ImageItem::NoText),
     578, uint(ImageItem::TextTop),
     586, uint(ImageItem::TextBottom),
     597, uint(ImageItem::TextAbove),
     607, uint(ImageItem::TextBelow),

       0        // eod
};

static const char qt_meta_stringdata_ImageItem[] = {
    "ImageItem\0\0imageChanged(QImage)\0"
    "scaleTypeChanged(ScaleType)\0"
    "scaleTypeChanged(QString)\0"
    "textPositionChanged(TextPosition)\0"
    "textPositionChanged(QString)\0"
    "textChanged(QString)\0fontChanged(QFont)\0"
    "textColorChanged(QColor)\0"
    "sourceChanged(QString)\0"
    "sourceTypeChanged(ImageItem::SourceType)\0"
    "sourceTypeChanged(QString)\0"
    "keepAspectRatioChanged(bool)\0"
    "centerChanged(bool)\0QString\0sourceType\0"
    "source\0QImage\0image\0bool\0keepAspectRatio\0"
    "center\0ScaleType\0scaleType\0SourceType\0"
    "QStringList\0_sourceType_variants\0"
    "_scaleType_variants\0TextPosition\0"
    "Static\0Storage\0Dataset\0NoScale\0"
    "ScaleImage\0ScaleFrame\0NoText\0TextTop\0"
    "TextBottom\0TextAbove\0TextBelow\0"
};

void ImageItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageItem *_t = static_cast<ImageItem *>(_o);
        switch (_id) {
        case 0: _t->imageChanged((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->scaleTypeChanged((*reinterpret_cast< const ScaleType(*)>(_a[1]))); break;
        case 2: _t->scaleTypeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->textPositionChanged((*reinterpret_cast< const TextPosition(*)>(_a[1]))); break;
        case 4: _t->textPositionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->fontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 7: _t->textColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->sourceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->sourceTypeChanged((*reinterpret_cast< ImageItem::SourceType(*)>(_a[1]))); break;
        case 10: _t->sourceTypeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->keepAspectRatioChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->centerChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ImageItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImageItem::staticMetaObject = {
    { &CuteReport::ItemInterface::staticMetaObject, qt_meta_stringdata_ImageItem,
      qt_meta_data_ImageItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageItem))
        return static_cast<void*>(const_cast< ImageItem*>(this));
    if (!strcmp(_clname, "CuteReport.ItemInterface/1.0"))
        return static_cast< CuteReport::ItemInterface*>(const_cast< ImageItem*>(this));
    typedef CuteReport::ItemInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int ImageItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::ItemInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = sourceTypeStr(); break;
        case 1: *reinterpret_cast< QString*>(_v) = source(); break;
        case 2: *reinterpret_cast< QImage*>(_v) = image(); break;
        case 3: *reinterpret_cast< bool*>(_v) = keepAspectRatio(); break;
        case 4: *reinterpret_cast< bool*>(_v) = center(); break;
        case 5: *reinterpret_cast< ScaleType*>(_v) = scaleType(); break;
        case 6: *reinterpret_cast< SourceType*>(_v) = sourceType(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _sourceType_variants(); break;
        case 8: *reinterpret_cast< QStringList*>(_v) = _scaleType_variants(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSourceTypeStr(*reinterpret_cast< QString*>(_v)); break;
        case 1: setSource(*reinterpret_cast< QString*>(_v)); break;
        case 2: setImage(*reinterpret_cast< QImage*>(_v)); break;
        case 3: setKeepAspectRatio(*reinterpret_cast< bool*>(_v)); break;
        case 4: setCenter(*reinterpret_cast< bool*>(_v)); break;
        case 5: setScaleType(*reinterpret_cast< ScaleType*>(_v)); break;
        case 6: setSourceType(*reinterpret_cast< SourceType*>(_v)); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ImageItem::imageChanged(const QImage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ImageItem::scaleTypeChanged(const ScaleType & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ImageItem::scaleTypeChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ImageItem::textPositionChanged(const TextPosition & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ImageItem::textPositionChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ImageItem::textChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ImageItem::fontChanged(const QFont & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ImageItem::textColorChanged(const QColor & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ImageItem::sourceChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ImageItem::sourceTypeChanged(ImageItem::SourceType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ImageItem::sourceTypeChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ImageItem::keepAspectRatioChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ImageItem::centerChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
