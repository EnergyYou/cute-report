/********************************************************************************
** Form generated from reading UI file 'messagelist.ui'
**
** Created: Wed Feb 8 11:24:41 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGELIST_H
#define UI_MESSAGELIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageList
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *list;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QPushButton *bWarning;
    QPushButton *bInfo;
    QPushButton *bError;
    QPushButton *bCritical;
    QTextEdit *fullText;

    void setupUi(QWidget *MessageList)
    {
        if (MessageList->objectName().isEmpty())
            MessageList->setObjectName(QString::fromUtf8("MessageList"));
        MessageList->resize(842, 378);
        verticalLayout = new QVBoxLayout(MessageList);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        list = new QTreeView(MessageList);
        list->setObjectName(QString::fromUtf8("list"));
        list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        list->setTextElideMode(Qt::ElideRight);
        list->setRootIsDecorated(false);
        list->setAnimated(true);
        list->setAllColumnsShowFocus(true);
        list->setWordWrap(true);

        verticalLayout->addWidget(list);

        widget = new QWidget(MessageList);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 20));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        bWarning = new QPushButton(widget);
        bWarning->setObjectName(QString::fromUtf8("bWarning"));
        bWarning->setEnabled(false);
        bWarning->setCheckable(true);
        bWarning->setChecked(true);

        horizontalLayout->addWidget(bWarning);

        bInfo = new QPushButton(widget);
        bInfo->setObjectName(QString::fromUtf8("bInfo"));
        bInfo->setEnabled(false);
        bInfo->setCheckable(true);
        bInfo->setChecked(true);

        horizontalLayout->addWidget(bInfo);

        bError = new QPushButton(widget);
        bError->setObjectName(QString::fromUtf8("bError"));
        bError->setEnabled(false);
        bError->setCheckable(true);
        bError->setChecked(true);

        horizontalLayout->addWidget(bError);

        bCritical = new QPushButton(widget);
        bCritical->setObjectName(QString::fromUtf8("bCritical"));
        bCritical->setEnabled(false);
        bCritical->setCheckable(true);
        bCritical->setChecked(true);

        horizontalLayout->addWidget(bCritical);


        verticalLayout->addWidget(widget);

        fullText = new QTextEdit(MessageList);
        fullText->setObjectName(QString::fromUtf8("fullText"));
        fullText->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(fullText);


        retranslateUi(MessageList);

        QMetaObject::connectSlotsByName(MessageList);
    } // setupUi

    void retranslateUi(QWidget *MessageList)
    {
        MessageList->setWindowTitle(QApplication::translate("MessageList", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MessageList", "Full Message:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MessageList", "Levels:", 0, QApplication::UnicodeUTF8));
        bWarning->setText(QApplication::translate("MessageList", "Warning", 0, QApplication::UnicodeUTF8));
        bInfo->setText(QApplication::translate("MessageList", "Info", 0, QApplication::UnicodeUTF8));
        bError->setText(QApplication::translate("MessageList", "Error", 0, QApplication::UnicodeUTF8));
        bCritical->setText(QApplication::translate("MessageList", "Critical", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MessageList: public Ui_MessageList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGELIST_H
