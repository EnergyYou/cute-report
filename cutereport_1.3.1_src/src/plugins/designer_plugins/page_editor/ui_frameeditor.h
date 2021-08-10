/********************************************************************************
** Form generated from reading UI file 'frameeditor.ui'
**
** Created: Sun Jan 22 17:36:39 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAMEEDITOR_H
#define UI_FRAMEEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrameEditor
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *frameLeft;
    QToolButton *frameRight;
    QToolButton *frameTop;
    QToolButton *frameBottom;
    QFrame *line;
    QToolButton *frameAll;
    QToolButton *frameNone;
    QFrame *line_2;
    QDoubleSpinBox *penWidth;

    void setupUi(QWidget *FrameEditor)
    {
        if (FrameEditor->objectName().isEmpty())
            FrameEditor->setObjectName(QString::fromUtf8("FrameEditor"));
        horizontalLayout = new QHBoxLayout(FrameEditor);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        frameLeft = new QToolButton(FrameEditor);
        frameLeft->setObjectName(QString::fromUtf8("frameLeft"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/frame_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        frameLeft->setIcon(icon);
        frameLeft->setIconSize(QSize(24, 24));
        frameLeft->setCheckable(true);
        frameLeft->setAutoRaise(true);

        horizontalLayout->addWidget(frameLeft);

        frameRight = new QToolButton(FrameEditor);
        frameRight->setObjectName(QString::fromUtf8("frameRight"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/frame_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        frameRight->setIcon(icon1);
        frameRight->setIconSize(QSize(24, 24));
        frameRight->setCheckable(true);
        frameRight->setAutoRaise(true);

        horizontalLayout->addWidget(frameRight);

        frameTop = new QToolButton(FrameEditor);
        frameTop->setObjectName(QString::fromUtf8("frameTop"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/frame_top.png"), QSize(), QIcon::Normal, QIcon::Off);
        frameTop->setIcon(icon2);
        frameTop->setIconSize(QSize(24, 24));
        frameTop->setCheckable(true);
        frameTop->setAutoRaise(true);

        horizontalLayout->addWidget(frameTop);

        frameBottom = new QToolButton(FrameEditor);
        frameBottom->setObjectName(QString::fromUtf8("frameBottom"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/frame_bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        frameBottom->setIcon(icon3);
        frameBottom->setIconSize(QSize(24, 24));
        frameBottom->setCheckable(true);
        frameBottom->setAutoRaise(true);

        horizontalLayout->addWidget(frameBottom);

        line = new QFrame(FrameEditor);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        frameAll = new QToolButton(FrameEditor);
        frameAll->setObjectName(QString::fromUtf8("frameAll"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/frame_all.png"), QSize(), QIcon::Normal, QIcon::Off);
        frameAll->setIcon(icon4);
        frameAll->setIconSize(QSize(24, 24));
        frameAll->setCheckable(false);
        frameAll->setAutoRaise(true);

        horizontalLayout->addWidget(frameAll);

        frameNone = new QToolButton(FrameEditor);
        frameNone->setObjectName(QString::fromUtf8("frameNone"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/frame_none.png"), QSize(), QIcon::Normal, QIcon::Off);
        frameNone->setIcon(icon5);
        frameNone->setIconSize(QSize(24, 24));
        frameNone->setCheckable(false);
        frameNone->setAutoRaise(true);

        horizontalLayout->addWidget(frameNone);

        line_2 = new QFrame(FrameEditor);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        penWidth = new QDoubleSpinBox(FrameEditor);
        penWidth->setObjectName(QString::fromUtf8("penWidth"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(penWidth->sizePolicy().hasHeightForWidth());
        penWidth->setSizePolicy(sizePolicy);
        penWidth->setMaximum(10);
        penWidth->setSingleStep(0.1);

        horizontalLayout->addWidget(penWidth);


        retranslateUi(FrameEditor);

        QMetaObject::connectSlotsByName(FrameEditor);
    } // setupUi

    void retranslateUi(QWidget *FrameEditor)
    {
        FrameEditor->setWindowTitle(QApplication::translate("FrameEditor", "Form", 0, QApplication::UnicodeUTF8));
        frameLeft->setText(QApplication::translate("FrameEditor", "...", 0, QApplication::UnicodeUTF8));
        frameRight->setText(QApplication::translate("FrameEditor", "...", 0, QApplication::UnicodeUTF8));
        frameTop->setText(QApplication::translate("FrameEditor", "...", 0, QApplication::UnicodeUTF8));
        frameBottom->setText(QApplication::translate("FrameEditor", "...", 0, QApplication::UnicodeUTF8));
        frameAll->setText(QApplication::translate("FrameEditor", "...", 0, QApplication::UnicodeUTF8));
        frameNone->setText(QApplication::translate("FrameEditor", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrameEditor: public Ui_FrameEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAMEEDITOR_H
