/********************************************************************************
** Form generated from reading UI file 'modeldatasethelper.ui'
**
** Created: Sun Jan 22 17:34:26 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELDATASETHELPER_H
#define UI_MODELDATASETHELPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModelDatasetHelper
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *edModelName;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAddRow;
    QPushButton *btnDeleteRow;
    QPushButton *btnAddColumn;
    QPushButton *btnDeleteColumn;
    QLabel *labType;
    QComboBox *cmbCoulmnType;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;

    void setupUi(QWidget *ModelDatasetHelper)
    {
        if (ModelDatasetHelper->objectName().isEmpty())
            ModelDatasetHelper->setObjectName(QString::fromUtf8("ModelDatasetHelper"));
        ModelDatasetHelper->resize(694, 403);
        verticalLayout = new QVBoxLayout(ModelDatasetHelper);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(ModelDatasetHelper);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        edModelName = new QLineEdit(ModelDatasetHelper);
        edModelName->setObjectName(QString::fromUtf8("edModelName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, edModelName);


        verticalLayout->addLayout(formLayout);

        label_3 = new QLabel(ModelDatasetHelper);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAddRow = new QPushButton(ModelDatasetHelper);
        btnAddRow->setObjectName(QString::fromUtf8("btnAddRow"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/add_row.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddRow->setIcon(icon);
        btnAddRow->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(btnAddRow);

        btnDeleteRow = new QPushButton(ModelDatasetHelper);
        btnDeleteRow->setObjectName(QString::fromUtf8("btnDeleteRow"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/remove_row.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDeleteRow->setIcon(icon1);
        btnDeleteRow->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(btnDeleteRow);

        btnAddColumn = new QPushButton(ModelDatasetHelper);
        btnAddColumn->setObjectName(QString::fromUtf8("btnAddColumn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/add_col.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAddColumn->setIcon(icon2);
        btnAddColumn->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(btnAddColumn);

        btnDeleteColumn = new QPushButton(ModelDatasetHelper);
        btnDeleteColumn->setObjectName(QString::fromUtf8("btnDeleteColumn"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/remove_col.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDeleteColumn->setIcon(icon3);
        btnDeleteColumn->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(btnDeleteColumn);

        labType = new QLabel(ModelDatasetHelper);
        labType->setObjectName(QString::fromUtf8("labType"));

        horizontalLayout->addWidget(labType);

        cmbCoulmnType = new QComboBox(ModelDatasetHelper);
        cmbCoulmnType->setObjectName(QString::fromUtf8("cmbCoulmnType"));
        cmbCoulmnType->setMinimumSize(QSize(0, 26));
        cmbCoulmnType->setEditable(false);
        cmbCoulmnType->setIconSize(QSize(20, 20));
        cmbCoulmnType->setFrame(true);

        horizontalLayout->addWidget(cmbCoulmnType);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(ModelDatasetHelper);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(ModelDatasetHelper);

        QMetaObject::connectSlotsByName(ModelDatasetHelper);
    } // setupUi

    void retranslateUi(QWidget *ModelDatasetHelper)
    {
        ModelDatasetHelper->setWindowTitle(QApplication::translate("ModelDatasetHelper", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ModelDatasetHelper", "Model name:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ModelDatasetHelper", "Test model", 0, QApplication::UnicodeUTF8));
        btnAddRow->setText(QApplication::translate("ModelDatasetHelper", "Add row", 0, QApplication::UnicodeUTF8));
        btnDeleteRow->setText(QApplication::translate("ModelDatasetHelper", "Remove row", 0, QApplication::UnicodeUTF8));
        btnAddColumn->setText(QApplication::translate("ModelDatasetHelper", "Add column", 0, QApplication::UnicodeUTF8));
        btnDeleteColumn->setText(QApplication::translate("ModelDatasetHelper", "Remove column", 0, QApplication::UnicodeUTF8));
        labType->setText(QApplication::translate("ModelDatasetHelper", "Column type:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModelDatasetHelper: public Ui_ModelDatasetHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELDATASETHELPER_H
