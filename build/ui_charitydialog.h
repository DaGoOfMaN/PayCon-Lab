/********************************************************************************
** Form generated from reading UI file 'charitydialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARITYDIALOG_H
#define UI_CHARITYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_charityDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *charityPercentEdit;
    QLineEdit *charityAddressEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *charityDialog)
    {
        if (charityDialog->objectName().isEmpty())
            charityDialog->setObjectName(QString::fromUtf8("charityDialog"));
        charityDialog->resize(302, 373);
        buttonBox = new QDialogButtonBox(charityDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(60, 290, 176, 27));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        charityPercentEdit = new QLineEdit(charityDialog);
        charityPercentEdit->setObjectName(QString::fromUtf8("charityPercentEdit"));
        charityPercentEdit->setGeometry(QRect(30, 230, 231, 20));
        charityAddressEdit = new QLineEdit(charityDialog);
        charityAddressEdit->setObjectName(QString::fromUtf8("charityAddressEdit"));
        charityAddressEdit->setGeometry(QRect(30, 260, 231, 20));
        QFont font;
        font.setPointSize(7);
        charityAddressEdit->setFont(font);
        label = new QLabel(charityDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 251, 31));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(charityDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 281, 151));
        label_2->setLineWidth(1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);
        pushButton = new QPushButton(charityDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 330, 101, 32));
        pushButton->setLayoutDirection(Qt::LeftToRight);

        retranslateUi(charityDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), charityDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), charityDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(charityDialog);
    } // setupUi

    void retranslateUi(QDialog *charityDialog)
    {
        charityDialog->setWindowTitle(QApplication::translate("charityDialog", "S4C", 0, QApplication::UnicodeUTF8));
        charityPercentEdit->setPlaceholderText(QApplication::translate("charityDialog", "Enter % to Send (1-50)", 0, QApplication::UnicodeUTF8));
        charityAddressEdit->setPlaceholderText(QApplication::translate("charityDialog", "Enter Address to Send to", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("charityDialog", "CON For Charity", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("charityDialog", "Stake For Charity allows you to automatically send up to 50% of your Stake to another PayCon address.  CON For Charity requires that the Staked Block recieve 80 confirmations before the transaction is automatically sent. Stake For Charity is not stored in long term memory and must be set each time the wallet is started. ", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("charityDialog", "Disable S4C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class charityDialog: public Ui_charityDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARITYDIALOG_H
