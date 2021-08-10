/********************************************************************************
** Form generated from reading UI file 'sqlstoragehelper.ui'
**
** Created: Wed Feb 8 11:29:47 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLSTORAGEHELPER_H
#define UI_SQLSTORAGEHELPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SqlStorageHelper
{
public:
    QFormLayout *formLayout;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbDriver;
    QLabel *label;
    QLineEdit *edHost;
    QLabel *label_5;
    QSpinBox *edPort;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *edUser;
    QLabel *label_4;
    QLineEdit *edPassword;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *edDatabase;
    QToolButton *btnChoose;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnTest;
    QCheckBox *ckUseDefault;
    QLabel *label_11;
    QLineEdit *edConnection;
    QFrame *line;
    QLabel *label_10;
    QLineEdit *edTable;
    QLabel *label_7;
    QLineEdit *edColId;
    QLabel *label_9;
    QLineEdit *edColData;

    void setupUi(QWidget *SqlStorageHelper)
    {
        if (SqlStorageHelper->objectName().isEmpty())
            SqlStorageHelper->setObjectName(QString::fromUtf8("SqlStorageHelper"));
        SqlStorageHelper->resize(460, 330);
        formLayout = new QFormLayout(SqlStorageHelper);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_6 = new QLabel(SqlStorageHelper);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cmbDriver = new QComboBox(SqlStorageHelper);
        cmbDriver->setObjectName(QString::fromUtf8("cmbDriver"));
        cmbDriver->setEditable(true);

        horizontalLayout->addWidget(cmbDriver);

        label = new QLabel(SqlStorageHelper);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        edHost = new QLineEdit(SqlStorageHelper);
        edHost->setObjectName(QString::fromUtf8("edHost"));

        horizontalLayout->addWidget(edHost);

        label_5 = new QLabel(SqlStorageHelper);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        edPort = new QSpinBox(SqlStorageHelper);
        edPort->setObjectName(QString::fromUtf8("edPort"));
        edPort->setMaximum(64900);

        horizontalLayout->addWidget(edPort);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        label_3 = new QLabel(SqlStorageHelper);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        edUser = new QLineEdit(SqlStorageHelper);
        edUser->setObjectName(QString::fromUtf8("edUser"));

        horizontalLayout_2->addWidget(edUser);

        label_4 = new QLabel(SqlStorageHelper);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        edPassword = new QLineEdit(SqlStorageHelper);
        edPassword->setObjectName(QString::fromUtf8("edPassword"));
        edPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(edPassword);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);

        label_2 = new QLabel(SqlStorageHelper);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        edDatabase = new QLineEdit(SqlStorageHelper);
        edDatabase->setObjectName(QString::fromUtf8("edDatabase"));

        horizontalLayout_3->addWidget(edDatabase);

        btnChoose = new QToolButton(SqlStorageHelper);
        btnChoose->setObjectName(QString::fromUtf8("btnChoose"));
        btnChoose->setEnabled(false);

        horizontalLayout_3->addWidget(btnChoose);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btnTest = new QPushButton(SqlStorageHelper);
        btnTest->setObjectName(QString::fromUtf8("btnTest"));
        btnTest->setEnabled(false);

        horizontalLayout_4->addWidget(btnTest);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_4);

        ckUseDefault = new QCheckBox(SqlStorageHelper);
        ckUseDefault->setObjectName(QString::fromUtf8("ckUseDefault"));

        formLayout->setWidget(4, QFormLayout::FieldRole, ckUseDefault);

        label_11 = new QLabel(SqlStorageHelper);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_11);

        edConnection = new QLineEdit(SqlStorageHelper);
        edConnection->setObjectName(QString::fromUtf8("edConnection"));

        formLayout->setWidget(5, QFormLayout::FieldRole, edConnection);

        line = new QFrame(SqlStorageHelper);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(6, QFormLayout::SpanningRole, line);

        label_10 = new QLabel(SqlStorageHelper);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_10);

        edTable = new QLineEdit(SqlStorageHelper);
        edTable->setObjectName(QString::fromUtf8("edTable"));

        formLayout->setWidget(7, QFormLayout::FieldRole, edTable);

        label_7 = new QLabel(SqlStorageHelper);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_7);

        edColId = new QLineEdit(SqlStorageHelper);
        edColId->setObjectName(QString::fromUtf8("edColId"));

        formLayout->setWidget(8, QFormLayout::FieldRole, edColId);

        label_9 = new QLabel(SqlStorageHelper);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_9);

        edColData = new QLineEdit(SqlStorageHelper);
        edColData->setObjectName(QString::fromUtf8("edColData"));

        formLayout->setWidget(9, QFormLayout::FieldRole, edColData);


        retranslateUi(SqlStorageHelper);

        QMetaObject::connectSlotsByName(SqlStorageHelper);
    } // setupUi

    void retranslateUi(QWidget *SqlStorageHelper)
    {
        SqlStorageHelper->setWindowTitle(QApplication::translate("SqlStorageHelper", "Form", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SqlStorageHelper", "Driver:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SqlStorageHelper", "Host:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SqlStorageHelper", "Port:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SqlStorageHelper", "User:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SqlStorageHelper", "Password:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SqlStorageHelper", "Database:", 0, QApplication::UnicodeUTF8));
        btnChoose->setText(QApplication::translate("SqlStorageHelper", "...", 0, QApplication::UnicodeUTF8));
        btnTest->setText(QApplication::translate("SqlStorageHelper", "Test", 0, QApplication::UnicodeUTF8));
        ckUseDefault->setText(QApplication::translate("SqlStorageHelper", "Use as default connection", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("SqlStorageHelper", "Connection Id:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("SqlStorageHelper", "Table:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SqlStorageHelper", "Column id:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("SqlStorageHelper", "Column Data:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SqlStorageHelper: public Ui_SqlStorageHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLSTORAGEHELPER_H
