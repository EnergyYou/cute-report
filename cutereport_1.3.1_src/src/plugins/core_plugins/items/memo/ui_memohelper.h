/********************************************************************************
** Form generated from reading UI file 'memohelper.ui'
**
** Created: Sun Jan 22 17:34:51 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMOHELPER_H
#define UI_MEMOHELPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemoHelper
{
public:
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *pageText;
    QVBoxLayout *pageTextLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *bExpression;
    QPushButton *bAggregate;
    QPushButton *bFormatting;
    QPushButton *bWordWrap;
    QSpacerItem *horizontalSpacer;
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QGridLayout *toolLayout;

    void setupUi(QWidget *MemoHelper)
    {
        if (MemoHelper->objectName().isEmpty())
            MemoHelper->setObjectName(QString::fromUtf8("MemoHelper"));
        MemoHelper->resize(524, 299);
        verticalLayout_4 = new QVBoxLayout(MemoHelper);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(MemoHelper);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageText = new QWidget();
        pageText->setObjectName(QString::fromUtf8("pageText"));
        pageTextLayout = new QVBoxLayout(pageText);
        pageTextLayout->setSpacing(4);
        pageTextLayout->setObjectName(QString::fromUtf8("pageTextLayout"));
        pageTextLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bExpression = new QPushButton(pageText);
        bExpression->setObjectName(QString::fromUtf8("bExpression"));

        horizontalLayout->addWidget(bExpression);

        bAggregate = new QPushButton(pageText);
        bAggregate->setObjectName(QString::fromUtf8("bAggregate"));

        horizontalLayout->addWidget(bAggregate);

        bFormatting = new QPushButton(pageText);
        bFormatting->setObjectName(QString::fromUtf8("bFormatting"));

        horizontalLayout->addWidget(bFormatting);

        bWordWrap = new QPushButton(pageText);
        bWordWrap->setObjectName(QString::fromUtf8("bWordWrap"));

        horizontalLayout->addWidget(bWordWrap);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        pageTextLayout->addLayout(horizontalLayout);

        stackedWidget->addWidget(pageText);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        toolLayout = new QGridLayout();
        toolLayout->setObjectName(QString::fromUtf8("toolLayout"));

        gridLayout_4->addLayout(toolLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        verticalLayout_4->addWidget(stackedWidget);


        retranslateUi(MemoHelper);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MemoHelper);
    } // setupUi

    void retranslateUi(QWidget *MemoHelper)
    {
        MemoHelper->setWindowTitle(QApplication::translate("MemoHelper", "Dialog", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bExpression->setToolTip(QApplication::translate("MemoHelper", "Insert expression", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bExpression->setText(QApplication::translate("MemoHelper", "Expression", 0, QApplication::UnicodeUTF8));
        bAggregate->setText(QApplication::translate("MemoHelper", "Aggregate", 0, QApplication::UnicodeUTF8));
        bFormatting->setText(QApplication::translate("MemoHelper", "Formatting", 0, QApplication::UnicodeUTF8));
        bWordWrap->setText(QApplication::translate("MemoHelper", "Word Wrap", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MemoHelper: public Ui_MemoHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMOHELPER_H
