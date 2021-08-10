/********************************************************************************
** Form generated from reading UI file 'filesystemdatasethelper.ui'
**
** Created: Sun Jan 22 17:34:10 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESYSTEMDATASETHELPER_H
#define UI_FILESYSTEMDATASETHELPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileSystemDatasetHelper
{
public:
    QGridLayout *gridLayout;
    QCheckBox *cbSystem;
    QCheckBox *cbAllDirectories;
    QLabel *label_5;
    QCheckBox *cbDirs;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *cbFiles;
    QLineEdit *leDir;
    QPushButton *bBrowse;
    QLabel *label_3;
    QCheckBox *cbReadable;
    QCheckBox *cbWritable;
    QCheckBox *cbExecutable;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *filter;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QCheckBox *cbHidden;
    QSpinBox *recursionLevel;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QLabel *label_6;
    QComboBox *cbPathAppearance;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *maxNumber;

    void setupUi(QWidget *FileSystemDatasetHelper)
    {
        if (FileSystemDatasetHelper->objectName().isEmpty())
            FileSystemDatasetHelper->setObjectName(QString::fromUtf8("FileSystemDatasetHelper"));
        FileSystemDatasetHelper->resize(728, 448);
        gridLayout = new QGridLayout(FileSystemDatasetHelper);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cbSystem = new QCheckBox(FileSystemDatasetHelper);
        cbSystem->setObjectName(QString::fromUtf8("cbSystem"));
        cbSystem->setEnabled(true);

        gridLayout->addWidget(cbSystem, 3, 5, 1, 1);

        cbAllDirectories = new QCheckBox(FileSystemDatasetHelper);
        cbAllDirectories->setObjectName(QString::fromUtf8("cbAllDirectories"));

        gridLayout->addWidget(cbAllDirectories, 2, 3, 1, 2);

        label_5 = new QLabel(FileSystemDatasetHelper);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(true);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 1, 1, 1);

        cbDirs = new QCheckBox(FileSystemDatasetHelper);
        cbDirs->setObjectName(QString::fromUtf8("cbDirs"));
        cbDirs->setEnabled(true);

        gridLayout->addWidget(cbDirs, 2, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(88, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 9, 1, 1);

        cbFiles = new QCheckBox(FileSystemDatasetHelper);
        cbFiles->setObjectName(QString::fromUtf8("cbFiles"));
        cbFiles->setEnabled(true);
        cbFiles->setChecked(true);

        gridLayout->addWidget(cbFiles, 2, 1, 1, 1);

        leDir = new QLineEdit(FileSystemDatasetHelper);
        leDir->setObjectName(QString::fromUtf8("leDir"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leDir->sizePolicy().hasHeightForWidth());
        leDir->setSizePolicy(sizePolicy);

        gridLayout->addWidget(leDir, 0, 1, 1, 8);

        bBrowse = new QPushButton(FileSystemDatasetHelper);
        bBrowse->setObjectName(QString::fromUtf8("bBrowse"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bBrowse->sizePolicy().hasHeightForWidth());
        bBrowse->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(bBrowse, 0, 9, 1, 1);

        label_3 = new QLabel(FileSystemDatasetHelper);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        cbReadable = new QCheckBox(FileSystemDatasetHelper);
        cbReadable->setObjectName(QString::fromUtf8("cbReadable"));
        cbReadable->setEnabled(true);
        cbReadable->setChecked(true);

        gridLayout->addWidget(cbReadable, 3, 1, 1, 1);

        cbWritable = new QCheckBox(FileSystemDatasetHelper);
        cbWritable->setObjectName(QString::fromUtf8("cbWritable"));
        cbWritable->setEnabled(true);
        cbWritable->setChecked(true);

        gridLayout->addWidget(cbWritable, 3, 2, 1, 1);

        cbExecutable = new QCheckBox(FileSystemDatasetHelper);
        cbExecutable->setObjectName(QString::fromUtf8("cbExecutable"));
        cbExecutable->setEnabled(true);
        cbExecutable->setChecked(true);

        gridLayout->addWidget(cbExecutable, 3, 3, 1, 2);

        horizontalSpacer = new QSpacerItem(271, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 6, 1, 3);

        horizontalSpacer_6 = new QSpacerItem(88, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 3, 9, 1, 1);

        filter = new QLineEdit(FileSystemDatasetHelper);
        filter->setObjectName(QString::fromUtf8("filter"));
        filter->setEnabled(true);

        gridLayout->addWidget(filter, 4, 1, 1, 9);

        label = new QLabel(FileSystemDatasetHelper);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(88, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 9, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(193, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 8, 1, 1);

        label_2 = new QLabel(FileSystemDatasetHelper);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        cbHidden = new QCheckBox(FileSystemDatasetHelper);
        cbHidden->setObjectName(QString::fromUtf8("cbHidden"));
        cbHidden->setEnabled(true);

        gridLayout->addWidget(cbHidden, 2, 5, 1, 1);

        recursionLevel = new QSpinBox(FileSystemDatasetHelper);
        recursionLevel->setObjectName(QString::fromUtf8("recursionLevel"));
        recursionLevel->setEnabled(true);
        recursionLevel->setMinimum(1);

        gridLayout->addWidget(recursionLevel, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 4, 1, 1);

        label_4 = new QLabel(FileSystemDatasetHelper);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(true);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_6 = new QLabel(FileSystemDatasetHelper);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        cbPathAppearance = new QComboBox(FileSystemDatasetHelper);
        cbPathAppearance->setObjectName(QString::fromUtf8("cbPathAppearance"));

        gridLayout->addWidget(cbPathAppearance, 5, 1, 1, 4);

        label_7 = new QLabel(FileSystemDatasetHelper);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(271, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 6, 1, 3);

        maxNumber = new QSpinBox(FileSystemDatasetHelper);
        maxNumber->setObjectName(QString::fromUtf8("maxNumber"));
        maxNumber->setMinimum(-1);
        maxNumber->setMaximum(999999999);
        maxNumber->setValue(-1);

        gridLayout->addWidget(maxNumber, 1, 5, 1, 1);


        retranslateUi(FileSystemDatasetHelper);

        QMetaObject::connectSlotsByName(FileSystemDatasetHelper);
    } // setupUi

    void retranslateUi(QWidget *FileSystemDatasetHelper)
    {
        FileSystemDatasetHelper->setWindowTitle(QApplication::translate("FileSystemDatasetHelper", "Form", 0, QApplication::UnicodeUTF8));
        cbSystem->setText(QApplication::translate("FileSystemDatasetHelper", "System", 0, QApplication::UnicodeUTF8));
        cbAllDirectories->setText(QApplication::translate("FileSystemDatasetHelper", "All Directories", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FileSystemDatasetHelper", " Recursion level:", 0, QApplication::UnicodeUTF8));
        cbDirs->setText(QApplication::translate("FileSystemDatasetHelper", "Directories", 0, QApplication::UnicodeUTF8));
        cbFiles->setText(QApplication::translate("FileSystemDatasetHelper", "Files", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bBrowse->setToolTip(QApplication::translate("FileSystemDatasetHelper", "Select file for import", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bBrowse->setText(QApplication::translate("FileSystemDatasetHelper", "Select dir..", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FileSystemDatasetHelper", "Access:", 0, QApplication::UnicodeUTF8));
        cbReadable->setText(QApplication::translate("FileSystemDatasetHelper", "Readable", 0, QApplication::UnicodeUTF8));
        cbWritable->setText(QApplication::translate("FileSystemDatasetHelper", "Writable", 0, QApplication::UnicodeUTF8));
        cbExecutable->setText(QApplication::translate("FileSystemDatasetHelper", "Executable", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FileSystemDatasetHelper", "Directory", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FileSystemDatasetHelper", "Type:", 0, QApplication::UnicodeUTF8));
        cbHidden->setText(QApplication::translate("FileSystemDatasetHelper", "Hidden", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FileSystemDatasetHelper", "Filter:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FileSystemDatasetHelper", "Path appearance:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FileSystemDatasetHelper", "maxNumber:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FileSystemDatasetHelper: public Ui_FileSystemDatasetHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESYSTEMDATASETHELPER_H
