/********************************************************************************
** Form generated from reading UI file 'renamedialog.ui'
**
** Created: Wed Feb 8 11:24:41 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMEDIALOG_H
#define UI_RENAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_RenameDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QLabel *validationText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RenameDialog)
    {
        if (RenameDialog->objectName().isEmpty())
            RenameDialog->setObjectName(QString::fromUtf8("RenameDialog"));
        RenameDialog->resize(491, 94);
        gridLayout = new QGridLayout(RenameDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(RenameDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        name = new QLineEdit(RenameDialog);
        name->setObjectName(QString::fromUtf8("name"));

        gridLayout->addWidget(name, 0, 1, 1, 1);

        label_2 = new QLabel(RenameDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        validationText = new QLabel(RenameDialog);
        validationText->setObjectName(QString::fromUtf8("validationText"));

        gridLayout->addWidget(validationText, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(RenameDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(RenameDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RenameDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RenameDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RenameDialog);
    } // setupUi

    void retranslateUi(QDialog *RenameDialog)
    {
        RenameDialog->setWindowTitle(QApplication::translate("RenameDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RenameDialog", "New Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RenameDialog", "Validation:", 0, QApplication::UnicodeUTF8));
        validationText->setText(QApplication::translate("RenameDialog", "text", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RenameDialog: public Ui_RenameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAMEDIALOG_H
