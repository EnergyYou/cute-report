/****************************************************************************
** Meta object code from reading C++ file 'memohelper.h'
**
** Created: Sun Jan 22 17:35:05 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "memohelper.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'memohelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MemoHelper[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      36,   11,   11,   11, 0x08,
      59,   11,   11,   11, 0x08,
      89,   83,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MemoHelper[] = {
    "MemoHelper\0\0slotExpressionClicked()\0"
    "slotAggregateClicked()\0slotFormattingClicked()\0"
    "index\0slotCurrentTextTabChange(int)\0"
};

void MemoHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MemoHelper *_t = static_cast<MemoHelper *>(_o);
        switch (_id) {
        case 0: _t->slotExpressionClicked(); break;
        case 1: _t->slotAggregateClicked(); break;
        case 2: _t->slotFormattingClicked(); break;
        case 3: _t->slotCurrentTextTabChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MemoHelper::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MemoHelper::staticMetaObject = {
    { &CuteReport::BaseItemHelperInterface::staticMetaObject, qt_meta_stringdata_MemoHelper,
      qt_meta_data_MemoHelper, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MemoHelper::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MemoHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MemoHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MemoHelper))
        return static_cast<void*>(const_cast< MemoHelper*>(this));
    typedef CuteReport::BaseItemHelperInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int MemoHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::BaseItemHelperInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
