/********************************************************************************
** Form generated from reading UI file 'reportcontainer.ui'
**
** Created: Wed Feb 8 11:32:35 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTCONTAINER_H
#define UI_REPORTCONTAINER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <fancytabs.h>

QT_BEGIN_NAMESPACE

class Ui_ReportContainer
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QToolButton *newReport;
    QToolButton *openReport;
    QToolButton *openTemplate;
    QToolButton *saveReport;
    QToolButton *closeReport;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    FancyTabWidget *tabs;

    void setupUi(QWidget *ReportContainer)
    {
        if (ReportContainer->objectName().isEmpty())
            ReportContainer->setObjectName(QString::fromUtf8("ReportContainer"));
        ReportContainer->resize(601, 414);
        gridLayout_2 = new QGridLayout(ReportContainer);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(ReportContainer);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        newReport = new QToolButton(frame);
        newReport->setObjectName(QString::fromUtf8("newReport"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        newReport->setIcon(icon);
        newReport->setIconSize(QSize(24, 24));
        newReport->setAutoRaise(true);

        horizontalLayout->addWidget(newReport);

        openReport = new QToolButton(frame);
        openReport->setObjectName(QString::fromUtf8("openReport"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        openReport->setIcon(icon1);
        openReport->setIconSize(QSize(24, 24));
        openReport->setAutoRaise(true);

        horizontalLayout->addWidget(openReport);

        openTemplate = new QToolButton(frame);
        openTemplate->setObjectName(QString::fromUtf8("openTemplate"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/application-vnd.sun.xml.calc.template.png"), QSize(), QIcon::Normal, QIcon::Off);
        openTemplate->setIcon(icon2);
        openTemplate->setIconSize(QSize(24, 24));
        openTemplate->setAutoRaise(true);

        horizontalLayout->addWidget(openTemplate);

        saveReport = new QToolButton(frame);
        saveReport->setObjectName(QString::fromUtf8("saveReport"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveReport->setIcon(icon3);
        saveReport->setIconSize(QSize(24, 24));
        saveReport->setAutoRaise(true);

        horizontalLayout->addWidget(saveReport);

        closeReport = new QToolButton(frame);
        closeReport->setObjectName(QString::fromUtf8("closeReport"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/document-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeReport->setIcon(icon4);
        closeReport->setIconSize(QSize(24, 24));
        closeReport->setAutoRaise(true);

        horizontalLayout->addWidget(closeReport);

        horizontalSpacer = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        widget = new QWidget(ReportContainer);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabs = new FancyTabWidget(widget);
        tabs->setObjectName(QString::fromUtf8("tabs"));

        verticalLayout_2->addWidget(tabs);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(ReportContainer);

        QMetaObject::connectSlotsByName(ReportContainer);
    } // setupUi

    void retranslateUi(QWidget *ReportContainer)
    {
        ReportContainer->setWindowTitle(QApplication::translate("ReportContainer", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        newReport->setToolTip(QApplication::translate("ReportContainer", "Create new report", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        newReport->setText(QString());
#ifndef QT_NO_TOOLTIP
        openReport->setToolTip(QApplication::translate("ReportContainer", "Open Report", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        openReport->setText(QString());
#ifndef QT_NO_TOOLTIP
        openTemplate->setToolTip(QApplication::translate("ReportContainer", "Open Template", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        openTemplate->setText(QString());
#ifndef QT_NO_TOOLTIP
        saveReport->setToolTip(QApplication::translate("ReportContainer", "Save Report", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        saveReport->setText(QString());
#ifndef QT_NO_TOOLTIP
        closeReport->setToolTip(QApplication::translate("ReportContainer", "Close report", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class ReportContainer: public Ui_ReportContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTCONTAINER_H
