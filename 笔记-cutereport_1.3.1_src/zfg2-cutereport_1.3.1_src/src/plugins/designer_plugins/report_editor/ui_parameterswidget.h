/********************************************************************************
** Form generated from reading UI file 'parameterswidget.ui'
**
** Created: Wed Feb 8 11:32:35 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETERSWIDGET_H
#define UI_PARAMETERSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParametersWidget
{
public:
    QGridLayout *gridLayout;
    QTableView *variables;

    void setupUi(QWidget *ParametersWidget)
    {
        if (ParametersWidget->objectName().isEmpty())
            ParametersWidget->setObjectName(QString::fromUtf8("ParametersWidget"));
        ParametersWidget->resize(512, 360);
        gridLayout = new QGridLayout(ParametersWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        variables = new QTableView(ParametersWidget);
        variables->setObjectName(QString::fromUtf8("variables"));

        gridLayout->addWidget(variables, 0, 0, 1, 1);


        retranslateUi(ParametersWidget);

        QMetaObject::connectSlotsByName(ParametersWidget);
    } // setupUi

    void retranslateUi(QWidget *ParametersWidget)
    {
        ParametersWidget->setWindowTitle(QApplication::translate("ParametersWidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ParametersWidget: public Ui_ParametersWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETERSWIDGET_H
