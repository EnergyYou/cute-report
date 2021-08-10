/********************************************************************************
** Form generated from reading UI file 'filesystemstoragehelper.ui'
**
** Created: Sun Jan 22 17:32:55 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESYSTEMSTORAGEHELPER_H
#define UI_FILESYSTEMSTORAGEHELPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileSystemStorageHelper
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *objectsRoot;
    QPushButton *bChooseObjectsRoot;
    QCheckBox *cbRootRelative;
    QCheckBox *askOverWrite;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FileSystemStorageHelper)
    {
        if (FileSystemStorageHelper->objectName().isEmpty())
            FileSystemStorageHelper->setObjectName(QString::fromUtf8("FileSystemStorageHelper"));
        FileSystemStorageHelper->resize(648, 389);
        gridLayout = new QGridLayout(FileSystemStorageHelper);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(FileSystemStorageHelper);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        objectsRoot = new QLineEdit(FileSystemStorageHelper);
        objectsRoot->setObjectName(QString::fromUtf8("objectsRoot"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(objectsRoot->sizePolicy().hasHeightForWidth());
        objectsRoot->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(objectsRoot);

        bChooseObjectsRoot = new QPushButton(FileSystemStorageHelper);
        bChooseObjectsRoot->setObjectName(QString::fromUtf8("bChooseObjectsRoot"));

        horizontalLayout_2->addWidget(bChooseObjectsRoot);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        cbRootRelative = new QCheckBox(FileSystemStorageHelper);
        cbRootRelative->setObjectName(QString::fromUtf8("cbRootRelative"));

        gridLayout->addWidget(cbRootRelative, 1, 0, 1, 1);

        askOverWrite = new QCheckBox(FileSystemStorageHelper);
        askOverWrite->setObjectName(QString::fromUtf8("askOverWrite"));
        askOverWrite->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(askOverWrite, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 235, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        retranslateUi(FileSystemStorageHelper);

        QMetaObject::connectSlotsByName(FileSystemStorageHelper);
    } // setupUi

    void retranslateUi(QWidget *FileSystemStorageHelper)
    {
        FileSystemStorageHelper->setWindowTitle(QApplication::translate("FileSystemStorageHelper", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FileSystemStorageHelper", "Root folder:", 0, QApplication::UnicodeUTF8));
        bChooseObjectsRoot->setText(QApplication::translate("FileSystemStorageHelper", "Choose...", 0, QApplication::UnicodeUTF8));
        cbRootRelative->setText(QApplication::translate("FileSystemStorageHelper", "relative to root", 0, QApplication::UnicodeUTF8));
        askOverWrite->setText(QApplication::translate("FileSystemStorageHelper", "ask for overwrite", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FileSystemStorageHelper: public Ui_FileSystemStorageHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESYSTEMSTORAGEHELPER_H
