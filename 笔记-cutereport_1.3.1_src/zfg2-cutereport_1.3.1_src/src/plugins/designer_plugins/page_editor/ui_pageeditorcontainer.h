/********************************************************************************
** Form generated from reading UI file 'pageeditorcontainer.ui'
**
** Created: Wed Feb 8 11:33:03 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEEDITORCONTAINER_H
#define UI_PAGEEDITORCONTAINER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <fancytabs.h>
#include "alignmenteditor.h"
#include "fonteditor.h"
#include "frameeditor.h"
#include "itemstoolwidget.h"

QT_BEGIN_NAMESPACE

class Ui_PageEditorContainer
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *addPageButton;
    QToolButton *deletePageButton;
    QToolButton *clonePageButton;
    QFrame *line;
    QToolButton *pageMoveFront;
    QToolButton *pageMoveBack;
    QFrame *line_3;
    ItemsToolWidget *tools;
    QFrame *line_2;
    QToolBar *actions;
    QSpacerItem *horizontalSpacer;
    QWidget *ItemTools;
    QHBoxLayout *horizontalLayout_2;
    FontEditor *fontEditor;
    QFrame *line_4;
    AlignmentEditor *alignmentEditor;
    QFrame *line_5;
    FrameEditor *frameEditor;
    QSpacerItem *horizontalSpacer_2;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *pageLayout;
    FancyTabWidget *pageTabs;
    QWidget *widget;
    QSplitter *splitter2;
    QWidget *layoutWidget;
    QVBoxLayout *ObjectInspectorLayout;
    QWidget *layoutWidget1;
    QVBoxLayout *PropertyEditorLayout;

    void setupUi(QWidget *PageEditorContainer)
    {
        if (PageEditorContainer->objectName().isEmpty())
            PageEditorContainer->setObjectName(QString::fromUtf8("PageEditorContainer"));
        PageEditorContainer->resize(585, 341);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PageEditorContainer->sizePolicy().hasHeightForWidth());
        PageEditorContainer->setSizePolicy(sizePolicy);
        PageEditorContainer->setMinimumSize(QSize(50, 50));
        gridLayout = new QGridLayout(PageEditorContainer);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(4, 0, 4, 2);
        addPageButton = new QToolButton(PageEditorContainer);
        addPageButton->setObjectName(QString::fromUtf8("addPageButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        addPageButton->setIcon(icon);
        addPageButton->setIconSize(QSize(24, 24));
        addPageButton->setToolButtonStyle(Qt::ToolButtonIconOnly);
        addPageButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(addPageButton);

        deletePageButton = new QToolButton(PageEditorContainer);
        deletePageButton->setObjectName(QString::fromUtf8("deletePageButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/document-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        deletePageButton->setIcon(icon1);
        deletePageButton->setIconSize(QSize(24, 24));
        deletePageButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(deletePageButton);

        clonePageButton = new QToolButton(PageEditorContainer);
        clonePageButton->setObjectName(QString::fromUtf8("clonePageButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/document-multiple.png"), QSize(), QIcon::Normal, QIcon::Off);
        clonePageButton->setIcon(icon2);
        clonePageButton->setIconSize(QSize(24, 24));
        clonePageButton->setAutoRaise(true);

        horizontalLayout_3->addWidget(clonePageButton);

        line = new QFrame(PageEditorContainer);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line);

        pageMoveFront = new QToolButton(PageEditorContainer);
        pageMoveFront->setObjectName(QString::fromUtf8("pageMoveFront"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/move_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        pageMoveFront->setIcon(icon3);
        pageMoveFront->setIconSize(QSize(24, 24));
        pageMoveFront->setAutoRaise(true);

        horizontalLayout_3->addWidget(pageMoveFront);

        pageMoveBack = new QToolButton(PageEditorContainer);
        pageMoveBack->setObjectName(QString::fromUtf8("pageMoveBack"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/move_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        pageMoveBack->setIcon(icon4);
        pageMoveBack->setIconSize(QSize(24, 24));
        pageMoveBack->setAutoRaise(true);

        horizontalLayout_3->addWidget(pageMoveBack);

        line_3 = new QFrame(PageEditorContainer);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_3);

        tools = new ItemsToolWidget(PageEditorContainer);
        tools->setObjectName(QString::fromUtf8("tools"));

        horizontalLayout_3->addWidget(tools);

        line_2 = new QFrame(PageEditorContainer);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMinimumSize(QSize(0, 0));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_2);

        actions = new QToolBar(PageEditorContainer);
        actions->setObjectName(QString::fromUtf8("actions"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(actions->sizePolicy().hasHeightForWidth());
        actions->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(actions);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        ItemTools = new QWidget(PageEditorContainer);
        ItemTools->setObjectName(QString::fromUtf8("ItemTools"));
        horizontalLayout_2 = new QHBoxLayout(ItemTools);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        fontEditor = new FontEditor(ItemTools);
        fontEditor->setObjectName(QString::fromUtf8("fontEditor"));

        horizontalLayout_2->addWidget(fontEditor);

        line_4 = new QFrame(ItemTools);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_4);

        alignmentEditor = new AlignmentEditor(ItemTools);
        alignmentEditor->setObjectName(QString::fromUtf8("alignmentEditor"));

        horizontalLayout_2->addWidget(alignmentEditor);

        line_5 = new QFrame(ItemTools);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_5);

        frameEditor = new FrameEditor(ItemTools);
        frameEditor->setObjectName(QString::fromUtf8("frameEditor"));

        horizontalLayout_2->addWidget(frameEditor);

        horizontalSpacer_2 = new QSpacerItem(570, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(ItemTools);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        splitter = new QSplitter(PageEditorContainer);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy2);
        splitter->setOrientation(Qt::Horizontal);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        pageLayout = new QVBoxLayout(verticalLayoutWidget);
        pageLayout->setObjectName(QString::fromUtf8("pageLayout"));
        pageLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        pageLayout->setContentsMargins(0, 0, 0, 0);
        pageTabs = new FancyTabWidget(verticalLayoutWidget);
        pageTabs->setObjectName(QString::fromUtf8("pageTabs"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pageTabs->sizePolicy().hasHeightForWidth());
        pageTabs->setSizePolicy(sizePolicy3);
        widget = new QWidget(pageTabs);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 150, 211, 31));

        pageLayout->addWidget(pageTabs);

        splitter->addWidget(verticalLayoutWidget);
        splitter2 = new QSplitter(splitter);
        splitter2->setObjectName(QString::fromUtf8("splitter2"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(splitter2->sizePolicy().hasHeightForWidth());
        splitter2->setSizePolicy(sizePolicy4);
        splitter2->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        ObjectInspectorLayout = new QVBoxLayout(layoutWidget);
        ObjectInspectorLayout->setObjectName(QString::fromUtf8("ObjectInspectorLayout"));
        ObjectInspectorLayout->setContentsMargins(0, 0, 0, 0);
        splitter2->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        PropertyEditorLayout = new QVBoxLayout(layoutWidget1);
        PropertyEditorLayout->setObjectName(QString::fromUtf8("PropertyEditorLayout"));
        PropertyEditorLayout->setContentsMargins(0, 0, 0, 0);
        splitter2->addWidget(layoutWidget1);
        splitter->addWidget(splitter2);

        gridLayout->addWidget(splitter, 1, 0, 1, 1);


        retranslateUi(PageEditorContainer);

        QMetaObject::connectSlotsByName(PageEditorContainer);
    } // setupUi

    void retranslateUi(QWidget *PageEditorContainer)
    {
        PageEditorContainer->setWindowTitle(QApplication::translate("PageEditorContainer", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addPageButton->setToolTip(QApplication::translate("PageEditorContainer", "Add new page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addPageButton->setText(QApplication::translate("PageEditorContainer", "Add", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deletePageButton->setToolTip(QApplication::translate("PageEditorContainer", "Remove current page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deletePageButton->setText(QApplication::translate("PageEditorContainer", "Del", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clonePageButton->setToolTip(QApplication::translate("PageEditorContainer", "Make a copy of current page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clonePageButton->setText(QApplication::translate("PageEditorContainer", "Copy", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pageMoveFront->setToolTip(QApplication::translate("PageEditorContainer", "Page move front", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pageMoveFront->setText(QApplication::translate("PageEditorContainer", "front", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pageMoveBack->setToolTip(QApplication::translate("PageEditorContainer", "Page move back", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pageMoveBack->setText(QApplication::translate("PageEditorContainer", "Back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PageEditorContainer: public Ui_PageEditorContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEEDITORCONTAINER_H
