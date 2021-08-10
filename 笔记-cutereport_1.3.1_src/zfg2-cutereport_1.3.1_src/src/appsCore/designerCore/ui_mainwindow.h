/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Feb 8 11:24:41 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <fancytabs.h>
#include "messagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionNew_Page;
    QAction *actionMagnets;
    QAction *actionRender;
    QAction *actionRenderStop;
    QAction *actionAbout;
    QAction *actionOptions;
    QAction *actionExport;
    QAction *actionTest;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *contextLayout;
    FancyTabWidget *tabs;
    QWidget *statusBar;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    MessageWidget *message;
    QSpacerItem *horizontalSpacer;
    QLabel *geometryLabel;
    QLabel *coordinateLabel;
    QMenuBar *menuBar;
    QMenu *menuReport;
    QMenu *menuEdit;
    QMenu *menuPage;
    QMenu *menuService;
    QMenu *menuTools;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(925, 518);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionQuit->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/application_exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionUndo->setEnabled(true);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionRedo->setEnabled(true);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionCopy->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon2);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon3);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon4);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionNew_Page = new QAction(MainWindow);
        actionNew_Page->setObjectName(QString::fromUtf8("actionNew_Page"));
        actionMagnets = new QAction(MainWindow);
        actionMagnets->setObjectName(QString::fromUtf8("actionMagnets"));
        actionRender = new QAction(MainWindow);
        actionRender->setObjectName(QString::fromUtf8("actionRender"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/media-playback-start.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRender->setIcon(icon5);
        actionRender->setShortcutContext(Qt::ApplicationShortcut);
        actionRenderStop = new QAction(MainWindow);
        actionRenderStop->setObjectName(QString::fromUtf8("actionRenderStop"));
        actionRenderStop->setIcon(icon1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/dialog-information.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon6);
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/run-build.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOptions->setIcon(icon7);
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionTest = new QAction(MainWindow);
        actionTest->setObjectName(QString::fromUtf8("actionTest"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        contextLayout = new QVBoxLayout();
        contextLayout->setSpacing(6);
        contextLayout->setObjectName(QString::fromUtf8("contextLayout"));
        tabs = new FancyTabWidget(centralWidget);
        tabs->setObjectName(QString::fromUtf8("tabs"));

        contextLayout->addWidget(tabs);


        verticalLayout->addLayout(contextLayout);

        statusBar = new QWidget(centralWidget);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(statusBar->sizePolicy().hasHeightForWidth());
        statusBar->setSizePolicy(sizePolicy);
        statusBar->setMinimumSize(QSize(0, 20));
        statusBar->setMaximumSize(QSize(16777215, 20));
        horizontalLayout = new QHBoxLayout(statusBar);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(statusBar);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        message = new MessageWidget(widget);
        message->setObjectName(QString::fromUtf8("message"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(message->sizePolicy().hasHeightForWidth());
        message->setSizePolicy(sizePolicy1);
        message->setAutoFillBackground(false);
        message->setFrameShape(QFrame::Panel);
        message->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(message);

        horizontalSpacer = new QSpacerItem(592, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);


        horizontalLayout->addWidget(widget);

        geometryLabel = new QLabel(statusBar);
        geometryLabel->setObjectName(QString::fromUtf8("geometryLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(geometryLabel->sizePolicy().hasHeightForWidth());
        geometryLabel->setSizePolicy(sizePolicy2);
        geometryLabel->setMinimumSize(QSize(200, 0));
        geometryLabel->setFrameShape(QFrame::Panel);
        geometryLabel->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(geometryLabel);

        coordinateLabel = new QLabel(statusBar);
        coordinateLabel->setObjectName(QString::fromUtf8("coordinateLabel"));
        coordinateLabel->setEnabled(true);
        coordinateLabel->setMinimumSize(QSize(130, 0));
        coordinateLabel->setFrameShape(QFrame::Panel);
        coordinateLabel->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(coordinateLabel);


        verticalLayout->addWidget(statusBar);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 925, 25));
        menuReport = new QMenu(menuBar);
        menuReport->setObjectName(QString::fromUtf8("menuReport"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuEdit->setEnabled(true);
        menuPage = new QMenu(menuBar);
        menuPage->setObjectName(QString::fromUtf8("menuPage"));
        menuService = new QMenu(menuBar);
        menuService->setObjectName(QString::fromUtf8("menuService"));
        menuService->setEnabled(true);
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuTools->setEnabled(true);
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuReport->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuPage->menuAction());
        menuBar->addAction(menuService->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuReport->addSeparator();
        menuReport->addSeparator();
        menuReport->addSeparator();
        menuReport->addAction(actionQuit);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuPage->addSeparator();
        menuService->addAction(actionRender);
        menuService->addAction(actionRenderStop);
        menuTools->addSeparator();
        menuTools->addAction(actionOptions);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "C&opy", 0, QApplication::UnicodeUTF8));
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("MainWindow", "&Cut", 0, QApplication::UnicodeUTF8));
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("MainWindow", "&Paste", 0, QApplication::UnicodeUTF8));
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("MainWindow", "&Delete", 0, QApplication::UnicodeUTF8));
        actionNew_Page->setText(QApplication::translate("MainWindow", "New Page", 0, QApplication::UnicodeUTF8));
        actionMagnets->setText(QApplication::translate("MainWindow", "Magnets", 0, QApplication::UnicodeUTF8));
        actionRender->setText(QApplication::translate("MainWindow", "&Render", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRender->setToolTip(QApplication::translate("MainWindow", "Run Renderer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRender->setShortcut(QApplication::translate("MainWindow", "F5", 0, QApplication::UnicodeUTF8));
        actionRenderStop->setText(QApplication::translate("MainWindow", "r&enderStop", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", 0, QApplication::UnicodeUTF8));
        actionOptions->setText(QApplication::translate("MainWindow", "&Options...", 0, QApplication::UnicodeUTF8));
        actionExport->setText(QApplication::translate("MainWindow", "Export...", 0, QApplication::UnicodeUTF8));
        actionTest->setText(QApplication::translate("MainWindow", "test", 0, QApplication::UnicodeUTF8));
        geometryLabel->setText(QApplication::translate("MainWindow", "geometry(0,0,100,100)", 0, QApplication::UnicodeUTF8));
        coordinateLabel->setText(QApplication::translate("MainWindow", "pos (10,50)", 0, QApplication::UnicodeUTF8));
        menuReport->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuPage->setTitle(QApplication::translate("MainWindow", "Page", 0, QApplication::UnicodeUTF8));
        menuService->setTitle(QApplication::translate("MainWindow", "Ser&vice", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "He&lp", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
