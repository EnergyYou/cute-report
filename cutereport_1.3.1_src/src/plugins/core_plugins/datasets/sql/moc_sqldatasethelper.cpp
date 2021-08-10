/****************************************************************************
** Meta object code from reading C++ file 'sqldatasethelper.h'
**
** Created: Sun Jan 22 17:33:49 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sqldatasethelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sqldatasethelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SqlDatasetHelper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x08,
      55,   50,   17,   17, 0x08,
      87,   82,   17,   17, 0x08,
     121,  114,   17,   17, 0x08,
     157,  150,   17,   17, 0x08,
     192,  184,   17,   17, 0x08,
     220,   17,   17,   17, 0x08,
     237,   17,   17,   17, 0x08,
     258,   17,   17,   17, 0x08,
     275,   17,   17,   17, 0x08,
     296,   17,   17,   17, 0x08,
     315,   17,   17,   17, 0x08,
     333,   17,   17,   17, 0x08,
     356,  354,   17,   17, 0x08,
     389,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SqlDatasetHelper[] = {
    "SqlDatasetHelper\0\0host\0"
    "slotDbhostChanged(QString)\0name\0"
    "slotDbnameChanged(QString)\0user\0"
    "slotDbuserChanged(QString)\0passwd\0"
    "slotDbpasswdChanged(QString)\0driver\0"
    "slotDriverChanged(QString)\0options\0"
    "slotOptionsChanged(QString)\0"
    "slotHostEdited()\0slotDatabaseEdited()\0"
    "slotUserEdited()\0slotpasswordEdited()\0"
    "slotDriverEdited()\0slotQueryEdited()\0"
    "slotCopyDriverName()\0b\0"
    "slotExtendedOptionsToggled(bool)\0"
    "slotLoadFile()\0"
};

void SqlDatasetHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SqlDatasetHelper *_t = static_cast<SqlDatasetHelper *>(_o);
        switch (_id) {
        case 0: _t->slotDbhostChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->slotDbnameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->slotDbuserChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->slotDbpasswdChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->slotDriverChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->slotOptionsChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->slotHostEdited(); break;
        case 7: _t->slotDatabaseEdited(); break;
        case 8: _t->slotUserEdited(); break;
        case 9: _t->slotpasswordEdited(); break;
        case 10: _t->slotDriverEdited(); break;
        case 11: _t->slotQueryEdited(); break;
        case 12: _t->slotCopyDriverName(); break;
        case 13: _t->slotExtendedOptionsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->slotLoadFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SqlDatasetHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SqlDatasetHelper::staticMetaObject = {
    { &CuteReport::DatasetHelperInterface::staticMetaObject, qt_meta_stringdata_SqlDatasetHelper,
      qt_meta_data_SqlDatasetHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SqlDatasetHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SqlDatasetHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SqlDatasetHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SqlDatasetHelper))
        return static_cast<void*>(const_cast< SqlDatasetHelper*>(this));
    typedef CuteReport::DatasetHelperInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int SqlDatasetHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::DatasetHelperInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
static const uint qt_meta_data_TextEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_TextEdit[] = {
    "TextEdit\0\0editingFinished()\0"
};

void TextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TextEdit *_t = static_cast<TextEdit *>(_o);
        switch (_id) {
        case 0: _t->editingFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_TextEdit,
      qt_meta_data_TextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextEdit))
        return static_cast<void*>(const_cast< TextEdit*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int TextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void TextEdit::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
