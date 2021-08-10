/********************************************************************************
** Form generated from reading UI file 'imageDialog.ui'
**
** Created: Sun Jan 22 16:07:41 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEDIALOG_H
#define UI_IMAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_imageDialog
{
public:
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *chooseButton;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *imageDialog)
    {
        if (imageDialog->objectName().isEmpty())
            imageDialog->setObjectName(QString::fromUtf8("imageDialog"));
        imageDialog->resize(450, 447);
        gridLayout = new QGridLayout(imageDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        graphicsView = new QGraphicsView(imageDialog);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        chooseButton = new QPushButton(imageDialog);
        chooseButton->setObjectName(QString::fromUtf8("chooseButton"));

        horizontalLayout_2->addWidget(chooseButton);

        clearButton = new QPushButton(imageDialog);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        horizontalLayout_2->addWidget(clearButton);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(imageDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(imageDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        horizontalLayout_3->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        retranslateUi(imageDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), imageDialog, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), imageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(imageDialog);
    } // setupUi

    void retranslateUi(QDialog *imageDialog)
    {
        imageDialog->setWindowTitle(QApplication::translate("imageDialog", "Pixmap", 0, QApplication::UnicodeUTF8));
        chooseButton->setText(QApplication::translate("imageDialog", "Choose", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("imageDialog", "Clear", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("imageDialog", "&Ok", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("imageDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class imageDialog: public Ui_imageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEDIALOG_H
