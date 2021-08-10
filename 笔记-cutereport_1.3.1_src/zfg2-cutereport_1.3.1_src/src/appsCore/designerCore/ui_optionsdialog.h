/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created: Wed Feb 8 11:24:41 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QStackedWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QGridLayout *gridLayout;
    QListWidget *contentsWidget;
    QStackedWidget *pagesWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QString::fromUtf8("OptionsDialog"));
        OptionsDialog->resize(1109, 700);
        gridLayout = new QGridLayout(OptionsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        contentsWidget = new QListWidget(OptionsDialog);
        contentsWidget->setObjectName(QString::fromUtf8("contentsWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(contentsWidget->sizePolicy().hasHeightForWidth());
        contentsWidget->setSizePolicy(sizePolicy);
        contentsWidget->setMinimumSize(QSize(115, 0));
        contentsWidget->setMaximumSize(QSize(115, 16777215));
        contentsWidget->setBaseSize(QSize(0, 0));
        contentsWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        contentsWidget->setIconSize(QSize(96, 84));
        contentsWidget->setMovement(QListView::Static);
        contentsWidget->setSpacing(12);
        contentsWidget->setViewMode(QListView::IconMode);

        gridLayout->addWidget(contentsWidget, 0, 0, 2, 1);

        pagesWidget = new QStackedWidget(OptionsDialog);
        pagesWidget->setObjectName(QString::fromUtf8("pagesWidget"));
        pagesWidget->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(pagesWidget, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(OptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 1, 1, 1);


        retranslateUi(OptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QApplication::translate("OptionsDialog", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
