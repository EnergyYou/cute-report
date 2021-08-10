/********************************************************************************
** Form generated from reading UI file 'gitstoragehelper.ui'
**
** Created: Sun Jan 22 17:33:06 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GITSTORAGEHELPER_H
#define UI_GITSTORAGEHELPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GitStorageHelper
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *remoteUrl;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *login;
    QLabel *label_4;
    QLineEdit *password;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *cbShowPassword;
    QCheckBox *cbSavePassword;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *localPath;
    QPushButton *bLocalPath;
    QLabel *label_6;
    QLineEdit *gitBinaryPath;
    QPushButton *bGitBinary;
    QHBoxLayout *horizontalLayout_4;
    QLabel *gitVersion;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *syncTimout;
    QCheckBox *cbCommitChanges;
    QCheckBox *cbCommitNewFiles;
    QCheckBox *askOverWrite;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bSync;
    QSpacerItem *horizontalSpacer;
    QTextEdit *output;

    void setupUi(QWidget *GitStorageHelper)
    {
        if (GitStorageHelper->objectName().isEmpty())
            GitStorageHelper->setObjectName(QString::fromUtf8("GitStorageHelper"));
        GitStorageHelper->resize(634, 526);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GitStorageHelper->sizePolicy().hasHeightForWidth());
        GitStorageHelper->setSizePolicy(sizePolicy);
        GitStorageHelper->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(GitStorageHelper);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(GitStorageHelper);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        remoteUrl = new QLineEdit(GitStorageHelper);
        remoteUrl->setObjectName(QString::fromUtf8("remoteUrl"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(remoteUrl->sizePolicy().hasHeightForWidth());
        remoteUrl->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(remoteUrl, 0, 1, 1, 2);

        label_3 = new QLabel(GitStorageHelper);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        login = new QLineEdit(GitStorageHelper);
        login->setObjectName(QString::fromUtf8("login"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(login->sizePolicy().hasHeightForWidth());
        login->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(login);

        label_4 = new QLabel(GitStorageHelper);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_4);

        password = new QLineEdit(GitStorageHelper);
        password->setObjectName(QString::fromUtf8("password"));
        sizePolicy3.setHeightForWidth(password->sizePolicy().hasHeightForWidth());
        password->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(password);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        cbShowPassword = new QCheckBox(GitStorageHelper);
        cbShowPassword->setObjectName(QString::fromUtf8("cbShowPassword"));
        cbShowPassword->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cbShowPassword->sizePolicy().hasHeightForWidth());
        cbShowPassword->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(cbShowPassword);

        cbSavePassword = new QCheckBox(GitStorageHelper);
        cbSavePassword->setObjectName(QString::fromUtf8("cbSavePassword"));
        cbSavePassword->setEnabled(false);

        horizontalLayout_5->addWidget(cbSavePassword);

        horizontalSpacer_2 = new QSpacerItem(286, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_5, 2, 1, 1, 2);

        label_2 = new QLabel(GitStorageHelper);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        localPath = new QLineEdit(GitStorageHelper);
        localPath->setObjectName(QString::fromUtf8("localPath"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(localPath->sizePolicy().hasHeightForWidth());
        localPath->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(localPath, 3, 1, 1, 1);

        bLocalPath = new QPushButton(GitStorageHelper);
        bLocalPath->setObjectName(QString::fromUtf8("bLocalPath"));
        sizePolicy3.setHeightForWidth(bLocalPath->sizePolicy().hasHeightForWidth());
        bLocalPath->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(bLocalPath, 3, 2, 1, 1);

        label_6 = new QLabel(GitStorageHelper);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        gitBinaryPath = new QLineEdit(GitStorageHelper);
        gitBinaryPath->setObjectName(QString::fromUtf8("gitBinaryPath"));
        sizePolicy5.setHeightForWidth(gitBinaryPath->sizePolicy().hasHeightForWidth());
        gitBinaryPath->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(gitBinaryPath, 4, 1, 1, 1);

        bGitBinary = new QPushButton(GitStorageHelper);
        bGitBinary->setObjectName(QString::fromUtf8("bGitBinary"));
        sizePolicy3.setHeightForWidth(bGitBinary->sizePolicy().hasHeightForWidth());
        bGitBinary->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(bGitBinary, 4, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        gitVersion = new QLabel(GitStorageHelper);
        gitVersion->setObjectName(QString::fromUtf8("gitVersion"));

        horizontalLayout_4->addWidget(gitVersion);

        horizontalSpacer_3 = new QSpacerItem(564, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_4, 5, 1, 1, 2);

        label_7 = new QLabel(GitStorageHelper);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        syncTimout = new QSpinBox(GitStorageHelper);
        syncTimout->setObjectName(QString::fromUtf8("syncTimout"));
        syncTimout->setEnabled(false);

        horizontalLayout_2->addWidget(syncTimout);

        cbCommitChanges = new QCheckBox(GitStorageHelper);
        cbCommitChanges->setObjectName(QString::fromUtf8("cbCommitChanges"));
        cbCommitChanges->setEnabled(false);

        horizontalLayout_2->addWidget(cbCommitChanges);

        cbCommitNewFiles = new QCheckBox(GitStorageHelper);
        cbCommitNewFiles->setObjectName(QString::fromUtf8("cbCommitNewFiles"));
        cbCommitNewFiles->setEnabled(false);

        horizontalLayout_2->addWidget(cbCommitNewFiles);

        askOverWrite = new QCheckBox(GitStorageHelper);
        askOverWrite->setObjectName(QString::fromUtf8("askOverWrite"));
        askOverWrite->setEnabled(false);
        sizePolicy4.setHeightForWidth(askOverWrite->sizePolicy().hasHeightForWidth());
        askOverWrite->setSizePolicy(sizePolicy4);
        askOverWrite->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(askOverWrite);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        bSync = new QPushButton(GitStorageHelper);
        bSync->setObjectName(QString::fromUtf8("bSync"));

        horizontalLayout_3->addWidget(bSync);

        horizontalSpacer = new QSpacerItem(496, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_3, 7, 1, 1, 2);

        output = new QTextEdit(GitStorageHelper);
        output->setObjectName(QString::fromUtf8("output"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(output->sizePolicy().hasHeightForWidth());
        output->setSizePolicy(sizePolicy6);
        output->setReadOnly(true);

        gridLayout->addWidget(output, 8, 0, 1, 3);


        retranslateUi(GitStorageHelper);

        QMetaObject::connectSlotsByName(GitStorageHelper);
    } // setupUi

    void retranslateUi(QWidget *GitStorageHelper)
    {
        GitStorageHelper->setWindowTitle(QApplication::translate("GitStorageHelper", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GitStorageHelper", "Remote URL:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("GitStorageHelper", "Login:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("GitStorageHelper", "Password:", 0, QApplication::UnicodeUTF8));
        cbShowPassword->setText(QApplication::translate("GitStorageHelper", "show Password", 0, QApplication::UnicodeUTF8));
        cbSavePassword->setText(QApplication::translate("GitStorageHelper", "Save password (plain text)", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GitStorageHelper", "Local Path:", 0, QApplication::UnicodeUTF8));
        bLocalPath->setText(QApplication::translate("GitStorageHelper", "local path...", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("GitStorageHelper", "Git binary:", 0, QApplication::UnicodeUTF8));
        bGitBinary->setText(QApplication::translate("GitStorageHelper", "Browse...", 0, QApplication::UnicodeUTF8));
        gitVersion->setText(QApplication::translate("GitStorageHelper", "Version:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("GitStorageHelper", "Sync timout(secs):", 0, QApplication::UnicodeUTF8));
        cbCommitChanges->setText(QApplication::translate("GitStorageHelper", "commit changes", 0, QApplication::UnicodeUTF8));
        cbCommitNewFiles->setText(QApplication::translate("GitStorageHelper", "commit new files", 0, QApplication::UnicodeUTF8));
        askOverWrite->setText(QApplication::translate("GitStorageHelper", "ask to overwrite", 0, QApplication::UnicodeUTF8));
        bSync->setText(QApplication::translate("GitStorageHelper", "Sync Now", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GitStorageHelper: public Ui_GitStorageHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GITSTORAGEHELPER_H
