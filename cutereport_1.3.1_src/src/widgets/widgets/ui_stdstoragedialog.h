/********************************************************************************
** Form generated from reading UI file 'stdstoragedialog.ui'
**
** Created: Sun Jan 22 16:38:17 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STDSTORAGEDIALOG_H
#define UI_STDSTORAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "objectpreview.h"

QT_BEGIN_NAMESPACE

class Ui_StdStorageDialog
{
public:
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *currentDir;
    QFrame *storageFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *cbStorage;
    QSpacerItem *horizontalSpacer_2;
    QTreeWidget *list;
    QLineEdit *fileName;
    QToolButton *bRootDir;
    QToolButton *bUpDir;
    QLabel *dirInfo;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    CuteReport::ObjectPreview *preview;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNameFilter;
    QComboBox *cbFilter;
    QSpacerItem *horizontalSpacer;
    QPushButton *bCancel;
    QPushButton *bOk;

    void setupUi(QDialog *StdStorageDialog)
    {
        if (StdStorageDialog->objectName().isEmpty())
            StdStorageDialog->setObjectName(QString::fromUtf8("StdStorageDialog"));
        StdStorageDialog->resize(810, 529);
        gridLayout_2 = new QGridLayout(StdStorageDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter = new QSplitter(StdStorageDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        currentDir = new QLineEdit(layoutWidget);
        currentDir->setObjectName(QString::fromUtf8("currentDir"));

        gridLayout->addWidget(currentDir, 1, 0, 1, 1);

        storageFrame = new QFrame(layoutWidget);
        storageFrame->setObjectName(QString::fromUtf8("storageFrame"));
        storageFrame->setMinimumSize(QSize(0, 20));
        storageFrame->setFrameShape(QFrame::NoFrame);
        storageFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(storageFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(storageFrame);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        cbStorage = new QComboBox(storageFrame);
        cbStorage->setObjectName(QString::fromUtf8("cbStorage"));
        cbStorage->setMinimumSize(QSize(0, 0));
        cbStorage->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(cbStorage);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addWidget(storageFrame, 0, 0, 1, 3);

        list = new QTreeWidget(layoutWidget);
        list->setObjectName(QString::fromUtf8("list"));
        list->setRootIsDecorated(false);
        list->setUniformRowHeights(true);
        list->setSortingEnabled(false);
        list->header()->setDefaultSectionSize(30);
        list->header()->setMinimumSectionSize(10);

        gridLayout->addWidget(list, 2, 0, 1, 3);

        fileName = new QLineEdit(layoutWidget);
        fileName->setObjectName(QString::fromUtf8("fileName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fileName->sizePolicy().hasHeightForWidth());
        fileName->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(fileName, 3, 0, 1, 3);

        bRootDir = new QToolButton(layoutWidget);
        bRootDir->setObjectName(QString::fromUtf8("bRootDir"));
        bRootDir->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(bRootDir, 1, 1, 1, 1);

        bUpDir = new QToolButton(layoutWidget);
        bUpDir->setObjectName(QString::fromUtf8("bUpDir"));
        bUpDir->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(bUpDir, 1, 2, 1, 1);

        dirInfo = new QLabel(layoutWidget);
        dirInfo->setObjectName(QString::fromUtf8("dirInfo"));
        dirInfo->setFrameShape(QFrame::StyledPanel);
        dirInfo->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(dirInfo, 4, 0, 1, 3);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        preview = new CuteReport::ObjectPreview(layoutWidget1);
        preview->setObjectName(QString::fromUtf8("preview"));

        verticalLayout->addWidget(preview);

        splitter->addWidget(layoutWidget1);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);

        widget_2 = new QWidget(StdStorageDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(widget_2);
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(6);
#endif
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelNameFilter = new QLabel(widget_2);
        labelNameFilter->setObjectName(QString::fromUtf8("labelNameFilter"));
        sizePolicy.setHeightForWidth(labelNameFilter->sizePolicy().hasHeightForWidth());
        labelNameFilter->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(labelNameFilter);

        cbFilter = new QComboBox(widget_2);
        cbFilter->setObjectName(QString::fromUtf8("cbFilter"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cbFilter->sizePolicy().hasHeightForWidth());
        cbFilter->setSizePolicy(sizePolicy3);
        cbFilter->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(cbFilter);

        horizontalSpacer = new QSpacerItem(304, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bCancel = new QPushButton(widget_2);
        bCancel->setObjectName(QString::fromUtf8("bCancel"));
        sizePolicy3.setHeightForWidth(bCancel->sizePolicy().hasHeightForWidth());
        bCancel->setSizePolicy(sizePolicy3);
        bCancel->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(bCancel);

        bOk = new QPushButton(widget_2);
        bOk->setObjectName(QString::fromUtf8("bOk"));
        sizePolicy3.setHeightForWidth(bOk->sizePolicy().hasHeightForWidth());
        bOk->setSizePolicy(sizePolicy3);
        bOk->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(bOk);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);

        QWidget::setTabOrder(fileName, cbFilter);
        QWidget::setTabOrder(cbFilter, cbStorage);
        QWidget::setTabOrder(cbStorage, currentDir);
        QWidget::setTabOrder(currentDir, list);
        QWidget::setTabOrder(list, bOk);
        QWidget::setTabOrder(bOk, bCancel);

        retranslateUi(StdStorageDialog);
        QObject::connect(bOk, SIGNAL(clicked()), StdStorageDialog, SLOT(accept()));
        QObject::connect(bCancel, SIGNAL(clicked()), StdStorageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(StdStorageDialog);
    } // setupUi

    void retranslateUi(QDialog *StdStorageDialog)
    {
        StdStorageDialog->setWindowTitle(QApplication::translate("StdStorageDialog", "CuteReport Storage Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("StdStorageDialog", "Storage:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = list->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("StdStorageDialog", "Size", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("StdStorageDialog", "Ext", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("StdStorageDialog", "Name", 0, QApplication::UnicodeUTF8));
        bRootDir->setText(QApplication::translate("StdStorageDialog", "/", 0, QApplication::UnicodeUTF8));
        bUpDir->setText(QApplication::translate("StdStorageDialog", "..", 0, QApplication::UnicodeUTF8));
        dirInfo->setText(QApplication::translate("StdStorageDialog", "21 files / 16 dirs ", 0, QApplication::UnicodeUTF8));
        labelNameFilter->setText(QApplication::translate("StdStorageDialog", "Filter:", 0, QApplication::UnicodeUTF8));
        bCancel->setText(QApplication::translate("StdStorageDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        bOk->setText(QApplication::translate("StdStorageDialog", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StdStorageDialog: public Ui_StdStorageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STDSTORAGEDIALOG_H
