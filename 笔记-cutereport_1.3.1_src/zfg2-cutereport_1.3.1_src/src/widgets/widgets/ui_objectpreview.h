/********************************************************************************
** Form generated from reading UI file 'objectpreview.ui'
**
** Created: Wed Feb 8 11:23:53 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTPREVIEW_H
#define UI_OBJECTPREVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObjectPreview
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QGraphicsView *view;
    QWidget *page_2;
    QGridLayout *layout;

    void setupUi(QWidget *ObjectPreview)
    {
        if (ObjectPreview->objectName().isEmpty())
            ObjectPreview->setObjectName(QString::fromUtf8("ObjectPreview"));
        ObjectPreview->resize(492, 317);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ObjectPreview->sizePolicy().hasHeightForWidth());
        ObjectPreview->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ObjectPreview);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(ObjectPreview);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        view = new QGraphicsView(page);
        view->setObjectName(QString::fromUtf8("view"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(view->sizePolicy().hasHeightForWidth());
        view->setSizePolicy(sizePolicy1);
        view->setMinimumSize(QSize(10, 10));
        view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_2->addWidget(view, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        layout = new QGridLayout(page_2);
        layout->setSpacing(0);
        layout->setObjectName(QString::fromUtf8("layout"));
        layout->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(ObjectPreview);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ObjectPreview);
    } // setupUi

    void retranslateUi(QWidget *ObjectPreview)
    {
        ObjectPreview->setWindowTitle(QApplication::translate("ObjectPreview", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ObjectPreview: public Ui_ObjectPreview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTPREVIEW_H
