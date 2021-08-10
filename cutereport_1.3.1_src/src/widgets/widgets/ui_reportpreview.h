/********************************************************************************
** Form generated from reading UI file 'reportpreview.ui'
**
** Created: Sun Jan 22 16:38:17 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTPREVIEW_H
#define UI_REPORTPREVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QScrollBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportPreview
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QToolButton *bRun;
    QFrame *line_4;
    QToolButton *buttonEdit;
    QFrame *line;
    QToolButton *buttonExport;
    QToolButton *print;
    QFrame *line_3;
    QToolButton *buttonFitWidth;
    QToolButton *buttonFitPage;
    QComboBox *zoomPercent;
    QToolButton *buttonZoomOrig;
    QToolButton *buttonZoomIn;
    QToolButton *buttonZoomOut;
    QToolButton *buttonFirst;
    QToolButton *buttonPrevious;
    QLineEdit *pageNumber;
    QLabel *totalPages;
    QToolButton *buttonNext;
    QToolButton *buttonLast;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QGraphicsView *view;
    QScrollBar *vScrollBar;
    QScrollBar *hScrollBar;

    void setupUi(QWidget *ReportPreview)
    {
        if (ReportPreview->objectName().isEmpty())
            ReportPreview->setObjectName(QString::fromUtf8("ReportPreview"));
        ReportPreview->resize(752, 414);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        ReportPreview->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ReportPreview);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(ReportPreview);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        bRun = new QToolButton(frame);
        bRun->setObjectName(QString::fromUtf8("bRun"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bRun->sizePolicy().hasHeightForWidth());
        bRun->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/media-playback-start.png"), QSize(), QIcon::Normal, QIcon::Off);
        bRun->setIcon(icon1);
        bRun->setIconSize(QSize(24, 24));
        bRun->setAutoRaise(true);

        horizontalLayout->addWidget(bRun);

        line_4 = new QFrame(frame);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        buttonEdit = new QToolButton(frame);
        buttonEdit->setObjectName(QString::fromUtf8("buttonEdit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/document-edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonEdit->setIcon(icon2);
        buttonEdit->setIconSize(QSize(24, 24));
        buttonEdit->setCheckable(true);
        buttonEdit->setAutoRaise(true);

        horizontalLayout->addWidget(buttonEdit);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        buttonExport = new QToolButton(frame);
        buttonExport->setObjectName(QString::fromUtf8("buttonExport"));
        sizePolicy.setHeightForWidth(buttonExport->sizePolicy().hasHeightForWidth());
        buttonExport->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/export-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonExport->setIcon(icon3);
        buttonExport->setIconSize(QSize(24, 24));
        buttonExport->setAutoRaise(true);

        horizontalLayout->addWidget(buttonExport);

        print = new QToolButton(frame);
        print->setObjectName(QString::fromUtf8("print"));
        sizePolicy.setHeightForWidth(print->sizePolicy().hasHeightForWidth());
        print->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/document-print.png"), QSize(), QIcon::Normal, QIcon::Off);
        print->setIcon(icon4);
        print->setIconSize(QSize(24, 24));
        print->setAutoRaise(true);

        horizontalLayout->addWidget(print);

        line_3 = new QFrame(frame);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);

        buttonFitWidth = new QToolButton(frame);
        buttonFitWidth->setObjectName(QString::fromUtf8("buttonFitWidth"));
        sizePolicy.setHeightForWidth(buttonFitWidth->sizePolicy().hasHeightForWidth());
        buttonFitWidth->setSizePolicy(sizePolicy);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/zoom-fit-width.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonFitWidth->setIcon(icon5);
        buttonFitWidth->setIconSize(QSize(24, 24));
        buttonFitWidth->setAutoRaise(true);

        horizontalLayout->addWidget(buttonFitWidth);

        buttonFitPage = new QToolButton(frame);
        buttonFitPage->setObjectName(QString::fromUtf8("buttonFitPage"));
        sizePolicy.setHeightForWidth(buttonFitPage->sizePolicy().hasHeightForWidth());
        buttonFitPage->setSizePolicy(sizePolicy);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/zoom-fit-best.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonFitPage->setIcon(icon6);
        buttonFitPage->setIconSize(QSize(24, 24));
        buttonFitPage->setAutoRaise(true);

        horizontalLayout->addWidget(buttonFitPage);

        zoomPercent = new QComboBox(frame);
        zoomPercent->setObjectName(QString::fromUtf8("zoomPercent"));
        zoomPercent->setEnabled(true);
        zoomPercent->setEditable(true);
        zoomPercent->setInsertPolicy(QComboBox::NoInsert);
        zoomPercent->setFrame(true);

        horizontalLayout->addWidget(zoomPercent);

        buttonZoomOrig = new QToolButton(frame);
        buttonZoomOrig->setObjectName(QString::fromUtf8("buttonZoomOrig"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/zoom-original.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonZoomOrig->setIcon(icon7);
        buttonZoomOrig->setIconSize(QSize(24, 24));
        buttonZoomOrig->setAutoRaise(true);

        horizontalLayout->addWidget(buttonZoomOrig);

        buttonZoomIn = new QToolButton(frame);
        buttonZoomIn->setObjectName(QString::fromUtf8("buttonZoomIn"));
        sizePolicy.setHeightForWidth(buttonZoomIn->sizePolicy().hasHeightForWidth());
        buttonZoomIn->setSizePolicy(sizePolicy);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonZoomIn->setIcon(icon8);
        buttonZoomIn->setIconSize(QSize(24, 24));
        buttonZoomIn->setAutoRaise(true);

        horizontalLayout->addWidget(buttonZoomIn);

        buttonZoomOut = new QToolButton(frame);
        buttonZoomOut->setObjectName(QString::fromUtf8("buttonZoomOut"));
        sizePolicy.setHeightForWidth(buttonZoomOut->sizePolicy().hasHeightForWidth());
        buttonZoomOut->setSizePolicy(sizePolicy);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/zoom-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonZoomOut->setIcon(icon9);
        buttonZoomOut->setIconSize(QSize(24, 24));
        buttonZoomOut->setAutoRaise(true);

        horizontalLayout->addWidget(buttonZoomOut);

        buttonFirst = new QToolButton(frame);
        buttonFirst->setObjectName(QString::fromUtf8("buttonFirst"));
        sizePolicy.setHeightForWidth(buttonFirst->sizePolicy().hasHeightForWidth());
        buttonFirst->setSizePolicy(sizePolicy);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/go-first-view.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonFirst->setIcon(icon10);
        buttonFirst->setIconSize(QSize(24, 24));
        buttonFirst->setAutoRaise(true);

        horizontalLayout->addWidget(buttonFirst);

        buttonPrevious = new QToolButton(frame);
        buttonPrevious->setObjectName(QString::fromUtf8("buttonPrevious"));
        sizePolicy.setHeightForWidth(buttonPrevious->sizePolicy().hasHeightForWidth());
        buttonPrevious->setSizePolicy(sizePolicy);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/go-previous-view.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonPrevious->setIcon(icon11);
        buttonPrevious->setIconSize(QSize(24, 24));
        buttonPrevious->setAutoRaise(true);

        horizontalLayout->addWidget(buttonPrevious);

        pageNumber = new QLineEdit(frame);
        pageNumber->setObjectName(QString::fromUtf8("pageNumber"));
        pageNumber->setMinimumSize(QSize(30, 24));
        pageNumber->setMaximumSize(QSize(50, 26));
        pageNumber->setLayoutDirection(Qt::LeftToRight);
        pageNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(pageNumber);

        totalPages = new QLabel(frame);
        totalPages->setObjectName(QString::fromUtf8("totalPages"));

        horizontalLayout->addWidget(totalPages);

        buttonNext = new QToolButton(frame);
        buttonNext->setObjectName(QString::fromUtf8("buttonNext"));
        sizePolicy.setHeightForWidth(buttonNext->sizePolicy().hasHeightForWidth());
        buttonNext->setSizePolicy(sizePolicy);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/go-next-view.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonNext->setIcon(icon12);
        buttonNext->setIconSize(QSize(24, 24));
        buttonNext->setAutoRaise(true);

        horizontalLayout->addWidget(buttonNext);

        buttonLast = new QToolButton(frame);
        buttonLast->setObjectName(QString::fromUtf8("buttonLast"));
        sizePolicy.setHeightForWidth(buttonLast->sizePolicy().hasHeightForWidth());
        buttonLast->setSizePolicy(sizePolicy);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/go-last-view.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonLast->setIcon(icon13);
        buttonLast->setIconSize(QSize(24, 24));
        buttonLast->setAutoRaise(true);

        horizontalLayout->addWidget(buttonLast);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        view = new QGraphicsView(ReportPreview);
        view->setObjectName(QString::fromUtf8("view"));
        view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(view, 0, 0, 1, 1);

        vScrollBar = new QScrollBar(ReportPreview);
        vScrollBar->setObjectName(QString::fromUtf8("vScrollBar"));
        vScrollBar->setOrientation(Qt::Vertical);

        gridLayout->addWidget(vScrollBar, 0, 1, 1, 1);

        hScrollBar = new QScrollBar(ReportPreview);
        hScrollBar->setObjectName(QString::fromUtf8("hScrollBar"));
        hScrollBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hScrollBar, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(ReportPreview);

        QMetaObject::connectSlotsByName(ReportPreview);
    } // setupUi

    void retranslateUi(QWidget *ReportPreview)
    {
        ReportPreview->setWindowTitle(QApplication::translate("ReportPreview", "CuteReport Preview", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bRun->setToolTip(QApplication::translate("ReportPreview", "Run Report", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bRun->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonEdit->setToolTip(QApplication::translate("ReportPreview", "Edit Mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonEdit->setText(QApplication::translate("ReportPreview", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonExport->setToolTip(QApplication::translate("ReportPreview", "Export Document", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonExport->setText(QString());
#ifndef QT_NO_TOOLTIP
        print->setToolTip(QApplication::translate("ReportPreview", "Print document", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        print->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonFitWidth->setToolTip(QApplication::translate("ReportPreview", "Fit page in view by width", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonFitWidth->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonFitPage->setToolTip(QApplication::translate("ReportPreview", "Fit page to vew", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonFitPage->setText(QString());
        zoomPercent->clear();
        zoomPercent->insertItems(0, QStringList()
         << QApplication::translate("ReportPreview", "5%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "10%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "20%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "30%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "40%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "50%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "60%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "70%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "80%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "90%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "100%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "125%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "150%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "175%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "200%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "250%", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReportPreview", "300%", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        buttonZoomIn->setToolTip(QApplication::translate("ReportPreview", "zoom in", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        buttonZoomOut->setToolTip(QApplication::translate("ReportPreview", "zoom out", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonZoomOut->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonFirst->setToolTip(QApplication::translate("ReportPreview", "Go to the first page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonFirst->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonPrevious->setToolTip(QApplication::translate("ReportPreview", "Previous page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonPrevious->setText(QString());
        pageNumber->setText(QApplication::translate("ReportPreview", "0", 0, QApplication::UnicodeUTF8));
        totalPages->setText(QApplication::translate("ReportPreview", "/0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonNext->setToolTip(QApplication::translate("ReportPreview", "Next page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonNext->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonLast->setToolTip(QApplication::translate("ReportPreview", "Go to the last page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonLast->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ReportPreview: public Ui_ReportPreview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTPREVIEW_H
