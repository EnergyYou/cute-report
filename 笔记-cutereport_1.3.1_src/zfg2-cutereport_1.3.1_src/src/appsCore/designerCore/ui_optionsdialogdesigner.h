/********************************************************************************
** Form generated from reading UI file 'optionsdialogdesigner.ui'
**
** Created: Wed Feb 8 11:24:41 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOGDESIGNER_H
#define UI_OPTIONSDIALOGDESIGNER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsDialogDesigner
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *rbLoadingStorage;
    QRadioButton *rbLoadingOS;
    QRadioButton *rbLoadingQt;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *cbItemsDetailLevel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *OptionsDialogDesigner)
    {
        if (OptionsDialogDesigner->objectName().isEmpty())
            OptionsDialogDesigner->setObjectName(QString::fromUtf8("OptionsDialogDesigner"));
        OptionsDialogDesigner->resize(640, 480);
        gridLayout = new QGridLayout(OptionsDialogDesigner);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(OptionsDialogDesigner);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rbLoadingStorage = new QRadioButton(groupBox);
        rbLoadingStorage->setObjectName(QString::fromUtf8("rbLoadingStorage"));
        rbLoadingStorage->setChecked(true);

        verticalLayout->addWidget(rbLoadingStorage);

        rbLoadingOS = new QRadioButton(groupBox);
        rbLoadingOS->setObjectName(QString::fromUtf8("rbLoadingOS"));

        verticalLayout->addWidget(rbLoadingOS);

        rbLoadingQt = new QRadioButton(groupBox);
        rbLoadingQt->setObjectName(QString::fromUtf8("rbLoadingQt"));

        verticalLayout->addWidget(rbLoadingQt);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(OptionsDialogDesigner);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        cbItemsDetailLevel = new QComboBox(groupBox_2);
        cbItemsDetailLevel->setObjectName(QString::fromUtf8("cbItemsDetailLevel"));

        gridLayout_2->addWidget(cbItemsDetailLevel, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(385, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(OptionsDialogDesigner);

        QMetaObject::connectSlotsByName(OptionsDialogDesigner);
    } // setupUi

    void retranslateUi(QWidget *OptionsDialogDesigner)
    {
        OptionsDialogDesigner->setWindowTitle(QApplication::translate("OptionsDialogDesigner", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("OptionsDialogDesigner", "Report loading method", 0, QApplication::UnicodeUTF8));
        rbLoadingStorage->setText(QApplication::translate("OptionsDialogDesigner", "Storage dialog", 0, QApplication::UnicodeUTF8));
        rbLoadingOS->setText(QApplication::translate("OptionsDialogDesigner", "OS file dialog", 0, QApplication::UnicodeUTF8));
        rbLoadingQt->setText(QApplication::translate("OptionsDialogDesigner", "Qt file dialog", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("OptionsDialogDesigner", "Look & Feel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OptionsDialogDesigner", "Items detail level:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialogDesigner: public Ui_OptionsDialogDesigner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOGDESIGNER_H
