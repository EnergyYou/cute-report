/********************************************************************************
** Form generated from reading UI file 'optionsdialogstoragepage.ui'
**
** Created: Sun Jan 22 17:27:11 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOGSTORAGEPAGE_H
#define UI_OPTIONSDIALOGSTORAGEPAGE_H

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

class Ui_OptionsDialogStoragePage
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLabel *label_10;
    QLineEdit *leDefaultStorage;
    QHBoxLayout *horizontalLayout;
    QLabel *labelRendering_2;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *bDeleteStorage;
    QToolButton *bResetDefaultStorage;
    QToolButton *bAddStorage;
    QTreeWidget *storageList;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *storageType;
    QToolButton *bDefaultStorage;
    QFrame *line;
    QWidget *widget;
    QGridLayout *gridLayout_7;
    QVBoxLayout *storageHelperLayout;

    void setupUi(QWidget *OptionsDialogStoragePage)
    {
        if (OptionsDialogStoragePage->objectName().isEmpty())
            OptionsDialogStoragePage->setObjectName(QString::fromUtf8("OptionsDialogStoragePage"));
        OptionsDialogStoragePage->resize(870, 480);
        gridLayout = new QGridLayout(OptionsDialogStoragePage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_2 = new QWidget(OptionsDialogStoragePage);
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

        leDefaultStorage = new QLineEdit(widget_2);
        leDefaultStorage->setObjectName(QString::fromUtf8("leDefaultStorage"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leDefaultStorage->sizePolicy().hasHeightForWidth());
        leDefaultStorage->setSizePolicy(sizePolicy2);
        leDefaultStorage->setReadOnly(true);

        gridLayout_4->addWidget(leDefaultStorage, 6, 0, 1, 6);

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

        bDeleteStorage = new QToolButton(widget_2);
        bDeleteStorage->setObjectName(QString::fromUtf8("bDeleteStorage"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/trash-empty.png"), QSize(), QIcon::Normal, QIcon::Off);
        bDeleteStorage->setIcon(icon);
        bDeleteStorage->setIconSize(QSize(22, 22));
        bDeleteStorage->setAutoRaise(true);

        gridLayout_4->addWidget(bDeleteStorage, 0, 1, 1, 1);

        bResetDefaultStorage = new QToolButton(widget_2);
        bResetDefaultStorage->setObjectName(QString::fromUtf8("bResetDefaultStorage"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/editdelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        bResetDefaultStorage->setIcon(icon1);
        bResetDefaultStorage->setIconSize(QSize(22, 22));
        bResetDefaultStorage->setAutoRaise(true);

        gridLayout_4->addWidget(bResetDefaultStorage, 0, 3, 1, 1);

        bAddStorage = new QToolButton(widget_2);
        bAddStorage->setObjectName(QString::fromUtf8("bAddStorage"));
        bAddStorage->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        bAddStorage->setIcon(icon2);
        bAddStorage->setIconSize(QSize(22, 22));
        bAddStorage->setPopupMode(QToolButton::InstantPopup);
        bAddStorage->setAutoRaise(true);

        gridLayout_4->addWidget(bAddStorage, 0, 0, 1, 1);

        storageList = new QTreeWidget(widget_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        storageList->setHeaderItem(__qtreewidgetitem);
        storageList->setObjectName(QString::fromUtf8("storageList"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(storageList->sizePolicy().hasHeightForWidth());
        storageList->setSizePolicy(sizePolicy3);
        storageList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        storageList->setRootIsDecorated(false);
        storageList->setItemsExpandable(false);
        storageList->setHeaderHidden(true);

        gridLayout_4->addWidget(storageList, 2, 0, 1, 6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 5, 1, 1);

        storageType = new QLineEdit(widget_2);
        storageType->setObjectName(QString::fromUtf8("storageType"));
        storageType->setReadOnly(true);

        gridLayout_4->addWidget(storageType, 4, 0, 1, 6);

        bDefaultStorage = new QToolButton(widget_2);
        bDefaultStorage->setObjectName(QString::fromUtf8("bDefaultStorage"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/validate.png"), QSize(), QIcon::Normal, QIcon::Off);
        bDefaultStorage->setIcon(icon3);
        bDefaultStorage->setIconSize(QSize(22, 22));
        bDefaultStorage->setAutoRaise(true);

        gridLayout_4->addWidget(bDefaultStorage, 0, 2, 1, 1);


        gridLayout->addWidget(widget_2, 0, 0, 1, 1);

        line = new QFrame(OptionsDialogStoragePage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        widget = new QWidget(OptionsDialogStoragePage);
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
        storageHelperLayout = new QVBoxLayout();
        storageHelperLayout->setObjectName(QString::fromUtf8("storageHelperLayout"));
        storageHelperLayout->setSizeConstraint(QLayout::SetMaximumSize);

        gridLayout_7->addLayout(storageHelperLayout, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 2, 1, 1);


        retranslateUi(OptionsDialogStoragePage);

        QMetaObject::connectSlotsByName(OptionsDialogStoragePage);
    } // setupUi

    void retranslateUi(QWidget *OptionsDialogStoragePage)
    {
        OptionsDialogStoragePage->setWindowTitle(QApplication::translate("OptionsDialogStoragePage", "Form", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OptionsDialogStoragePage", "Default storage name:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("OptionsDialogStoragePage", "Selected storage Type:", 0, QApplication::UnicodeUTF8));
        labelRendering_2->setText(QApplication::translate("OptionsDialogStoragePage", "Assigned storages:", 0, QApplication::UnicodeUTF8));
        bDeleteStorage->setText(QApplication::translate("OptionsDialogStoragePage", "...", 0, QApplication::UnicodeUTF8));
        bResetDefaultStorage->setText(QString());
        bAddStorage->setText(QApplication::translate("OptionsDialogStoragePage", "...", 0, QApplication::UnicodeUTF8));
        bDefaultStorage->setText(QApplication::translate("OptionsDialogStoragePage", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialogStoragePage: public Ui_OptionsDialogStoragePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOGSTORAGEPAGE_H
