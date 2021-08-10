/********************************************************************************
** Form generated from reading UI file 'propertyeditor.ui'
**
** Created: Wed Feb 8 11:19:24 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYEDITOR_H
#define UI_PROPERTYEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_propertyeditor
{
public:
    QAction *actionNew_Form;
    QAction *actionOpen_From_File;
    QAction *actionDelete_Form;
    QVBoxLayout *verticalLayout;
    QTreeView *view;
    QTextEdit *description;

    void setupUi(QWidget *propertyeditor)
    {
        if (propertyeditor->objectName().isEmpty())
            propertyeditor->setObjectName(QString::fromUtf8("propertyeditor"));
        propertyeditor->resize(291, 513);
        propertyeditor->setMouseTracking(true);
        actionNew_Form = new QAction(propertyeditor);
        actionNew_Form->setObjectName(QString::fromUtf8("actionNew_Form"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/form_add_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Form->setIcon(icon);
        actionOpen_From_File = new QAction(propertyeditor);
        actionOpen_From_File->setObjectName(QString::fromUtf8("actionOpen_From_File"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/newReport.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_From_File->setIcon(icon1);
        actionDelete_Form = new QAction(propertyeditor);
        actionDelete_Form->setObjectName(QString::fromUtf8("actionDelete_Form"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/form_remove_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_Form->setIcon(icon2);
        verticalLayout = new QVBoxLayout(propertyeditor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        view = new QTreeView(propertyeditor);
        view->setObjectName(QString::fromUtf8("view"));
        view->setEditTriggers(QAbstractItemView::CurrentChanged|QAbstractItemView::SelectedClicked);
        view->setAlternatingRowColors(true);

        verticalLayout->addWidget(view);

        description = new QTextEdit(propertyeditor);
        description->setObjectName(QString::fromUtf8("description"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy);
        description->setMaximumSize(QSize(16777215, 80));
        description->setReadOnly(true);

        verticalLayout->addWidget(description);


        retranslateUi(propertyeditor);

        QMetaObject::connectSlotsByName(propertyeditor);
    } // setupUi

    void retranslateUi(QWidget *propertyeditor)
    {
        propertyeditor->setWindowTitle(QApplication::translate("propertyeditor", "Form", 0, QApplication::UnicodeUTF8));
        actionNew_Form->setText(QApplication::translate("propertyeditor", "New Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNew_Form->setToolTip(QApplication::translate("propertyeditor", "Create New form", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen_From_File->setText(QApplication::translate("propertyeditor", "Open From File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen_From_File->setToolTip(QApplication::translate("propertyeditor", "Open Form From File", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDelete_Form->setText(QApplication::translate("propertyeditor", "Delete Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDelete_Form->setToolTip(QApplication::translate("propertyeditor", "Delete Form", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class propertyeditor: public Ui_propertyeditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYEDITOR_H
