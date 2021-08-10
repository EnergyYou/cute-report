/****************************************************************************
** Meta object code from reading C++ file 'filesystemdataset.h'
**
** Created: Wed Feb 8 11:30:35 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filesystemdataset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystemdataset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileSystemDataset[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   44, // properties
       2,   68, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      39,   18,   18,   18, 0x05,
      66,   18,   18,   18, 0x05,
      88,   18,   18,   18, 0x05,
     131,   18,   18,   18, 0x05,
     188,   18,   18,   18, 0x05,

 // properties: name, type, flags
     228,  220, 0x0a495003,
     242,  238, 0x02495103,
     257,  238, 0x02495003,
     274,  266, 0x0049510b,
     294,  282, 0x0b495103,
     321,  306, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       5,
       4,

 // enums: name, flags, count, data
     266, 0x1,    9,   76,
     306, 0x0,    3,   94,

 // enum data: key, value
     336, uint(FileSystemDataset::Dirs),
     341, uint(FileSystemDataset::AllDirs),
     349, uint(FileSystemDataset::Files),
     355, uint(FileSystemDataset::Readable),
     364, uint(FileSystemDataset::Writable),
     373, uint(FileSystemDataset::Executable),
     384, uint(FileSystemDataset::Hidden),
     391, uint(FileSystemDataset::System),
     398, uint(FileSystemDataset::CaseSensitive),
     412, uint(FileSystemDataset::NoPath),
     419, uint(FileSystemDataset::AbsolutePath),
     432, uint(FileSystemDataset::RelativePath),

       0        // eod
};

static const char qt_meta_stringdata_FileSystemDataset[] = {
    "FileSystemDataset\0\0dirChanged(QString)\0"
    "recursionLevelChanged(int)\0"
    "maxNumberChanged(int)\0"
    "filtersChanged(FileSystemDataset::Filters)\0"
    "pathAppearanceChanged(FileSystemDataset::PathAppearance)\0"
    "nameFiltersChanged(QStringList)\0QString\0"
    "directory\0int\0recursionLevel\0maxFiles\0"
    "Filters\0filters\0QStringList\0nameFilters\0"
    "PathAppearance\0pathAppearance\0Dirs\0"
    "AllDirs\0Files\0Readable\0Writable\0"
    "Executable\0Hidden\0System\0CaseSensitive\0"
    "NoPath\0AbsolutePath\0RelativePath\0"
};

void FileSystemDataset::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileSystemDataset *_t = static_cast<FileSystemDataset *>(_o);
        switch (_id) {
        case 0: _t->dirChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->recursionLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->maxNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->filtersChanged((*reinterpret_cast< FileSystemDataset::Filters(*)>(_a[1]))); break;
        case 4: _t->pathAppearanceChanged((*reinterpret_cast< FileSystemDataset::PathAppearance(*)>(_a[1]))); break;
        case 5: _t->nameFiltersChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileSystemDataset::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileSystemDataset::staticMetaObject = {
    { &CuteReport::DatasetInterface::staticMetaObject, qt_meta_stringdata_FileSystemDataset,
      qt_meta_data_FileSystemDataset, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileSystemDataset::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileSystemDataset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileSystemDataset::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileSystemDataset))
        return static_cast<void*>(const_cast< FileSystemDataset*>(this));
    if (!strcmp(_clname, "CuteReport.DatasetInterface/1.0"))
        return static_cast< CuteReport::DatasetInterface*>(const_cast< FileSystemDataset*>(this));
    typedef CuteReport::DatasetInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int FileSystemDataset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef CuteReport::DatasetInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = dir(); break;
        case 1: *reinterpret_cast< int*>(_v) = recursionLevel(); break;
        case 2: *reinterpret_cast< int*>(_v) = maxNumber(); break;
        case 3: *reinterpret_cast<int*>(_v) = QFlag(filters()); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = nameFilters(); break;
        case 5: *reinterpret_cast< PathAppearance*>(_v) = pathAppearance(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDir(*reinterpret_cast< QString*>(_v)); break;
        case 1: setRecursionLevel(*reinterpret_cast< int*>(_v)); break;
        case 2: setMaxNumber(*reinterpret_cast< int*>(_v)); break;
        case 3: setFilters(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 4: setNameFilters(*reinterpret_cast< QStringList*>(_v)); break;
        case 5: setPathAppearance(*reinterpret_cast< PathAppearance*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FileSystemDataset::dirChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileSystemDataset::recursionLevelChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileSystemDataset::maxNumberChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileSystemDataset::filtersChanged(FileSystemDataset::Filters _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileSystemDataset::pathAppearanceChanged(FileSystemDataset::PathAppearance _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FileSystemDataset::nameFiltersChanged(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
