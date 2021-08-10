/********************************************************************************
** Form generated from reading UI file 'fonteditor.ui'
**
** Created: Sun Jan 22 17:36:39 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONTEDITOR_H
#define UI_FONTEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FontEditor
{
public:
    QGridLayout *gridLayout;
    QToolButton *fontDialog;
    QToolButton *italic;
    QFontComboBox *family;
    QToolButton *bold;
    QToolButton *strikeout;
    QDoubleSpinBox *size;
    QFrame *line;
    QToolButton *fontColor;
    QToolButton *underline;

    void setupUi(QWidget *FontEditor)
    {
        if (FontEditor->objectName().isEmpty())
            FontEditor->setObjectName(QString::fromUtf8("FontEditor"));
        gridLayout = new QGridLayout(FontEditor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(4);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        fontDialog = new QToolButton(FontEditor);
        fontDialog->setObjectName(QString::fromUtf8("fontDialog"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        fontDialog->setIcon(icon);
        fontDialog->setIconSize(QSize(24, 24));
        fontDialog->setAutoRaise(true);

        gridLayout->addWidget(fontDialog, 0, 7, 1, 1);

        italic = new QToolButton(FontEditor);
        italic->setObjectName(QString::fromUtf8("italic"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/italic-h-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        italic->setIcon(icon1);
        italic->setIconSize(QSize(24, 24));
        italic->setCheckable(true);
        italic->setAutoRaise(true);

        gridLayout->addWidget(italic, 0, 3, 1, 1);

        family = new QFontComboBox(FontEditor);
        family->setObjectName(QString::fromUtf8("family"));

        gridLayout->addWidget(family, 0, 0, 1, 1);

        bold = new QToolButton(FontEditor);
        bold->setObjectName(QString::fromUtf8("bold"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/bold-h-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        bold->setIcon(icon2);
        bold->setIconSize(QSize(24, 24));
        bold->setCheckable(true);
        bold->setAutoRaise(true);

        gridLayout->addWidget(bold, 0, 2, 1, 1);

        strikeout = new QToolButton(FontEditor);
        strikeout->setObjectName(QString::fromUtf8("strikeout"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/strikeout-h-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        strikeout->setIcon(icon3);
        strikeout->setIconSize(QSize(24, 24));
        strikeout->setCheckable(true);
        strikeout->setAutoRaise(true);

        gridLayout->addWidget(strikeout, 0, 5, 1, 1);

        size = new QDoubleSpinBox(FontEditor);
        size->setObjectName(QString::fromUtf8("size"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(size->sizePolicy().hasHeightForWidth());
        size->setSizePolicy(sizePolicy);
        size->setDecimals(1);
        size->setSingleStep(0.5);

        gridLayout->addWidget(size, 0, 1, 1, 1);

        line = new QFrame(FontEditor);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 6, 1, 1);

        fontColor = new QToolButton(FontEditor);
        fontColor->setObjectName(QString::fromUtf8("fontColor"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/format-text-color.png"), QSize(), QIcon::Normal, QIcon::Off);
        fontColor->setIcon(icon4);
        fontColor->setIconSize(QSize(24, 24));
        fontColor->setAutoRaise(true);

        gridLayout->addWidget(fontColor, 0, 8, 1, 1);

        underline = new QToolButton(FontEditor);
        underline->setObjectName(QString::fromUtf8("underline"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/underline-h-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        underline->setIcon(icon5);
        underline->setIconSize(QSize(24, 24));
        underline->setCheckable(true);
        underline->setAutoRaise(true);

        gridLayout->addWidget(underline, 0, 4, 1, 1);


        retranslateUi(FontEditor);

        QMetaObject::connectSlotsByName(FontEditor);
    } // setupUi

    void retranslateUi(QWidget *FontEditor)
    {
        FontEditor->setWindowTitle(QApplication::translate("FontEditor", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fontDialog->setToolTip(QApplication::translate("FontEditor", "Font selecting dialog", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fontDialog->setText(QApplication::translate("FontEditor", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        italic->setToolTip(QApplication::translate("FontEditor", "Italic", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        italic->setText(QApplication::translate("FontEditor", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bold->setToolTip(QApplication::translate("FontEditor", "Bold", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bold->setText(QApplication::translate("FontEditor", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        strikeout->setToolTip(QApplication::translate("FontEditor", "strikeout", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        strikeout->setText(QApplication::translate("FontEditor", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        size->setToolTip(QApplication::translate("FontEditor", "Font size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        fontColor->setToolTip(QApplication::translate("FontEditor", "Font color", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fontColor->setText(QApplication::translate("FontEditor", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        underline->setToolTip(QApplication::translate("FontEditor", "Underline", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        underline->setText(QApplication::translate("FontEditor", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FontEditor: public Ui_FontEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONTEDITOR_H
