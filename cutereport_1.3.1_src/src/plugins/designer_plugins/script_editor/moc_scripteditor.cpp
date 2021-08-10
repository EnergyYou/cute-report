/****************************************************************************
** Meta object code from reading C++ file 'scripteditor.h'
**
** Created: Sun Jan 22 17:37:19 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "scripteditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scripteditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ScriptEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   13,   13,   13, 0x08,
      51,   44,   13,   13, 0x08,
     106,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ScriptEditor[] = {
    "ScriptEditor\0\0refreshVariables()\0"
    "validate()\0report\0"
    "slotCurrentReportChanged(CuteReport::ReportInterface*)\0"
    "textChanged()\0"
};

void ScriptEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ScriptEditor *_t = static_cast<ScriptEditor *>(_o);
        switch (_id) {
        case 0: _t->refreshVariables(); break;
        case 1: _t->validate(); break;
        case 2: _t->slotCurrentReportChanged((*reinterpret_cast< CuteReport::ReportInterface*(*)>(_a[1]))); break;
        case 3: _t->textChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ScriptEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ScriptEditor::staticMetaObject = {
    { &CuteDesigner::ModuleInterface::staticMetaObject, qt_meta_stringdata_ScriptEditor,
      qt_meta_data_ScriptEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ScriptEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ScriptEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ScriptEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptEditor))
        return static_cast<void*>(const_cast< ScriptEditor*>(this));
    if (!strcmp(_clname, "CuteDesigner.ModuleInterface/1.0"))
        return static_cast< CuteDesigner::ModuleInterface*>(const_cast< ScriptEditor*>(this));
    typedef CuteDesigner::ModuleInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int ScriptEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteDesigner::ModuleInterface QMocSuperClass;
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

// SIGNAL 0
void ScriptEditor::refreshVariables()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
