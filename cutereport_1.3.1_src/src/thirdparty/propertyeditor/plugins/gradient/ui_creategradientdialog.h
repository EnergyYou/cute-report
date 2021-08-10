/********************************************************************************
** Form generated from reading UI file 'creategradientdialog.ui'
**
** Created: Sun Jan 22 16:08:07 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEGRADIENTDIALOG_H
#define UI_CREATEGRADIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateGradientDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *bAddPoint;
    QPushButton *bDeletePoint;
    QPushButton *bChooseColor;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tableWidget;
    QWidget *preview;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateGradientDialog)
    {
        if (CreateGradientDialog->objectName().isEmpty())
            CreateGradientDialog->setObjectName(QString::fromUtf8("CreateGradientDialog"));
        CreateGradientDialog->resize(640, 480);
        gridLayout = new QGridLayout(CreateGradientDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bAddPoint = new QPushButton(CreateGradientDialog);
        bAddPoint->setObjectName(QString::fromUtf8("bAddPoint"));

        horizontalLayout->addWidget(bAddPoint);

        bDeletePoint = new QPushButton(CreateGradientDialog);
        bDeletePoint->setObjectName(QString::fromUtf8("bDeletePoint"));

        horizontalLayout->addWidget(bDeletePoint);

        bChooseColor = new QPushButton(CreateGradientDialog);
        bChooseColor->setObjectName(QString::fromUtf8("bChooseColor"));

        horizontalLayout->addWidget(bChooseColor);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tableWidget = new QTableWidget(CreateGradientDialog);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(tableWidget);

        preview = new QWidget(CreateGradientDialog);
        preview->setObjectName(QString::fromUtf8("preview"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(preview->sizePolicy().hasHeightForWidth());
        preview->setSizePolicy(sizePolicy1);
        preview->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(preview);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CreateGradientDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(CreateGradientDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateGradientDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateGradientDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateGradientDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateGradientDialog)
    {
        CreateGradientDialog->setWindowTitle(QApplication::translate("CreateGradientDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        bAddPoint->setText(QApplication::translate("CreateGradientDialog", "Add Point", 0, QApplication::UnicodeUTF8));
        bDeletePoint->setText(QApplication::translate("CreateGradientDialog", "Delete Point", 0, QApplication::UnicodeUTF8));
        bChooseColor->setText(QApplication::translate("CreateGradientDialog", "Choose Color", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CreateGradientDialog", "Position", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CreateGradientDialog", "Color", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CreateGradientDialog: public Ui_CreateGradientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEGRADIENTDIALOG_H
