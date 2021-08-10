/********************************************************************************
** Form generated from reading UI file 'reportproperties.ui'
**
** Created: Wed Feb 8 11:32:35 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTPROPERTIES_H
#define UI_REPORTPROPERTIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "parameterswidget.h"

QT_BEGIN_NAMESPACE

class Ui_ReportProperties
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLineEdit *url;
    QLineEdit *reportName;
    QLabel *label_2;
    QLineEdit *author;
    QLabel *label_3;
    QTextEdit *description;
    QLabel *label;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_10;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    ParametersWidget *variables;
    QLabel *label_6;
    QTabWidget *tabWidget;
    QWidget *tabStorage;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widgetStorageFrame;
    QGridLayout *gridLayout_4;
    QLineEdit *leDefaultStorage;
    QLabel *label_4;
    QLabel *label_10;
    QTreeWidget *storageList;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *storageType;
    QHBoxLayout *horizontalLayout;
    QLabel *labelRendering_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QToolButton *bAddStorage;
    QToolButton *bDeleteStorage;
    QFrame *line_7;
    QToolButton *bDefaultStorage;
    QToolButton *bResetDefaultStorage;
    QFrame *line_4;
    QToolButton *bStorageRename;
    QFrame *line;
    QWidget *widgetStorageHelperFrame;
    QGridLayout *gridLayout_7;
    QVBoxLayout *storageHelperLayout;
    QWidget *tabRenderer;
    QGridLayout *gridLayout_2;
    QWidget *widgetRendererListFrame;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QLabel *label_11;
    QLineEdit *leDefaultRenderer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelRendering_3;
    QSpacerItem *horizontalSpacer_5;
    QTreeWidget *rendererList;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *rendererType;
    QHBoxLayout *horizontalLayout_9;
    QToolButton *bAddRenderer;
    QToolButton *bDeleteRenderer;
    QFrame *line_8;
    QToolButton *bDefaultRenderer;
    QToolButton *bResetDefaultRenderer;
    QFrame *line_3;
    QToolButton *bRendererRename;
    QWidget *widget_3;
    QGridLayout *gridLayout_8;
    QVBoxLayout *rendererHelperLayout;
    QFrame *line_5;
    QWidget *tabPrinter;
    QGridLayout *gridLayout_3;
    QWidget *widgetListFrame;
    QGridLayout *gridLayout_6;
    QLabel *label_9;
    QLabel *label_12;
    QLineEdit *leDefaultPrinter;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelRendering_4;
    QSpacerItem *horizontalSpacer_7;
    QTreeWidget *printerList;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *printerType;
    QHBoxLayout *horizontalLayout_10;
    QToolButton *bAddPrinter;
    QToolButton *bDeletePrinter;
    QFrame *line_2;
    QToolButton *bDefaultPrinter;
    QToolButton *bResetDefaultPrinter;
    QFrame *line_9;
    QToolButton *bPrinterRename;
    QWidget *widget_5;
    QGridLayout *gridLayout_9;
    QVBoxLayout *printerHelperLayout;
    QFrame *line_6;
    QWidget *tab;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelInheritanceStatus;
    QStackedWidget *baseReportInfo;
    QWidget *pageWithBaseReport;
    QFormLayout *formLayout;
    QLabel *label_14;
    QLineEdit *baseReportFileName;
    QLabel *label_13;
    QPlainTextEdit *baseReportPath;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *bDetachBaseReport;
    QSpacerItem *horizontalSpacer;
    QWidget *pageWithoutBaseReport;
    QGridLayout *gridLayout_13;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *bInheritBaseReport;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *ReportProperties)
    {
        if (ReportProperties->objectName().isEmpty())
            ReportProperties->setObjectName(QString::fromUtf8("ReportProperties"));
        ReportProperties->resize(1024, 627);
        verticalLayout = new QVBoxLayout(ReportProperties);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(ReportProperties);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        url = new QLineEdit(layoutWidget);
        url->setObjectName(QString::fromUtf8("url"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(url->sizePolicy().hasHeightForWidth());
        url->setSizePolicy(sizePolicy);
        url->setReadOnly(true);

        gridLayout->addWidget(url, 0, 1, 1, 1);

        reportName = new QLineEdit(layoutWidget);
        reportName->setObjectName(QString::fromUtf8("reportName"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(reportName->sizePolicy().hasHeightForWidth());
        reportName->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(reportName, 1, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        author = new QLineEdit(layoutWidget);
        author->setObjectName(QString::fromUtf8("author"));
        sizePolicy1.setHeightForWidth(author->sizePolicy().hasHeightForWidth());
        author->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(author, 2, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        description = new QTextEdit(layoutWidget);
        description->setObjectName(QString::fromUtf8("description"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(description, 3, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        gridLayout_10 = new QGridLayout(layoutWidget1);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);

        gridLayout_10->addWidget(label_5, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_10->addItem(verticalSpacer, 1, 0, 1, 1);

        variables = new ParametersWidget(layoutWidget1);
        variables->setObjectName(QString::fromUtf8("variables"));

        gridLayout_10->addWidget(variables, 0, 1, 2, 1);

        splitter->addWidget(layoutWidget1);

        verticalLayout->addWidget(splitter);

        label_6 = new QLabel(ReportProperties);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(label_6);

        tabWidget = new QTabWidget(ReportProperties);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy4);
        tabStorage = new QWidget();
        tabStorage->setObjectName(QString::fromUtf8("tabStorage"));
        horizontalLayout_2 = new QHBoxLayout(tabStorage);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widgetStorageFrame = new QWidget(tabStorage);
        widgetStorageFrame->setObjectName(QString::fromUtf8("widgetStorageFrame"));
        sizePolicy3.setHeightForWidth(widgetStorageFrame->sizePolicy().hasHeightForWidth());
        widgetStorageFrame->setSizePolicy(sizePolicy3);
        gridLayout_4 = new QGridLayout(widgetStorageFrame);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        leDefaultStorage = new QLineEdit(widgetStorageFrame);
        leDefaultStorage->setObjectName(QString::fromUtf8("leDefaultStorage"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(leDefaultStorage->sizePolicy().hasHeightForWidth());
        leDefaultStorage->setSizePolicy(sizePolicy5);
        leDefaultStorage->setReadOnly(true);

        gridLayout_4->addWidget(leDefaultStorage, 6, 0, 1, 8);

        label_4 = new QLabel(widgetStorageFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy6);

        gridLayout_4->addWidget(label_4, 5, 0, 1, 8);

        label_10 = new QLabel(widgetStorageFrame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy6.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy6);

        gridLayout_4->addWidget(label_10, 3, 0, 1, 8);

        storageList = new QTreeWidget(widgetStorageFrame);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        storageList->setHeaderItem(__qtreewidgetitem);
        storageList->setObjectName(QString::fromUtf8("storageList"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(storageList->sizePolicy().hasHeightForWidth());
        storageList->setSizePolicy(sizePolicy7);
        storageList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        storageList->setRootIsDecorated(false);
        storageList->setItemsExpandable(false);
        storageList->setHeaderHidden(true);

        gridLayout_4->addWidget(storageList, 2, 0, 1, 8);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 7, 1, 1);

        storageType = new QLineEdit(widgetStorageFrame);
        storageType->setObjectName(QString::fromUtf8("storageType"));
        storageType->setReadOnly(true);

        gridLayout_4->addWidget(storageType, 4, 0, 1, 8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelRendering_2 = new QLabel(widgetStorageFrame);
        labelRendering_2->setObjectName(QString::fromUtf8("labelRendering_2"));
        sizePolicy6.setHeightForWidth(labelRendering_2->sizePolicy().hasHeightForWidth());
        labelRendering_2->setSizePolicy(sizePolicy6);
        labelRendering_2->setMinimumSize(QSize(130, 0));

        horizontalLayout->addWidget(labelRendering_2);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_4->addLayout(horizontalLayout, 1, 0, 1, 8);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(4, 4, 4, 4);
        bAddStorage = new QToolButton(widgetStorageFrame);
        bAddStorage->setObjectName(QString::fromUtf8("bAddStorage"));
        bAddStorage->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        bAddStorage->setIcon(icon);
        bAddStorage->setIconSize(QSize(24, 24));
        bAddStorage->setPopupMode(QToolButton::InstantPopup);
        bAddStorage->setAutoRaise(true);

        horizontalLayout_8->addWidget(bAddStorage);

        bDeleteStorage = new QToolButton(widgetStorageFrame);
        bDeleteStorage->setObjectName(QString::fromUtf8("bDeleteStorage"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/trash-empty.png"), QSize(), QIcon::Normal, QIcon::Off);
        bDeleteStorage->setIcon(icon1);
        bDeleteStorage->setIconSize(QSize(24, 24));
        bDeleteStorage->setAutoRaise(true);

        horizontalLayout_8->addWidget(bDeleteStorage);

        line_7 = new QFrame(widgetStorageFrame);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(line_7);

        bDefaultStorage = new QToolButton(widgetStorageFrame);
        bDefaultStorage->setObjectName(QString::fromUtf8("bDefaultStorage"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/validate.png"), QSize(), QIcon::Normal, QIcon::Off);
        bDefaultStorage->setIcon(icon2);
        bDefaultStorage->setIconSize(QSize(24, 24));
        bDefaultStorage->setAutoRaise(true);

        horizontalLayout_8->addWidget(bDefaultStorage);

        bResetDefaultStorage = new QToolButton(widgetStorageFrame);
        bResetDefaultStorage->setObjectName(QString::fromUtf8("bResetDefaultStorage"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/editdelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        bResetDefaultStorage->setIcon(icon3);
        bResetDefaultStorage->setIconSize(QSize(24, 24));
        bResetDefaultStorage->setAutoRaise(true);

        horizontalLayout_8->addWidget(bResetDefaultStorage);

        line_4 = new QFrame(widgetStorageFrame);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(line_4);

        bStorageRename = new QToolButton(widgetStorageFrame);
        bStorageRename->setObjectName(QString::fromUtf8("bStorageRename"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/rename.png"), QSize(), QIcon::Normal, QIcon::Off);
        bStorageRename->setIcon(icon4);
        bStorageRename->setIconSize(QSize(24, 24));
        bStorageRename->setAutoRaise(true);

        horizontalLayout_8->addWidget(bStorageRename);


        gridLayout_4->addLayout(horizontalLayout_8, 0, 6, 1, 1);


        horizontalLayout_2->addWidget(widgetStorageFrame);

        line = new QFrame(tabStorage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        widgetStorageHelperFrame = new QWidget(tabStorage);
        widgetStorageHelperFrame->setObjectName(QString::fromUtf8("widgetStorageHelperFrame"));
        sizePolicy7.setHeightForWidth(widgetStorageHelperFrame->sizePolicy().hasHeightForWidth());
        widgetStorageHelperFrame->setSizePolicy(sizePolicy7);
        gridLayout_7 = new QGridLayout(widgetStorageHelperFrame);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        storageHelperLayout = new QVBoxLayout();
        storageHelperLayout->setObjectName(QString::fromUtf8("storageHelperLayout"));
        storageHelperLayout->setSizeConstraint(QLayout::SetMaximumSize);

        gridLayout_7->addLayout(storageHelperLayout, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(widgetStorageHelperFrame);

        tabWidget->addTab(tabStorage, QString());
        tabRenderer = new QWidget();
        tabRenderer->setObjectName(QString::fromUtf8("tabRenderer"));
        gridLayout_2 = new QGridLayout(tabRenderer);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widgetRendererListFrame = new QWidget(tabRenderer);
        widgetRendererListFrame->setObjectName(QString::fromUtf8("widgetRendererListFrame"));
        sizePolicy3.setHeightForWidth(widgetRendererListFrame->sizePolicy().hasHeightForWidth());
        widgetRendererListFrame->setSizePolicy(sizePolicy3);
        gridLayout_5 = new QGridLayout(widgetRendererListFrame);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widgetRendererListFrame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy6.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy6);

        gridLayout_5->addWidget(label_8, 5, 0, 1, 8);

        label_11 = new QLabel(widgetRendererListFrame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy6.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy6);

        gridLayout_5->addWidget(label_11, 3, 0, 1, 8);

        leDefaultRenderer = new QLineEdit(widgetRendererListFrame);
        leDefaultRenderer->setObjectName(QString::fromUtf8("leDefaultRenderer"));
        sizePolicy5.setHeightForWidth(leDefaultRenderer->sizePolicy().hasHeightForWidth());
        leDefaultRenderer->setSizePolicy(sizePolicy5);
        leDefaultRenderer->setReadOnly(true);

        gridLayout_5->addWidget(leDefaultRenderer, 6, 0, 1, 8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelRendering_3 = new QLabel(widgetRendererListFrame);
        labelRendering_3->setObjectName(QString::fromUtf8("labelRendering_3"));
        sizePolicy6.setHeightForWidth(labelRendering_3->sizePolicy().hasHeightForWidth());
        labelRendering_3->setSizePolicy(sizePolicy6);
        labelRendering_3->setMinimumSize(QSize(130, 0));

        horizontalLayout_3->addWidget(labelRendering_3);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        gridLayout_5->addLayout(horizontalLayout_3, 1, 0, 1, 8);

        rendererList = new QTreeWidget(widgetRendererListFrame);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        rendererList->setHeaderItem(__qtreewidgetitem1);
        rendererList->setObjectName(QString::fromUtf8("rendererList"));
        sizePolicy7.setHeightForWidth(rendererList->sizePolicy().hasHeightForWidth());
        rendererList->setSizePolicy(sizePolicy7);
        rendererList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        rendererList->setRootIsDecorated(false);
        rendererList->setItemsExpandable(false);
        rendererList->setHeaderHidden(true);

        gridLayout_5->addWidget(rendererList, 2, 0, 1, 8);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 0, 7, 1, 1);

        rendererType = new QLineEdit(widgetRendererListFrame);
        rendererType->setObjectName(QString::fromUtf8("rendererType"));
        rendererType->setReadOnly(true);

        gridLayout_5->addWidget(rendererType, 4, 0, 1, 8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(4, 4, 4, 4);
        bAddRenderer = new QToolButton(widgetRendererListFrame);
        bAddRenderer->setObjectName(QString::fromUtf8("bAddRenderer"));
        bAddRenderer->setAutoFillBackground(false);
        bAddRenderer->setIcon(icon);
        bAddRenderer->setIconSize(QSize(24, 24));
        bAddRenderer->setPopupMode(QToolButton::InstantPopup);
        bAddRenderer->setAutoRaise(true);

        horizontalLayout_9->addWidget(bAddRenderer);

        bDeleteRenderer = new QToolButton(widgetRendererListFrame);
        bDeleteRenderer->setObjectName(QString::fromUtf8("bDeleteRenderer"));
        bDeleteRenderer->setIcon(icon1);
        bDeleteRenderer->setIconSize(QSize(24, 24));
        bDeleteRenderer->setAutoRaise(true);

        horizontalLayout_9->addWidget(bDeleteRenderer);

        line_8 = new QFrame(widgetRendererListFrame);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(line_8);

        bDefaultRenderer = new QToolButton(widgetRendererListFrame);
        bDefaultRenderer->setObjectName(QString::fromUtf8("bDefaultRenderer"));
        bDefaultRenderer->setIcon(icon2);
        bDefaultRenderer->setIconSize(QSize(24, 24));
        bDefaultRenderer->setAutoRaise(true);

        horizontalLayout_9->addWidget(bDefaultRenderer);

        bResetDefaultRenderer = new QToolButton(widgetRendererListFrame);
        bResetDefaultRenderer->setObjectName(QString::fromUtf8("bResetDefaultRenderer"));
        bResetDefaultRenderer->setIcon(icon3);
        bResetDefaultRenderer->setIconSize(QSize(24, 24));
        bResetDefaultRenderer->setAutoRaise(true);

        horizontalLayout_9->addWidget(bResetDefaultRenderer);

        line_3 = new QFrame(widgetRendererListFrame);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(line_3);

        bRendererRename = new QToolButton(widgetRendererListFrame);
        bRendererRename->setObjectName(QString::fromUtf8("bRendererRename"));
        bRendererRename->setIcon(icon4);
        bRendererRename->setIconSize(QSize(24, 24));
        bRendererRename->setAutoRaise(true);

        horizontalLayout_9->addWidget(bRendererRename);


        gridLayout_5->addLayout(horizontalLayout_9, 0, 6, 1, 1);


        gridLayout_2->addWidget(widgetRendererListFrame, 0, 0, 1, 1);

        widget_3 = new QWidget(tabRenderer);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy7.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy7);
        gridLayout_8 = new QGridLayout(widget_3);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        rendererHelperLayout = new QVBoxLayout();
        rendererHelperLayout->setObjectName(QString::fromUtf8("rendererHelperLayout"));
        rendererHelperLayout->setSizeConstraint(QLayout::SetMaximumSize);

        gridLayout_8->addLayout(rendererHelperLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_3, 0, 2, 1, 1);

        line_5 = new QFrame(tabRenderer);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_5, 0, 1, 1, 1);

        tabWidget->addTab(tabRenderer, QString());
        tabPrinter = new QWidget();
        tabPrinter->setObjectName(QString::fromUtf8("tabPrinter"));
        gridLayout_3 = new QGridLayout(tabPrinter);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widgetListFrame = new QWidget(tabPrinter);
        widgetListFrame->setObjectName(QString::fromUtf8("widgetListFrame"));
        sizePolicy3.setHeightForWidth(widgetListFrame->sizePolicy().hasHeightForWidth());
        widgetListFrame->setSizePolicy(sizePolicy3);
        gridLayout_6 = new QGridLayout(widgetListFrame);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widgetListFrame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy6.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy6);

        gridLayout_6->addWidget(label_9, 5, 0, 1, 8);

        label_12 = new QLabel(widgetListFrame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy6.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy6);

        gridLayout_6->addWidget(label_12, 3, 0, 1, 8);

        leDefaultPrinter = new QLineEdit(widgetListFrame);
        leDefaultPrinter->setObjectName(QString::fromUtf8("leDefaultPrinter"));
        sizePolicy5.setHeightForWidth(leDefaultPrinter->sizePolicy().hasHeightForWidth());
        leDefaultPrinter->setSizePolicy(sizePolicy5);
        leDefaultPrinter->setReadOnly(true);

        gridLayout_6->addWidget(leDefaultPrinter, 6, 0, 1, 8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelRendering_4 = new QLabel(widgetListFrame);
        labelRendering_4->setObjectName(QString::fromUtf8("labelRendering_4"));
        sizePolicy6.setHeightForWidth(labelRendering_4->sizePolicy().hasHeightForWidth());
        labelRendering_4->setSizePolicy(sizePolicy6);
        labelRendering_4->setMinimumSize(QSize(130, 0));

        horizontalLayout_4->addWidget(labelRendering_4);

        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        gridLayout_6->addLayout(horizontalLayout_4, 1, 0, 1, 8);

        printerList = new QTreeWidget(widgetListFrame);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem();
        __qtreewidgetitem2->setText(0, QString::fromUtf8("1"));
        printerList->setHeaderItem(__qtreewidgetitem2);
        printerList->setObjectName(QString::fromUtf8("printerList"));
        sizePolicy7.setHeightForWidth(printerList->sizePolicy().hasHeightForWidth());
        printerList->setSizePolicy(sizePolicy7);
        printerList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        printerList->setRootIsDecorated(false);
        printerList->setItemsExpandable(false);
        printerList->setHeaderHidden(true);

        gridLayout_6->addWidget(printerList, 2, 0, 1, 8);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_8, 0, 7, 1, 1);

        printerType = new QLineEdit(widgetListFrame);
        printerType->setObjectName(QString::fromUtf8("printerType"));
        printerType->setReadOnly(true);

        gridLayout_6->addWidget(printerType, 4, 0, 1, 8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(2);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(4, 4, 4, 4);
        bAddPrinter = new QToolButton(widgetListFrame);
        bAddPrinter->setObjectName(QString::fromUtf8("bAddPrinter"));
        bAddPrinter->setAutoFillBackground(false);
        bAddPrinter->setIcon(icon);
        bAddPrinter->setIconSize(QSize(24, 24));
        bAddPrinter->setPopupMode(QToolButton::InstantPopup);
        bAddPrinter->setAutoRaise(true);

        horizontalLayout_10->addWidget(bAddPrinter);

        bDeletePrinter = new QToolButton(widgetListFrame);
        bDeletePrinter->setObjectName(QString::fromUtf8("bDeletePrinter"));
        bDeletePrinter->setIcon(icon1);
        bDeletePrinter->setIconSize(QSize(24, 24));
        bDeletePrinter->setAutoRaise(true);

        horizontalLayout_10->addWidget(bDeletePrinter);

        line_2 = new QFrame(widgetListFrame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_10->addWidget(line_2);

        bDefaultPrinter = new QToolButton(widgetListFrame);
        bDefaultPrinter->setObjectName(QString::fromUtf8("bDefaultPrinter"));
        bDefaultPrinter->setIcon(icon2);
        bDefaultPrinter->setIconSize(QSize(24, 24));
        bDefaultPrinter->setAutoRaise(true);

        horizontalLayout_10->addWidget(bDefaultPrinter);

        bResetDefaultPrinter = new QToolButton(widgetListFrame);
        bResetDefaultPrinter->setObjectName(QString::fromUtf8("bResetDefaultPrinter"));
        bResetDefaultPrinter->setIcon(icon3);
        bResetDefaultPrinter->setIconSize(QSize(24, 24));
        bResetDefaultPrinter->setAutoRaise(true);

        horizontalLayout_10->addWidget(bResetDefaultPrinter);

        line_9 = new QFrame(widgetListFrame);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        horizontalLayout_10->addWidget(line_9);

        bPrinterRename = new QToolButton(widgetListFrame);
        bPrinterRename->setObjectName(QString::fromUtf8("bPrinterRename"));
        bPrinterRename->setIcon(icon4);
        bPrinterRename->setIconSize(QSize(24, 24));
        bPrinterRename->setAutoRaise(true);

        horizontalLayout_10->addWidget(bPrinterRename);


        gridLayout_6->addLayout(horizontalLayout_10, 0, 6, 1, 1);


        gridLayout_3->addWidget(widgetListFrame, 0, 0, 1, 1);

        widget_5 = new QWidget(tabPrinter);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        sizePolicy7.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy7);
        gridLayout_9 = new QGridLayout(widget_5);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        printerHelperLayout = new QVBoxLayout();
        printerHelperLayout->setObjectName(QString::fromUtf8("printerHelperLayout"));
        printerHelperLayout->setSizeConstraint(QLayout::SetMaximumSize);

        gridLayout_9->addLayout(printerHelperLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_5, 0, 2, 1, 1);

        line_6 = new QFrame(tabPrinter);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_6, 0, 1, 1, 1);

        tabWidget->addTab(tabPrinter, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_11 = new QGridLayout(tab);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));

        gridLayout_11->addLayout(horizontalLayout_5, 0, 0, 1, 2);

        labelInheritanceStatus = new QLabel(tab);
        labelInheritanceStatus->setObjectName(QString::fromUtf8("labelInheritanceStatus"));

        gridLayout_11->addWidget(labelInheritanceStatus, 1, 0, 1, 2);

        baseReportInfo = new QStackedWidget(tab);
        baseReportInfo->setObjectName(QString::fromUtf8("baseReportInfo"));
        pageWithBaseReport = new QWidget();
        pageWithBaseReport->setObjectName(QString::fromUtf8("pageWithBaseReport"));
        formLayout = new QFormLayout(pageWithBaseReport);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_14 = new QLabel(pageWithBaseReport);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_14);

        baseReportFileName = new QLineEdit(pageWithBaseReport);
        baseReportFileName->setObjectName(QString::fromUtf8("baseReportFileName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, baseReportFileName);

        label_13 = new QLabel(pageWithBaseReport);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_13);

        baseReportPath = new QPlainTextEdit(pageWithBaseReport);
        baseReportPath->setObjectName(QString::fromUtf8("baseReportPath"));

        formLayout->setWidget(2, QFormLayout::FieldRole, baseReportPath);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::LabelRole, verticalSpacer_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        bDetachBaseReport = new QPushButton(pageWithBaseReport);
        bDetachBaseReport->setObjectName(QString::fromUtf8("bDetachBaseReport"));

        horizontalLayout_6->addWidget(bDetachBaseReport);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_6);

        baseReportInfo->addWidget(pageWithBaseReport);
        pageWithoutBaseReport = new QWidget();
        pageWithoutBaseReport->setObjectName(QString::fromUtf8("pageWithoutBaseReport"));
        gridLayout_13 = new QGridLayout(pageWithoutBaseReport);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        bInheritBaseReport = new QPushButton(pageWithoutBaseReport);
        bInheritBaseReport->setObjectName(QString::fromUtf8("bInheritBaseReport"));

        horizontalLayout_7->addWidget(bInheritBaseReport);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        gridLayout_13->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 146, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_3, 1, 0, 1, 1);

        baseReportInfo->addWidget(pageWithoutBaseReport);

        gridLayout_11->addWidget(baseReportInfo, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        splitter->raise();
        tabWidget->raise();
        label_6->raise();

        retranslateUi(ReportProperties);

        tabWidget->setCurrentIndex(2);
        baseReportInfo->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ReportProperties);
    } // setupUi

    void retranslateUi(QWidget *ReportProperties)
    {
        ReportProperties->setWindowTitle(QApplication::translate("ReportProperties", "Form", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ReportProperties", "URL:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ReportProperties", "Author:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ReportProperties", "Description:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ReportProperties", "Name:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ReportProperties", "Variables:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ReportProperties", "Options:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ReportProperties", "Default storage name:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ReportProperties", "Selected storage Type:", 0, QApplication::UnicodeUTF8));
        labelRendering_2->setText(QApplication::translate("ReportProperties", "Assigned storages:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bAddStorage->setToolTip(QApplication::translate("ReportProperties", "Add new storage", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bAddStorage->setText(QApplication::translate("ReportProperties", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bDeleteStorage->setToolTip(QApplication::translate("ReportProperties", "Remove selected storage", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bDeleteStorage->setText(QApplication::translate("ReportProperties", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bDefaultStorage->setToolTip(QApplication::translate("ReportProperties", "Set selected storage as Default", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bDefaultStorage->setText(QApplication::translate("ReportProperties", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bResetDefaultStorage->setToolTip(QApplication::translate("ReportProperties", "Unset default storage", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bResetDefaultStorage->setText(QString());
#ifndef QT_NO_TOOLTIP
        bStorageRename->setToolTip(QApplication::translate("ReportProperties", "Rename selected storage", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bStorageRename->setText(QApplication::translate("ReportProperties", "...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabStorage), QApplication::translate("ReportProperties", "Storage", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ReportProperties", "Default renderer name:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ReportProperties", "Selected renderer Type:", 0, QApplication::UnicodeUTF8));
        labelRendering_3->setText(QApplication::translate("ReportProperties", "Assigned renderers:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bAddRenderer->setToolTip(QApplication::translate("ReportProperties", "Add new renderer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bAddRenderer->setText(QApplication::translate("ReportProperties", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bDeleteRenderer->setToolTip(QApplication::translate("ReportProperties", "Remove selected renderer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bDeleteRenderer->setText(QApplication::translate("ReportProperties", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bDefaultRenderer->setToolTip(QApplication::translate("ReportProperties", "Set selected renderer as defaul", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bDefaultRenderer->setText(QApplication::translate("ReportProperties", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bResetDefaultRenderer->setToolTip(QApplication::translate("ReportProperties", "Unset default renderer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bResetDefaultRenderer->setText(QString());
#ifndef QT_NO_TOOLTIP
        bRendererRename->setToolTip(QApplication::translate("ReportProperties", "Rename selected renderer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bRendererRename->setText(QApplication::translate("ReportProperties", "...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabRenderer), QApplication::translate("ReportProperties", "Renderer", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ReportProperties", "Default printer name:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ReportProperties", "Selected printer Type:", 0, QApplication::UnicodeUTF8));
        labelRendering_4->setText(QApplication::translate("ReportProperties", "Assigned printers:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bAddPrinter->setToolTip(QApplication::translate("ReportProperties", "Add new printer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bAddPrinter->setText(QApplication::translate("ReportProperties", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bDeletePrinter->setToolTip(QApplication::translate("ReportProperties", "Remove selected printer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bDeletePrinter->setText(QApplication::translate("ReportProperties", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bDefaultPrinter->setToolTip(QApplication::translate("ReportProperties", "Set selected printer as default", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bDefaultPrinter->setText(QApplication::translate("ReportProperties", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bResetDefaultPrinter->setToolTip(QApplication::translate("ReportProperties", "Unset default printer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bResetDefaultPrinter->setText(QString());
#ifndef QT_NO_TOOLTIP
        bPrinterRename->setToolTip(QApplication::translate("ReportProperties", "Rename selected printer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bPrinterRename->setText(QApplication::translate("ReportProperties", "...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabPrinter), QApplication::translate("ReportProperties", "Printer", 0, QApplication::UnicodeUTF8));
        labelInheritanceStatus->setText(QApplication::translate("ReportProperties", "Inheritance status label", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ReportProperties", "Base report file name:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ReportProperties", "Base report path:", 0, QApplication::UnicodeUTF8));
        bDetachBaseReport->setText(QApplication::translate("ReportProperties", "Detach", 0, QApplication::UnicodeUTF8));
        bInheritBaseReport->setText(QApplication::translate("ReportProperties", "Inherit", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ReportProperties", "Inheritance", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ReportProperties: public Ui_ReportProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTPROPERTIES_H
