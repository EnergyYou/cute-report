/********************************************************************************
** Form generated from reading UI file 'storagesettingsdialog.ui'
**
** Created: Wed Feb 8 11:24:41 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORAGESETTINGSDIALOG_H
#define UI_STORAGESETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StorageSettingsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *mainLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StorageSettingsDialog)
    {
        if (StorageSettingsDialog->objectName().isEmpty())
            StorageSettingsDialog->setObjectName(QString::fromUtf8("StorageSettingsDialog"));
        StorageSettingsDialog->resize(787, 469);
        verticalLayout_2 = new QVBoxLayout(StorageSettingsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mainLayout = new QVBoxLayout();
        mainLayout->setSpacing(0);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));

        verticalLayout_2->addLayout(mainLayout);

        buttonBox = new QDialogButtonBox(StorageSettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(StorageSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), StorageSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StorageSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(StorageSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *StorageSettingsDialog)
    {
        StorageSettingsDialog->setWindowTitle(QApplication::translate("StorageSettingsDialog", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StorageSettingsDialog: public Ui_StorageSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORAGESETTINGSDIALOG_H
