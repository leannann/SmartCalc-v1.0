/********************************************************************************
** Form generated from reading UI file 'deposit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSIT_H
#define UI_DEPOSIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Deposit
{
public:
    QWidget *centralwidget;
    QRadioButton *flag;
    QLabel *rate;
    QLineEdit *input_rate;
    QLabel *deposit;
    QLineEdit *input_deposit;
    QLineEdit *input_period;
    QLabel *period;
    QComboBox *dropdown_replemishment;
    QLineEdit *input_withdraw;
    QComboBox *dropdown_withdraw;
    QLineEdit *input_replenishment;
    QLabel *output_deposit;
    QLineEdit *input_percent;
    QLineEdit *input_tax;
    QLabel *output_percent;
    QLineEdit *input_depositEnd;
    QLabel *output_tax;
    QPushButton *calculate;
    QLabel *rate_tax;
    QLineEdit *input_taxrate;

    void setupUi(QMainWindow *Deposit)
    {
        if (Deposit->objectName().isEmpty())
            Deposit->setObjectName(QString::fromUtf8("Deposit"));
        Deposit->resize(400, 600);
        Deposit->setMaximumSize(QSize(480, 700));
        Deposit->setBaseSize(QSize(400, 400));
        Deposit->setStyleSheet(QString::fromUtf8("padding:5px;"));
        centralwidget = new QWidget(Deposit);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(500, 700));
        centralwidget->setBaseSize(QSize(400, 400));
        flag = new QRadioButton(centralwidget);
        flag->setObjectName(QString::fromUtf8("flag"));
        flag->setGeometry(QRect(0, 540, 150, 60));
        QFont font;
        font.setPointSize(12);
        flag->setFont(font);
        rate = new QLabel(centralwidget);
        rate->setObjectName(QString::fromUtf8("rate"));
        rate->setGeometry(QRect(0, 120, 150, 60));
        rate->setFont(font);
        input_rate = new QLineEdit(centralwidget);
        input_rate->setObjectName(QString::fromUtf8("input_rate"));
        input_rate->setGeometry(QRect(150, 120, 250, 60));
        input_rate->setFont(font);
        deposit = new QLabel(centralwidget);
        deposit->setObjectName(QString::fromUtf8("deposit"));
        deposit->setGeometry(QRect(0, 0, 150, 60));
        deposit->setFont(font);
        input_deposit = new QLineEdit(centralwidget);
        input_deposit->setObjectName(QString::fromUtf8("input_deposit"));
        input_deposit->setGeometry(QRect(150, 0, 250, 60));
        input_deposit->setFont(font);
        input_period = new QLineEdit(centralwidget);
        input_period->setObjectName(QString::fromUtf8("input_period"));
        input_period->setGeometry(QRect(150, 60, 250, 60));
        input_period->setFont(font);
        period = new QLabel(centralwidget);
        period->setObjectName(QString::fromUtf8("period"));
        period->setGeometry(QRect(0, 60, 150, 60));
        period->setFont(font);
        dropdown_replemishment = new QComboBox(centralwidget);
        dropdown_replemishment->addItem(QString());
        dropdown_replemishment->addItem(QString());
        dropdown_replemishment->addItem(QString());
        dropdown_replemishment->addItem(QString());
        dropdown_replemishment->addItem(QString());
        dropdown_replemishment->setObjectName(QString::fromUtf8("dropdown_replemishment"));
        dropdown_replemishment->setGeometry(QRect(0, 240, 250, 60));
        dropdown_replemishment->setMinimumSize(QSize(250, 0));
        dropdown_replemishment->setMaximumSize(QSize(220, 16777215));
        dropdown_replemishment->setFont(font);
        dropdown_replemishment->setLayoutDirection(Qt::RightToLeft);
        dropdown_replemishment->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        input_withdraw = new QLineEdit(centralwidget);
        input_withdraw->setObjectName(QString::fromUtf8("input_withdraw"));
        input_withdraw->setGeometry(QRect(250, 300, 150, 60));
        input_withdraw->setFont(font);
        dropdown_withdraw = new QComboBox(centralwidget);
        dropdown_withdraw->addItem(QString());
        dropdown_withdraw->addItem(QString());
        dropdown_withdraw->addItem(QString());
        dropdown_withdraw->addItem(QString());
        dropdown_withdraw->addItem(QString());
        dropdown_withdraw->setObjectName(QString::fromUtf8("dropdown_withdraw"));
        dropdown_withdraw->setGeometry(QRect(0, 300, 250, 60));
        dropdown_withdraw->setMinimumSize(QSize(220, 0));
        dropdown_withdraw->setMaximumSize(QSize(250, 16777215));
        dropdown_withdraw->setFont(font);
        dropdown_withdraw->setLayoutDirection(Qt::RightToLeft);
        input_replenishment = new QLineEdit(centralwidget);
        input_replenishment->setObjectName(QString::fromUtf8("input_replenishment"));
        input_replenishment->setGeometry(QRect(250, 240, 150, 60));
        input_replenishment->setFont(font);
        output_deposit = new QLabel(centralwidget);
        output_deposit->setObjectName(QString::fromUtf8("output_deposit"));
        output_deposit->setGeometry(QRect(0, 420, 150, 60));
        output_deposit->setFont(font);
        output_deposit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        input_percent = new QLineEdit(centralwidget);
        input_percent->setObjectName(QString::fromUtf8("input_percent"));
        input_percent->setGeometry(QRect(150, 360, 250, 60));
        input_percent->setMinimumSize(QSize(0, 0));
        input_percent->setMaximumSize(QSize(16777215, 16777215));
        input_percent->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        input_tax = new QLineEdit(centralwidget);
        input_tax->setObjectName(QString::fromUtf8("input_tax"));
        input_tax->setGeometry(QRect(150, 480, 250, 60));
        input_tax->setMinimumSize(QSize(0, 0));
        input_tax->setMaximumSize(QSize(16777215, 16777215));
        input_tax->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        output_percent = new QLabel(centralwidget);
        output_percent->setObjectName(QString::fromUtf8("output_percent"));
        output_percent->setGeometry(QRect(0, 360, 150, 60));
        output_percent->setFont(font);
        output_percent->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        input_depositEnd = new QLineEdit(centralwidget);
        input_depositEnd->setObjectName(QString::fromUtf8("input_depositEnd"));
        input_depositEnd->setGeometry(QRect(150, 420, 250, 60));
        input_depositEnd->setMinimumSize(QSize(0, 0));
        input_depositEnd->setMaximumSize(QSize(16777215, 16777215));
        input_depositEnd->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        output_tax = new QLabel(centralwidget);
        output_tax->setObjectName(QString::fromUtf8("output_tax"));
        output_tax->setGeometry(QRect(0, 480, 150, 60));
        output_tax->setFont(font);
        output_tax->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        calculate = new QPushButton(centralwidget);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        calculate->setGeometry(QRect(150, 540, 250, 60));
        rate_tax = new QLabel(centralwidget);
        rate_tax->setObjectName(QString::fromUtf8("rate_tax"));
        rate_tax->setGeometry(QRect(0, 180, 150, 60));
        rate_tax->setFont(font);
        input_taxrate = new QLineEdit(centralwidget);
        input_taxrate->setObjectName(QString::fromUtf8("input_taxrate"));
        input_taxrate->setGeometry(QRect(150, 180, 250, 60));
        input_taxrate->setFont(font);
        Deposit->setCentralWidget(centralwidget);

        retranslateUi(Deposit);

        QMetaObject::connectSlotsByName(Deposit);
    } // setupUi

    void retranslateUi(QMainWindow *Deposit)
    {
        Deposit->setWindowTitle(QCoreApplication::translate("Deposit", "DepositWindow", nullptr));
        flag->setText(QCoreApplication::translate("Deposit", "interest capitalization", nullptr));
        rate->setText(QCoreApplication::translate("Deposit", "Interest rate", nullptr));
        input_rate->setPlaceholderText(QCoreApplication::translate("Deposit", "1.50", nullptr));
        deposit->setText(QCoreApplication::translate("Deposit", "Deposit amount", nullptr));
        input_deposit->setPlaceholderText(QCoreApplication::translate("Deposit", "1000", nullptr));
        input_period->setPlaceholderText(QCoreApplication::translate("Deposit", "6", nullptr));
        period->setText(QCoreApplication::translate("Deposit", "Placement period", nullptr));
        dropdown_replemishment->setItemText(0, QCoreApplication::translate("Deposit", "Without withdrawals", nullptr));
        dropdown_replemishment->setItemText(1, QCoreApplication::translate("Deposit", "Replenishment once a month", nullptr));
        dropdown_replemishment->setItemText(2, QCoreApplication::translate("Deposit", "Replenishment quarterly", nullptr));
        dropdown_replemishment->setItemText(3, QCoreApplication::translate("Deposit", "Replenishment every six months", nullptr));
        dropdown_replemishment->setItemText(4, QCoreApplication::translate("Deposit", "Replenishment once a year", nullptr));

        input_withdraw->setPlaceholderText(QCoreApplication::translate("Deposit", "0", nullptr));
        dropdown_withdraw->setItemText(0, QCoreApplication::translate("Deposit", "Without removal", nullptr));
        dropdown_withdraw->setItemText(1, QCoreApplication::translate("Deposit", "Withdrawal once a month", nullptr));
        dropdown_withdraw->setItemText(2, QCoreApplication::translate("Deposit", "Withdrawal once a quarter", nullptr));
        dropdown_withdraw->setItemText(3, QCoreApplication::translate("Deposit", "Withdrawal every six months", nullptr));
        dropdown_withdraw->setItemText(4, QCoreApplication::translate("Deposit", "Withdrawal once a year", nullptr));

        input_replenishment->setPlaceholderText(QCoreApplication::translate("Deposit", "0", nullptr));
        output_deposit->setText(QCoreApplication::translate("Deposit", "Deposit amount (end)", nullptr));
        output_percent->setText(QCoreApplication::translate("Deposit", "Accrueds", nullptr));
        output_tax->setText(QCoreApplication::translate("Deposit", "Tax amount", nullptr));
        calculate->setText(QCoreApplication::translate("Deposit", "Calculate", nullptr));
        rate_tax->setText(QCoreApplication::translate("Deposit", "Tax rate", nullptr));
        input_taxrate->setPlaceholderText(QCoreApplication::translate("Deposit", "13.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Deposit: public Ui_Deposit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSIT_H
