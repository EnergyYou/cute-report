/****************************************************************************
** Resource object code
**
** Created: Wed Feb 8 11:31:35 2017
**      by: The Resource Compiler for Qt version 4.8.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtCore/qglobal.h>

static const unsigned char qt_resource_data[] = {
  // F:/softDevelop/2017/zfg2-cutereport_1.3.1_src/src/plugins/core_plugins/items/line/line.png
  0x0,0x0,0x0,0xb0,
  0x89,
  0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,
  0x0,0x0,0x20,0x0,0x0,0x0,0x20,0x8,0x6,0x0,0x0,0x0,0x73,0x7a,0x7a,0xf4,
  0x0,0x0,0x0,0x77,0x49,0x44,0x41,0x54,0x58,0xc3,0xed,0x8e,0x41,0xe,0xc3,0x20,
  0xc,0x4,0x77,0x9b,0xd6,0xf9,0x7,0x9f,0xe4,0xed,0xa1,0x14,0xe7,0x62,0x22,0x2b,
  0xea,0xb9,0xf4,0xb0,0x2b,0x8d,0x16,0x23,0xc1,0x18,0x50,0x14,0xe5,0x7,0xa9,0xb5,
  0xfa,0x52,0x79,0x29,0xc5,0x97,0xca,0xcd,0xcc,0x25,0x97,0x5c,0x72,0xc9,0x25,0x97,
  0x5c,0x72,0xc9,0x25,0x57,0xfe,0x36,0xcc,0x83,0xbb,0x6f,0x0,0x36,0x0,0xaf,0xe8,
  0x67,0xf4,0xe4,0x91,0xe0,0xed,0xbd,0x7,0x23,0xf1,0x49,0xf4,0xe8,0x37,0x80,0x4e,
  0x72,0x5c,0xb,0xdc,0xc4,0x19,0x4b,0x6d,0x0,0xf6,0xd4,0xf3,0xcc,0xf8,0xf8,0x0,
  0xd0,0xbe,0x74,0xb,0xe9,0x64,0xde,0x75,0x92,0xfd,0x4,0x4d,0xf,0x84,0x5e,0xf2,
  0x71,0x17,0x3c,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82,
  
};

static const unsigned char qt_resource_name[] = {
  // line.png
  0x0,0x8,
  0x0,0x48,0x59,0x27,
  0x0,0x6c,
  0x0,0x69,0x0,0x6e,0x0,0x65,0x0,0x2e,0x0,0x70,0x0,0x6e,0x0,0x67,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/line.png
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

QT_BEGIN_NAMESPACE

extern Q_CORE_EXPORT bool qRegisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

extern Q_CORE_EXPORT bool qUnregisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

QT_END_NAMESPACE


int QT_MANGLE_NAMESPACE(qInitResources_line)()
{
    QT_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_line))

int QT_MANGLE_NAMESPACE(qCleanupResources_line)()
{
    QT_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_DESTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qCleanupResources_line))

