/****************************************************************************
** Resource object code
**
** Created: Wed Feb 8 11:32:05 2017
**      by: The Resource Compiler for Qt version 4.8.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtCore/qglobal.h>

static const unsigned char qt_resource_data[] = {
  // F:/softDevelop/2017/zfg2-cutereport_1.3.1_src/src/plugins/core_plugins/items/chord/chord.png
  0x0,0x0,0x1,0x23,
  0x89,
  0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,
  0x0,0x0,0x20,0x0,0x0,0x0,0x20,0x8,0x6,0x0,0x0,0x0,0x73,0x7a,0x7a,0xf4,
  0x0,0x0,0x0,0xea,0x49,0x44,0x41,0x54,0x58,0xc3,0xed,0x96,0xd1,0x71,0xc3,0x20,
  0xc,0x86,0x7f,0x35,0xae,0xba,0x4,0x4f,0xda,0x89,0x59,0x3c,0x86,0x7,0x61,0x2d,
  0x96,0x8,0x75,0xa3,0xbc,0x40,0x8e,0x52,0xec,0xc4,0x24,0x79,0xaa,0xbe,0xbb,0xff,
  0xe4,0xc3,0x12,0x92,0x25,0x73,0x36,0x60,0x18,0x86,0x61,0xfc,0x77,0xe8,0x68,0x0,
  0x33,0xeb,0x3d,0x9f,0x94,0x12,0xbd,0xa5,0x0,0x66,0x56,0xe7,0x1c,0xbc,0xf7,0x9b,
  0x3e,0x21,0x4,0xc4,0x18,0x1f,0x2e,0x82,0x46,0x12,0x87,0x10,0x36,0x7d,0x6b,0x9f,
  0x23,0x85,0xec,0x26,0x17,0x11,0x9d,0xe7,0x59,0x45,0x44,0x99,0x59,0xf3,0x18,0x7e,
  0xa9,0xac,0x8b,0xc8,0x1f,0xff,0x97,0x26,0x6f,0x13,0xf7,0xb4,0x11,0x77,0x6c,0x4,
  0x75,0xdb,0x4b,0x3b,0x8f,0xd2,0xc6,0xf7,0xc6,0x31,0xed,0x6d,0x50,0xbf,0x6c,0xce,
  0xb9,0xe1,0x4e,0x7a,0xef,0xb1,0x2c,0x4b,0xf7,0xde,0xb4,0xf7,0xf4,0xbd,0x42,0x46,
  0x71,0xce,0x21,0xc6,0xa8,0x6d,0x17,0x68,0xf4,0xac,0x8f,0xf2,0xf4,0xa9,0x30,0xc,
  0xc3,0x78,0xeb,0x1f,0x91,0xaa,0x9e,0x0,0x9c,0x0,0x7c,0x66,0x3b,0x65,0x5b,0xf4,
  0x51,0x89,0x9a,0xf8,0xf2,0x35,0xbc,0x54,0xfa,0xa9,0xb4,0x66,0xfb,0xd,0x60,0x25,
  0xa2,0xcb,0xad,0x80,0x26,0x71,0x2d,0xae,0x2c,0x3,0xf8,0xaa,0x6c,0xb9,0xa6,0xbc,
  0xf1,0x19,0x40,0xea,0xd8,0x94,0x93,0x16,0x95,0xb5,0x95,0x88,0xd6,0x2b,0xfb,0x43,
  0x8c,0x1b,0x3d,0x9,0xd8,0xf9,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,
  0x60,0x82,
  
};

static const unsigned char qt_resource_name[] = {
  // chord.png
  0x0,0x9,
  0x6,0x87,0x84,0xa7,
  0x0,0x63,
  0x0,0x68,0x0,0x6f,0x0,0x72,0x0,0x64,0x0,0x2e,0x0,0x70,0x0,0x6e,0x0,0x67,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/chord.png
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

QT_BEGIN_NAMESPACE

extern Q_CORE_EXPORT bool qRegisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

extern Q_CORE_EXPORT bool qUnregisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

QT_END_NAMESPACE


int QT_MANGLE_NAMESPACE(qInitResources_chord)()
{
    QT_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_chord))

int QT_MANGLE_NAMESPACE(qCleanupResources_chord)()
{
    QT_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_DESTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qCleanupResources_chord))

