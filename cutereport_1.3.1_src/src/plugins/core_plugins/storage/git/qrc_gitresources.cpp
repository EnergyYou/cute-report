/****************************************************************************
** Resource object code
**
** Created: Sun Jan 22 17:33:17 2017
**      by: The Resource Compiler for Qt version 4.8.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtCore/qglobal.h>

static const unsigned char qt_resource_data[] = {
  // F:/softDevelop/2017/cutereport_1.3.1_src/src/plugins/core_plugins/storage/git/urlHints.txt
  0x0,0x0,0x0,0x6c,
  0x74,
  0x65,0x6d,0x70,0x6c,0x61,0x74,0x65,0x73,0x20,0x7c,0x20,0x74,0x65,0x6d,0x70,0x6c,
  0x61,0x74,0x65,0x73,0xa,0x72,0x65,0x70,0x6f,0x72,0x74,0x73,0x20,0x7c,0x20,0x72,
  0x65,0x70,0x6f,0x72,0x74,0x73,0xa,0x6f,0x62,0x6a,0x65,0x63,0x74,0x73,0x20,0x7c,
  0x20,0x6f,0x62,0x6a,0x65,0x63,0x74,0x73,0xa,0x64,0x61,0x74,0x61,0x62,0x61,0x73,
  0x65,0x73,0x20,0x7c,0x20,0x6f,0x62,0x6a,0x65,0x63,0x74,0x73,0xa,0x69,0x6d,0x61,
  0x67,0x65,0x73,0x20,0x7c,0x20,0x6f,0x62,0x6a,0x65,0x63,0x74,0x73,0xa,0x66,0x6f,
  0x72,0x6d,0x73,0x20,0x7c,0x20,0x66,0x6f,0x72,0x6d,0x73,
  
};

static const unsigned char qt_resource_name[] = {
  // urlHints.txt
  0x0,0xc,
  0xa,0x28,0x45,0xf4,
  0x0,0x75,
  0x0,0x72,0x0,0x6c,0x0,0x48,0x0,0x69,0x0,0x6e,0x0,0x74,0x0,0x73,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/urlHints.txt
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

QT_BEGIN_NAMESPACE

extern Q_CORE_EXPORT bool qRegisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

extern Q_CORE_EXPORT bool qUnregisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

QT_END_NAMESPACE


int QT_MANGLE_NAMESPACE(qInitResources_gitresources)()
{
    QT_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_gitresources))

int QT_MANGLE_NAMESPACE(qCleanupResources_gitresources)()
{
    QT_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_DESTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qCleanupResources_gitresources))

