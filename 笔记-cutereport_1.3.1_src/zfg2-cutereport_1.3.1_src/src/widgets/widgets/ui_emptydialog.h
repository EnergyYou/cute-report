/********************************************************************************
** Form generated from reading UI file 'emptydialog.ui'
**
** Created: Wed Feb 8 11:23:53 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPTYDIALOG_H
#define UI_EMPTYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EmptyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *mainLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EmptyDialog)
    {
        if (EmptyDialog->objectName().isEmpty())
            EmptyDialog->setObjectName(QString::fromUtf8("EmptyDialog"));
        EmptyDialog->resize(733, 524);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        EmptyDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(EmptyDialog);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        mainLayout = new QVBoxLayout();
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));

        verticalLayout->addLayout(mainLayout);

        buttonBox = new QDialogButtonBox(EmptyDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setFocusPolicy(Qt::NoFocus);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EmptyDialog);

        QMetaObject::connectSlotsByName(EmptyDialog);
    } // setupUi

    void retranslateUi(QDialog *EmptyDialog)
    {
        EmptyDialog->setWindowTitle(QApplication::translate("EmptyDialog", "CuteReport", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EmptyDialog: public Ui_EmptyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPTYDIALOG_H
