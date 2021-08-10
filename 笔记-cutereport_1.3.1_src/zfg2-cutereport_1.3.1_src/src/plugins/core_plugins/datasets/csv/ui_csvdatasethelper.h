/********************************************************************************
** Form generated from reading UI file 'csvdatasethelper.ui'
**
** Created: Wed Feb 8 11:30:12 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSVDATASETHELPER_H
#define UI_CSVDATASETHELPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CsvDatasetHelper
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leFileName;
    QPushButton *bBrowse;
    QLabel *label_2;
    QLineEdit *leDelimeter;
    QCheckBox *cbFixProblems;
    QPlainTextEdit *text;
    QLabel *label_3;
    QCheckBox *cbKeepData;
    QCheckBox *cbFirstRowIsHeader;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cbMaxRecords;
    QSpinBox *sbMaxRecords;
    QLineEdit *leSortFields;

    void setupUi(QWidget *CsvDatasetHelper)
    {
        if (CsvDatasetHelper->objectName().isEmpty())
            CsvDatasetHelper->setObjectName(QString::fromUtf8("CsvDatasetHelper"));
        CsvDatasetHelper->resize(855, 448);
        gridLayout = new QGridLayout(CsvDatasetHelper);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(CsvDatasetHelper);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leFileName = new QLineEdit(CsvDatasetHelper);
        leFileName->setObjectName(QString::fromUtf8("leFileName"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leFileName->sizePolicy().hasHeightForWidth());
        leFileName->setSizePolicy(sizePolicy);

        gridLayout->addWidget(leFileName, 0, 1, 1, 5);

        bBrowse = new QPushButton(CsvDatasetHelper);
        bBrowse->setObjectName(QString::fromUtf8("bBrowse"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bBrowse->sizePolicy().hasHeightForWidth());
        bBrowse->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(bBrowse, 0, 6, 1, 1);

        label_2 = new QLabel(CsvDatasetHelper);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        leDelimeter = new QLineEdit(CsvDatasetHelper);
        leDelimeter->setObjectName(QString::fromUtf8("leDelimeter"));
        sizePolicy1.setHeightForWidth(leDelimeter->sizePolicy().hasHeightForWidth());
        leDelimeter->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(leDelimeter, 1, 1, 1, 1);

        cbFixProblems = new QCheckBox(CsvDatasetHelper);
        cbFixProblems->setObjectName(QString::fromUtf8("cbFixProblems"));

        gridLayout->addWidget(cbFixProblems, 1, 4, 1, 1);

        text = new QPlainTextEdit(CsvDatasetHelper);
        text->setObjectName(QString::fromUtf8("text"));

        gridLayout->addWidget(text, 4, 0, 1, 7);

        label_3 = new QLabel(CsvDatasetHelper);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        cbKeepData = new QCheckBox(CsvDatasetHelper);
        cbKeepData->setObjectName(QString::fromUtf8("cbKeepData"));
        sizePolicy1.setHeightForWidth(cbKeepData->sizePolicy().hasHeightForWidth());
        cbKeepData->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(cbKeepData, 1, 2, 1, 1);

        cbFirstRowIsHeader = new QCheckBox(CsvDatasetHelper);
        cbFirstRowIsHeader->setObjectName(QString::fromUtf8("cbFirstRowIsHeader"));
        sizePolicy1.setHeightForWidth(cbFirstRowIsHeader->sizePolicy().hasHeightForWidth());
        cbFirstRowIsHeader->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(cbFirstRowIsHeader, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(190, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 5, 1, 2);

        cbMaxRecords = new QCheckBox(CsvDatasetHelper);
        cbMaxRecords->setObjectName(QString::fromUtf8("cbMaxRecords"));

        gridLayout->addWidget(cbMaxRecords, 3, 1, 1, 1);

        sbMaxRecords = new QSpinBox(CsvDatasetHelper);
        sbMaxRecords->setObjectName(QString::fromUtf8("sbMaxRecords"));
        sbMaxRecords->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(sbMaxRecords, 3, 2, 1, 1);

        leSortFields = new QLineEdit(CsvDatasetHelper);
        leSortFields->setObjectName(QString::fromUtf8("leSortFields"));

        gridLayout->addWidget(leSortFields, 2, 1, 1, 3);


        retranslateUi(CsvDatasetHelper);

        QMetaObject::connectSlotsByName(CsvDatasetHelper);
    } // setupUi

    void retranslateUi(QWidget *CsvDatasetHelper)
    {
        CsvDatasetHelper->setWindowTitle(QApplication::translate("CsvDatasetHelper", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CsvDatasetHelper", "File:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bBrowse->setToolTip(QApplication::translate("CsvDatasetHelper", "Select file for import", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bBrowse->setText(QApplication::translate("CsvDatasetHelper", "Browse...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CsvDatasetHelper", "Fields delimeter:", 0, QApplication::UnicodeUTF8));
        cbFixProblems->setText(QApplication::translate("CsvDatasetHelper", "fix problems", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CsvDatasetHelper", "Sort fields:", 0, QApplication::UnicodeUTF8));
        cbKeepData->setText(QApplication::translate("CsvDatasetHelper", "keep data internal", 0, QApplication::UnicodeUTF8));
        cbFirstRowIsHeader->setText(QApplication::translate("CsvDatasetHelper", "first row is header", 0, QApplication::UnicodeUTF8));
        cbMaxRecords->setText(QApplication::translate("CsvDatasetHelper", "set max records:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leSortFields->setToolTip(QApplication::translate("CsvDatasetHelper", "Comma separated sorting fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class CsvDatasetHelper: public Ui_CsvDatasetHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSVDATASETHELPER_H
