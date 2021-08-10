/********************************************************************************
** Form generated from reading UI file 'alignmenteditor.ui'
**
** Created: Sun Jan 22 17:36:39 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALIGNMENTEDITOR_H
#define UI_ALIGNMENTEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlignmentEditor
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *alignLeft;
    QToolButton *alignCenter;
    QToolButton *alignRight;
    QToolButton *alignJustify;
    QFrame *line;
    QToolButton *alignTop;
    QToolButton *alignMiddle;
    QToolButton *alignBottom;
    QFrame *line_2;
    QToolButton *wordWrap;

    void setupUi(QWidget *AlignmentEditor)
    {
        if (AlignmentEditor->objectName().isEmpty())
            AlignmentEditor->setObjectName(QString::fromUtf8("AlignmentEditor"));
        horizontalLayout = new QHBoxLayout(AlignmentEditor);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        alignLeft = new QToolButton(AlignmentEditor);
        alignLeft->setObjectName(QString::fromUtf8("alignLeft"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/format-justify-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignLeft->setIcon(icon);
        alignLeft->setIconSize(QSize(24, 24));
        alignLeft->setCheckable(true);
        alignLeft->setAutoRaise(true);

        horizontalLayout->addWidget(alignLeft);

        alignCenter = new QToolButton(AlignmentEditor);
        alignCenter->setObjectName(QString::fromUtf8("alignCenter"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/format-justify-center.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignCenter->setIcon(icon1);
        alignCenter->setIconSize(QSize(24, 24));
        alignCenter->setCheckable(true);
        alignCenter->setAutoRaise(true);

        horizontalLayout->addWidget(alignCenter);

        alignRight = new QToolButton(AlignmentEditor);
        alignRight->setObjectName(QString::fromUtf8("alignRight"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/format-justify-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignRight->setIcon(icon2);
        alignRight->setIconSize(QSize(24, 24));
        alignRight->setCheckable(true);
        alignRight->setAutoRaise(true);

        horizontalLayout->addWidget(alignRight);

        alignJustify = new QToolButton(AlignmentEditor);
        alignJustify->setObjectName(QString::fromUtf8("alignJustify"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/format-justify-fill.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignJustify->setIcon(icon3);
        alignJustify->setIconSize(QSize(24, 24));
        alignJustify->setCheckable(true);
        alignJustify->setAutoRaise(true);

        horizontalLayout->addWidget(alignJustify);

        line = new QFrame(AlignmentEditor);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        alignTop = new QToolButton(AlignmentEditor);
        alignTop->setObjectName(QString::fromUtf8("alignTop"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/format-justify-top.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignTop->setIcon(icon4);
        alignTop->setIconSize(QSize(24, 24));
        alignTop->setCheckable(true);
        alignTop->setAutoRaise(true);

        horizontalLayout->addWidget(alignTop);

        alignMiddle = new QToolButton(AlignmentEditor);
        alignMiddle->setObjectName(QString::fromUtf8("alignMiddle"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/format-justify-middle.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignMiddle->setIcon(icon5);
        alignMiddle->setIconSize(QSize(24, 24));
        alignMiddle->setCheckable(true);
        alignMiddle->setAutoRaise(true);

        horizontalLayout->addWidget(alignMiddle);

        alignBottom = new QToolButton(AlignmentEditor);
        alignBottom->setObjectName(QString::fromUtf8("alignBottom"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/format-justify-bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        alignBottom->setIcon(icon6);
        alignBottom->setIconSize(QSize(24, 24));
        alignBottom->setCheckable(true);
        alignBottom->setAutoRaise(true);

        horizontalLayout->addWidget(alignBottom);

        line_2 = new QFrame(AlignmentEditor);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        wordWrap = new QToolButton(AlignmentEditor);
        wordWrap->setObjectName(QString::fromUtf8("wordWrap"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/word-wrap.png"), QSize(), QIcon::Normal, QIcon::Off);
        wordWrap->setIcon(icon7);
        wordWrap->setIconSize(QSize(24, 24));
        wordWrap->setCheckable(true);
        wordWrap->setAutoRaise(true);

        horizontalLayout->addWidget(wordWrap);


        retranslateUi(AlignmentEditor);

        QMetaObject::connectSlotsByName(AlignmentEditor);
    } // setupUi

    void retranslateUi(QWidget *AlignmentEditor)
    {
        AlignmentEditor->setWindowTitle(QApplication::translate("AlignmentEditor", "Form", 0, QApplication::UnicodeUTF8));
        alignLeft->setText(QApplication::translate("AlignmentEditor", "...", 0, QApplication::UnicodeUTF8));
        alignCenter->setText(QApplication::translate("AlignmentEditor", "...", 0, QApplication::UnicodeUTF8));
        alignRight->setText(QApplication::translate("AlignmentEditor", "...", 0, QApplication::UnicodeUTF8));
        alignJustify->setText(QApplication::translate("AlignmentEditor", "...", 0, QApplication::UnicodeUTF8));
        alignTop->setText(QApplication::translate("AlignmentEditor", "...", 0, QApplication::UnicodeUTF8));
        alignMiddle->setText(QApplication::translate("AlignmentEditor", "...", 0, QApplication::UnicodeUTF8));
        alignBottom->setText(QApplication::translate("AlignmentEditor", "...", 0, QApplication::UnicodeUTF8));
        wordWrap->setText(QApplication::translate("AlignmentEditor", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AlignmentEditor: public Ui_AlignmentEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALIGNMENTEDITOR_H
