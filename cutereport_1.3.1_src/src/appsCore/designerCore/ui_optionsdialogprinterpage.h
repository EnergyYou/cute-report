/********************************************************************************
** Form generated from reading UI file 'optionsdialogprinterpage.ui'
**
** Created: Sun Jan 22 17:27:11 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOGPRINTERPAGE_H
#define UI_OPTIONSDIALOGPRINTERPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsDialogPrinterPage
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLabel *label_10;
    QLineEdit *leDefault;
    QHBoxLayout *horizontalLayout;
    QLabel *labelRendering_2;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *bDelete;
    QToolButton *bResetDefault;
    QToolButton *bAdd;
    QTreeWidget *objectList;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *objectType;
    QToolButton *bDefault;
    QFrame *line;
    QWidget *widget;
    QGridLayout *gridLayout_7;
    QVBoxLayout *helperLayout;

    void setupUi(QWidget *OptionsDialogPrinterPage)
    {
        if (OptionsDialogPrinterPage->objectName().isEmpty())
            OptionsDialogPrinterPage->setObjectName(QString::fromUtf8("OptionsDialogPrinterPage"));
        OptionsDialogPrinterPage->resize(716, 490);
        gridLayout = new QGridLayout(OptionsDialogPrinterPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_2 = new QWidget(OptionsDialogPrinterPage);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(widget_2);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_4, 5, 0, 1, 6);

        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_10, 3, 0, 1, 6);

        leDefault = new QLineEdit(widget_2);
        leDefault->setObjectName(QString::fromUtf8("leDefault"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leDefault->sizePolicy().hasHeightForWidth());
        leDefault->setSizePolicy(sizePolicy2);
        leDefault->setReadOnly(true);

        gridLayout_4->addWidget(leDefault, 6, 0, 1, 6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelRendering_2 = new QLabel(widget_2);
        labelRendering_2->setObjectName(QString::fromUtf8("labelRendering_2"));
        sizePolicy1.setHeightForWidth(labelRendering_2->sizePolicy().hasHeightForWidth());
        labelRendering_2->setSizePolicy(sizePolicy1);
        labelRendering_2->setMinimumSize(QSize(130, 0));

        horizontalLayout->addWidget(labelRendering_2);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_4->addLayout(horizontalLayout, 1, 0, 1, 6);

        bDelete = new QToolButton(widget_2);
        bDelete->setObjectName(QString::fromUtf8("bDelete"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/trash-empty.png"), QSize(), QIcon::Normal, QIcon::Off);
        bDelete->setIcon(icon);
        bDelete->setIconSize(QSize(22, 22));
        bDelete->setAutoRaise(true);

        gridLayout_4->addWidget(bDelete, 0, 1, 1, 1);

        bResetDefault = new QToolButton(widget_2);
        bResetDefault->setObjectName(QString::fromUtf8("bResetDefault"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/editdelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        bResetDefault->setIcon(icon1);
        bResetDefault->setIconSize(QSize(22, 22));
        bResetDefault->setAutoRaise(true);

        gridLayout_4->addWidget(bResetDefault, 0, 3, 1, 1);

        bAdd = new QToolButton(widget_2);
        bAdd->setObjectName(QString::fromUtf8("bAdd"));
        bAdd->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        bAdd->setIcon(icon2);
        bAdd->setIconSize(QSize(22, 22));
        bAdd->setPopupMode(QToolButton::InstantPopup);
        bAdd->setAutoRaise(true);

        gridLayout_4->addWidget(bAdd, 0, 0, 1, 1);

        objectList = new QTreeWidget(widget_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        objectList->setHeaderItem(__qtreewidgetitem);
        objectList->setObjectName(QString::fromUtf8("objectList"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(objectList->sizePolicy().hasHeightForWidth());
        objectList->setSizePolicy(sizePolicy3);
        objectList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        objectList->setRootIsDecorated(false);
        objectList->setItemsExpandable(false);
        objectList->setHeaderHidden(true);

        gridLayout_4->addWidget(objectList, 2, 0, 1, 6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 5, 1, 1);

        objectType = new QLineEdit(widget_2);
        objectType->setObjectName(QString::fromUtf8("objectType"));
        objectType->setReadOnly(true);

        gridLayout_4->addWidget(objectType, 4, 0, 1, 6);

        bDefault = new QToolButton(widget_2);
        bDefault->setObjectName(QString::fromUtf8("bDefault"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/validate.png"), QSize(), QIcon::Normal, QIcon::Off);
        bDefault->setIcon(icon3);
        bDefault->setIconSize(QSize(22, 22));
        bDefault->setAutoRaise(true);

        gridLayout_4->addWidget(bDefault, 0, 2, 1, 1);


        gridLayout->addWidget(widget_2, 0, 0, 1, 1);

        line = new QFrame(OptionsDialogPrinterPage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        widget = new QWidget(OptionsDialogPrinterPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy4);
        gridLayout_7 = new QGridLayout(widget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        helperLayout = new QVBoxLayout();
        helperLayout->setObjectName(QString::fromUtf8("helperLayout"));
        helperLayout->setSizeConstraint(QLayout::SetMaximumSize);

        gridLayout_7->addLayout(helperLayout, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 2, 1, 1);


        retranslateUi(OptionsDialogPrinterPage);

        QMetaObject::connectSlotsByName(OptionsDialogPrinterPage);
    } // setupUi

    void retranslateUi(QWidget *OptionsDialogPrinterPage)
    {
        OptionsDialogPrinterPage->setWindowTitle(QApplication::translate("OptionsDialogPrinterPage", "Form", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OptionsDialogPrinterPage", "Default printer name:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("OptionsDialogPrinterPage", "Selected printer Type:", 0, QApplication::UnicodeUTF8));
        labelRendering_2->setText(QApplication::translate("OptionsDialogPrinterPage", "Assigned printers:", 0, QApplication::UnicodeUTF8));
        bDelete->setText(QApplication::translate("OptionsDialogPrinterPage", "...", 0, QApplication::UnicodeUTF8));
        bResetDefault->setText(QString());
        bAdd->setText(QApplication::translate("OptionsDialogPrinterPage", "...", 0, QApplication::UnicodeUTF8));
        bDefault->setText(QApplication::translate("OptionsDialogPrinterPage", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialogPrinterPage: public Ui_OptionsDialogPrinterPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOGPRINTERPAGE_H
