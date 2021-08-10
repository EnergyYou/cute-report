/********************************************************************************
** Form generated from reading UI file 'sqldatasethelper.ui'
**
** Created: Sun Jan 22 17:33:41 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLDATASETHELPER_H
#define UI_SQLDATASETHELPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "sqldatasethelper.h"

QT_BEGIN_NAMESPACE

class Ui_SqlDatasetEditor
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *databaseField;
    QPushButton *bLoadFile;
    QPushButton *bExtended;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *passwordField;
    QLineEdit *driver;
    QLineEdit *userField;
    QLineEdit *hostField;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_7;
    QLineEdit *optionsField;
    QPushButton *bCopyDriverName;
    QLabel *label_6;
    QComboBox *driversList;
    TextEdit *textEdit;

    void setupUi(QWidget *SqlDatasetEditor)
    {
        if (SqlDatasetEditor->objectName().isEmpty())
            SqlDatasetEditor->setObjectName(QString::fromUtf8("SqlDatasetEditor"));
        SqlDatasetEditor->resize(718, 440);
        verticalLayout = new QVBoxLayout(SqlDatasetEditor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(SqlDatasetEditor);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        databaseField = new QLineEdit(SqlDatasetEditor);
        databaseField->setObjectName(QString::fromUtf8("databaseField"));

        horizontalLayout->addWidget(databaseField);

        bLoadFile = new QPushButton(SqlDatasetEditor);
        bLoadFile->setObjectName(QString::fromUtf8("bLoadFile"));

        horizontalLayout->addWidget(bLoadFile);

        bExtended = new QPushButton(SqlDatasetEditor);
        bExtended->setObjectName(QString::fromUtf8("bExtended"));
        bExtended->setCheckable(true);
        bExtended->setChecked(true);

        horizontalLayout->addWidget(bExtended);


        verticalLayout->addLayout(horizontalLayout);

        frame = new QFrame(SqlDatasetEditor);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        passwordField = new QLineEdit(frame);
        passwordField->setObjectName(QString::fromUtf8("passwordField"));

        gridLayout->addWidget(passwordField, 0, 7, 1, 2);

        driver = new QLineEdit(frame);
        driver->setObjectName(QString::fromUtf8("driver"));

        gridLayout->addWidget(driver, 2, 1, 1, 1);

        userField = new QLineEdit(frame);
        userField->setObjectName(QString::fromUtf8("userField"));

        gridLayout->addWidget(userField, 0, 3, 1, 2);

        hostField = new QLineEdit(frame);
        hostField->setObjectName(QString::fromUtf8("hostField"));

        gridLayout->addWidget(hostField, 0, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 5, 1, 2);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        optionsField = new QLineEdit(frame);
        optionsField->setObjectName(QString::fromUtf8("optionsField"));

        gridLayout->addWidget(optionsField, 1, 1, 1, 8);

        bCopyDriverName = new QPushButton(frame);
        bCopyDriverName->setObjectName(QString::fromUtf8("bCopyDriverName"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bCopyDriverName->sizePolicy().hasHeightForWidth());
        bCopyDriverName->setSizePolicy(sizePolicy);

        gridLayout->addWidget(bCopyDriverName, 2, 2, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 3, 1, 1);

        driversList = new QComboBox(frame);
        driversList->setObjectName(QString::fromUtf8("driversList"));

        gridLayout->addWidget(driversList, 2, 5, 1, 4);


        verticalLayout->addWidget(frame);

        textEdit = new TextEdit(SqlDatasetEditor);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(SqlDatasetEditor);

        QMetaObject::connectSlotsByName(SqlDatasetEditor);
    } // setupUi

    void retranslateUi(QWidget *SqlDatasetEditor)
    {
        SqlDatasetEditor->setWindowTitle(QApplication::translate("SqlDatasetEditor", "Form", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SqlDatasetEditor", "Database:", 0, QApplication::UnicodeUTF8));
        bLoadFile->setText(QApplication::translate("SqlDatasetEditor", "File...", 0, QApplication::UnicodeUTF8));
        bExtended->setText(QApplication::translate("SqlDatasetEditor", "Extended Options", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SqlDatasetEditor", "Host:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SqlDatasetEditor", "User:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SqlDatasetEditor", "Password:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SqlDatasetEditor", "Driver:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SqlDatasetEditor", "Options:", 0, QApplication::UnicodeUTF8));
        bCopyDriverName->setText(QApplication::translate("SqlDatasetEditor", "<<", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SqlDatasetEditor", "Available Drivers:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SqlDatasetEditor: public Ui_SqlDatasetEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLDATASETHELPER_H
