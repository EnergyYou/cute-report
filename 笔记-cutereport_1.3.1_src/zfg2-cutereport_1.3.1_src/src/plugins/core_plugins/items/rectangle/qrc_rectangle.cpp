/****************************************************************************
** Resource object code
**
** Created: Wed Feb 8 11:31:43 2017
**      by: The Resource Compiler for Qt version 4.8.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtCore/qglobal.h>

static const unsigned char qt_resource_data[] = {
  // F:/softDevelop/2017/zfg2-cutereport_1.3.1_src/src/plugins/core_plugins/items/rectangle/rectangle.png
  0x0,0x0,0x0,0x85,
  0x89,
  0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,
  0x0,0x0,0x20,0x0,0x0,0x0,0x20,0x8,0x6,0x0,0x0,0x0,0x73,0x7a,0x7a,0xf4,
  0x0,0x0,0x0,0x4c,0x49,0x44,0x41,0x54,0x58,0xc3,0xed,0x95,0xc1,0xd,0x0,0x20,
  0x8,0xc4,0xc0,0xf0,0x76,0x5a,0xf7,0x3f,0x7f,0x3e,0x1c,0xc0,0x23,0xb1,0x5d,0x80,
  0xa6,0x90,0x10,0x1,0xe0,0x46,0xd2,0x72,0xb,0x4c,0xe7,0xfc,0x94,0x24,0xa7,0xc0,
  0x70,0x9f,0x40,0x9d,0x14,0x99,0xaf,0x57,0xdf,0xa3,0x0,0x2,0x8,0x20,0x80,0x0,
  0x2,0x8,0xd4,0xfd,0x9d,0xbe,0x2b,0x0,0x60,0x27,0x8d,0x33,0xd4,0xa2,0xc0,0x6,
  0x73,0x10,0x11,0x9e,0x6d,0x11,0xc0,0xfa,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,
  0xae,0x42,0x60,0x82,
  
};

static const unsigned char qt_resource_name[] = {
  // rectangle.png
  0x0,0xd,
  0xf,0x55,0x6,0x27,
  0x0,0x72,
  0x0,0x65,0x0,0x63,0x0,0x74,0x0,0x61,0x0,0x6e,0x0,0x67,0x0,0x6c,0x0,0x65,0x0,0x2e,0x0,0x70,0x0,0x6e,0x0,0x67,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/rectangle.png
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

QT_BEGIN_NAMESPACE

extern Q_CORE_EXPORT bool qRegisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

extern Q_CORE_EXPORT bool qUnregisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

QT_END_NAMESPACE


int QT_MANGLE_NAMESPACE(qInitResources_rectangle)()
{
    QT_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_rectangle))

int QT_MANGLE_NAMESPACE(qCleanupResources_rectangle)()
{
    QT_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_DESTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qCleanupResources_rectangle))

