/********************************************************************************
** Form generated from reading UI file 'resourcestoragehelper.ui'
**
** Created: Wed Feb 8 11:29:35 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCESTORAGEHELPER_H
#define UI_RESOURCESTORAGEHELPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "objectpreview.h"

QT_BEGIN_NAMESPACE

class Ui_ResourceStorageHelper
{
public:
    QGridLayout *gridLayout_3;
    QWidget *switchWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbReports;
    QRadioButton *rbObjects;
    QSpacerItem *horizontalSpacer_3;
    QSplitter *splitter;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *bRemoveObject;
    QToolButton *bAddObject;
    QLabel *label_2;
    QListWidget *objectsList;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *bRemovePrefix;
    QPushButton *bAddPrefix;
    QListWidget *objectPrefixList;
    QSpacerItem *horizontalSpacer_2;
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QToolButton *bRemoveReport;
    QSpacerItem *horizontalSpacer_4;
    QListWidget *reportsList;
    QToolButton *bAddReport;
    CuteReport::ObjectPreview *objectsPreview;

    void setupUi(QWidget *ResourceStorageHelper)
    {
        if (ResourceStorageHelper->objectName().isEmpty())
            ResourceStorageHelper->setObjectName(QString::fromUtf8("ResourceStorageHelper"));
        ResourceStorageHelper->resize(672, 530);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ResourceStorageHelper->sizePolicy().hasHeightForWidth());
        ResourceStorageHelper->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(ResourceStorageHelper);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        switchWidget = new QWidget(ResourceStorageHelper);
        switchWidget->setObjectName(QString::fromUtf8("switchWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(switchWidget->sizePolicy().hasHeightForWidth());
        switchWidget->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(switchWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        rbReports = new QRadioButton(switchWidget);
        rbReports->setObjectName(QString::fromUtf8("rbReports"));
        rbReports->setChecked(true);

        horizontalLayout->addWidget(rbReports);

        rbObjects = new QRadioButton(switchWidget);
        rbObjects->setObjectName(QString::fromUtf8("rbObjects"));

        horizontalLayout->addWidget(rbObjects);

        horizontalSpacer_3 = new QSpacerItem(551, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_3->addWidget(switchWidget, 0, 0, 1, 2);

        splitter = new QSplitter(ResourceStorageHelper);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy2);
        splitter->setOrientation(Qt::Horizontal);
        stackedWidget = new QStackedWidget(splitter);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        bRemoveObject = new QPushButton(page);
        bRemoveObject->setObjectName(QString::fromUtf8("bRemoveObject"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(bRemoveObject->sizePolicy().hasHeightForWidth());
        bRemoveObject->setSizePolicy(sizePolicy3);
        bRemoveObject->setMinimumSize(QSize(40, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        bRemoveObject->setIcon(icon);

        gridLayout->addWidget(bRemoveObject, 0, 8, 1, 1);

        bAddObject = new QToolButton(page);
        bAddObject->setObjectName(QString::fromUtf8("bAddObject"));
        sizePolicy3.setHeightForWidth(bAddObject->sizePolicy().hasHeightForWidth());
        bAddObject->setSizePolicy(sizePolicy3);
        bAddObject->setMinimumSize(QSize(40, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        bAddObject->setIcon(icon1);
        bAddObject->setPopupMode(QToolButton::InstantPopup);
        bAddObject->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        bAddObject->setArrowType(Qt::NoArrow);

        gridLayout->addWidget(bAddObject, 0, 7, 1, 1);

        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 6, 1, 1);

        objectsList = new QListWidget(page);
        objectsList->setObjectName(QString::fromUtf8("objectsList"));
        sizePolicy.setHeightForWidth(objectsList->sizePolicy().hasHeightForWidth());
        objectsList->setSizePolicy(sizePolicy);
        objectsList->setMinimumSize(QSize(20, 20));

        gridLayout->addWidget(objectsList, 1, 6, 1, 5);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 5, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        bRemovePrefix = new QPushButton(page);
        bRemovePrefix->setObjectName(QString::fromUtf8("bRemovePrefix"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(bRemovePrefix->sizePolicy().hasHeightForWidth());
        bRemovePrefix->setSizePolicy(sizePolicy4);
        bRemovePrefix->setIcon(icon);

        gridLayout->addWidget(bRemovePrefix, 0, 3, 1, 1);

        bAddPrefix = new QPushButton(page);
        bAddPrefix->setObjectName(QString::fromUtf8("bAddPrefix"));
        sizePolicy4.setHeightForWidth(bAddPrefix->sizePolicy().hasHeightForWidth());
        bAddPrefix->setSizePolicy(sizePolicy4);
        bAddPrefix->setIcon(icon1);

        gridLayout->addWidget(bAddPrefix, 0, 2, 1, 1);

        objectPrefixList = new QListWidget(page);
        objectPrefixList->setObjectName(QString::fromUtf8("objectPrefixList"));
        sizePolicy.setHeightForWidth(objectPrefixList->sizePolicy().hasHeightForWidth());
        objectPrefixList->setSizePolicy(sizePolicy);
        objectPrefixList->setMinimumSize(QSize(20, 20));
        objectPrefixList->setResizeMode(QListView::Fixed);

        gridLayout->addWidget(objectPrefixList, 1, 0, 1, 6);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 9, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        bRemoveReport = new QToolButton(page_2);
        bRemoveReport->setObjectName(QString::fromUtf8("bRemoveReport"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(bRemoveReport->sizePolicy().hasHeightForWidth());
        bRemoveReport->setSizePolicy(sizePolicy5);
        bRemoveReport->setMinimumSize(QSize(40, 0));
        bRemoveReport->setIcon(icon);

        gridLayout_4->addWidget(bRemoveReport, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(722, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        reportsList = new QListWidget(page_2);
        reportsList->setObjectName(QString::fromUtf8("reportsList"));

        gridLayout_4->addWidget(reportsList, 1, 0, 1, 3);

        bAddReport = new QToolButton(page_2);
        bAddReport->setObjectName(QString::fromUtf8("bAddReport"));
        sizePolicy3.setHeightForWidth(bAddReport->sizePolicy().hasHeightForWidth());
        bAddReport->setSizePolicy(sizePolicy3);
        bAddReport->setMinimumSize(QSize(40, 0));
        bAddReport->setIcon(icon1);
        bAddReport->setPopupMode(QToolButton::InstantPopup);
        bAddReport->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        bAddReport->setArrowType(Qt::NoArrow);

        gridLayout_4->addWidget(bAddReport, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        splitter->addWidget(stackedWidget);
        objectsPreview = new CuteReport::ObjectPreview(splitter);
        objectsPreview->setObjectName(QString::fromUtf8("objectsPreview"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(objectsPreview->sizePolicy().hasHeightForWidth());
        objectsPreview->setSizePolicy(sizePolicy6);
        objectsPreview->setMinimumSize(QSize(30, 30));
        splitter->addWidget(objectsPreview);

        gridLayout_3->addWidget(splitter, 1, 0, 1, 2);


        retranslateUi(ResourceStorageHelper);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ResourceStorageHelper);
    } // setupUi

    void retranslateUi(QWidget *ResourceStorageHelper)
    {
        ResourceStorageHelper->setWindowTitle(QApplication::translate("ResourceStorageHelper", "Form", 0, QApplication::UnicodeUTF8));
        rbReports->setText(QApplication::translate("ResourceStorageHelper", "Reports", 0, QApplication::UnicodeUTF8));
        rbObjects->setText(QApplication::translate("ResourceStorageHelper", "Objects", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ResourceStorageHelper", "Prefixes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bRemoveObject->setToolTip(QApplication::translate("ResourceStorageHelper", "Remove object", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        bAddObject->setToolTip(QApplication::translate("ResourceStorageHelper", "Add Object", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("ResourceStorageHelper", "Objects", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bRemovePrefix->setToolTip(QApplication::translate("ResourceStorageHelper", "Remove prefix", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        bAddPrefix->setToolTip(QApplication::translate("ResourceStorageHelper", "Add Prefix", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bRemoveReport->setText(QApplication::translate("ResourceStorageHelper", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bAddReport->setToolTip(QApplication::translate("ResourceStorageHelper", "Add Object", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class ResourceStorageHelper: public Ui_ResourceStorageHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCESTORAGEHELPER_H
