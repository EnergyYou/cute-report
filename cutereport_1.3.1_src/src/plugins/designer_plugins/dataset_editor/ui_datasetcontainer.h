/********************************************************************************
** Form generated from reading UI file 'datasetcontainer.ui'
**
** Created: Sun Jan 22 17:37:07 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASETCONTAINER_H
#define UI_DATASETCONTAINER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableView>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <fancytabs.h>

QT_BEGIN_NAMESPACE

class Ui_DatasetContainer
{
public:
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *pageDataset;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *datasetButtonsLayout;
    QFrame *line;
    QToolButton *pbDelete;
    QFrame *line_2;
    QToolButton *bTest;
    QSpacerItem *horizontalSpacer;
    QPushButton *bProperties;
    QSplitter *splitter;
    FancyTabWidget *tabs;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *propertyEditorLayout;
    QVBoxLayout *variablesLoyout;
    QWidget *pageTest;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bCloseTest;
    QSpacerItem *horizontalSpacer_2;
    QSplitter *splitterTestPage;
    QTableView *table;
    QTextEdit *errors;

    void setupUi(QWidget *DatasetContainer)
    {
        if (DatasetContainer->objectName().isEmpty())
            DatasetContainer->setObjectName(QString::fromUtf8("DatasetContainer"));
        DatasetContainer->resize(585, 414);
        gridLayout_3 = new QGridLayout(DatasetContainer);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(DatasetContainer);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageDataset = new QWidget();
        pageDataset->setObjectName(QString::fromUtf8("pageDataset"));
        gridLayout = new QGridLayout(pageDataset);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(pageDataset);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        datasetButtonsLayout = new QHBoxLayout();
        datasetButtonsLayout->setSpacing(2);
        datasetButtonsLayout->setObjectName(QString::fromUtf8("datasetButtonsLayout"));
        datasetButtonsLayout->setContentsMargins(4, 4, 4, 4);

        horizontalLayout->addLayout(datasetButtonsLayout);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        pbDelete = new QToolButton(frame);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/trash-empty.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbDelete->setIcon(icon);
        pbDelete->setIconSize(QSize(24, 24));
        pbDelete->setAutoRaise(true);

        horizontalLayout->addWidget(pbDelete);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        bTest = new QToolButton(frame);
        bTest->setObjectName(QString::fromUtf8("bTest"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/validate.png"), QSize(), QIcon::Normal, QIcon::Off);
        bTest->setIcon(icon1);
        bTest->setIconSize(QSize(24, 24));
        bTest->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        bTest->setAutoRaise(true);

        horizontalLayout->addWidget(bTest);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bProperties = new QPushButton(frame);
        bProperties->setObjectName(QString::fromUtf8("bProperties"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/run-build.png"), QSize(), QIcon::Normal, QIcon::Off);
        bProperties->setIcon(icon2);
        bProperties->setCheckable(true);

        horizontalLayout->addWidget(bProperties);


        verticalLayout_2->addWidget(frame);

        splitter = new QSplitter(pageDataset);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        tabs = new FancyTabWidget(splitter);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabs->sizePolicy().hasHeightForWidth());
        tabs->setSizePolicy(sizePolicy1);
        splitter->addWidget(tabs);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        propertyEditorLayout = new QVBoxLayout();
        propertyEditorLayout->setObjectName(QString::fromUtf8("propertyEditorLayout"));

        verticalLayout->addLayout(propertyEditorLayout);

        variablesLoyout = new QVBoxLayout();
        variablesLoyout->setObjectName(QString::fromUtf8("variablesLoyout"));

        verticalLayout->addLayout(variablesLoyout);

        splitter->addWidget(layoutWidget);

        verticalLayout_2->addWidget(splitter);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        stackedWidget->addWidget(pageDataset);
        pageTest = new QWidget();
        pageTest->setObjectName(QString::fromUtf8("pageTest"));
        verticalLayout_3 = new QVBoxLayout(pageTest);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(pageTest);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setMinimumSize(QSize(0, 30));
        frame_2->setMaximumSize(QSize(16777215, 30));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        bCloseTest = new QPushButton(frame_2);
        bCloseTest->setObjectName(QString::fromUtf8("bCloseTest"));
        sizePolicy2.setHeightForWidth(bCloseTest->sizePolicy().hasHeightForWidth());
        bCloseTest->setSizePolicy(sizePolicy2);
        bCloseTest->setMinimumSize(QSize(0, 24));
        bCloseTest->setMaximumSize(QSize(16777215, 24));

        horizontalLayout_2->addWidget(bCloseTest);

        horizontalSpacer_2 = new QSpacerItem(494, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(frame_2);

        splitterTestPage = new QSplitter(pageTest);
        splitterTestPage->setObjectName(QString::fromUtf8("splitterTestPage"));
        splitterTestPage->setOrientation(Qt::Vertical);
        table = new QTableView(splitterTestPage);
        table->setObjectName(QString::fromUtf8("table"));
        splitterTestPage->addWidget(table);
        errors = new QTextEdit(splitterTestPage);
        errors->setObjectName(QString::fromUtf8("errors"));
        splitterTestPage->addWidget(errors);

        verticalLayout_3->addWidget(splitterTestPage);

        stackedWidget->addWidget(pageTest);

        gridLayout_3->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(DatasetContainer);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DatasetContainer);
    } // setupUi

    void retranslateUi(QWidget *DatasetContainer)
    {
        DatasetContainer->setWindowTitle(QApplication::translate("DatasetContainer", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbDelete->setToolTip(QApplication::translate("DatasetContainer", "Delete dataset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bTest->setText(QApplication::translate("DatasetContainer", "Test", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bProperties->setToolTip(QApplication::translate("DatasetContainer", "Properties", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bProperties->setText(QString());
        bCloseTest->setText(QApplication::translate("DatasetContainer", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DatasetContainer: public Ui_DatasetContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASETCONTAINER_H
