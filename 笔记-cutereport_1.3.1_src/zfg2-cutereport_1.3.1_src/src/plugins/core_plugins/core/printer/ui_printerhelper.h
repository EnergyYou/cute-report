/********************************************************************************
** Form generated from reading UI file 'printerhelper.ui'
**
** Created: Wed Feb 8 11:26:39 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTERHELPER_H
#define UI_PRINTERHELPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrinterHelper
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QCheckBox *checkBox;

    void setupUi(QWidget *PrinterHelper)
    {
        if (PrinterHelper->objectName().isEmpty())
            PrinterHelper->setObjectName(QString::fromUtf8("PrinterHelper"));
        PrinterHelper->resize(400, 300);
        gridLayout_2 = new QGridLayout(PrinterHelper);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(PrinterHelper);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

        tabWidget = new QTabWidget(PrinterHelper);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        gridLayout_2->addWidget(tabWidget, 2, 0, 1, 1);

        checkBox = new QCheckBox(PrinterHelper);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_2->addWidget(checkBox, 0, 0, 1, 1);


        retranslateUi(PrinterHelper);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PrinterHelper);
    } // setupUi

    void retranslateUi(QWidget *PrinterHelper)
    {
        PrinterHelper->setWindowTitle(QApplication::translate("PrinterHelper", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PrinterHelper", "Printer", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("PrinterHelper", "Properties", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PrinterHelper", "Printer Info:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PrinterHelper", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PrinterHelper", "Output File:", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("PrinterHelper", "...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PrinterHelper", "Copies", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PrinterHelper", "Options", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("PrinterHelper", "Pages", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("PrinterHelper", "Show Print Dialog before printing", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PrinterHelper: public Ui_PrinterHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTERHELPER_H
