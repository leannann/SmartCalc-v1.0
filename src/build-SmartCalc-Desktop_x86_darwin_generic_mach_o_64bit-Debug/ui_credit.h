/********************************************************************************
** Form generated from reading UI file 'credit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_H
#define UI_CREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Credit
{
public:
    QWidget *centralwidget;
    QLabel *type;
    QLabel *duty;
    QLineEdit *input_duty;
    QLabel *interest;
    QLineEdit *input_interest;
    QLineEdit *input_monthly;
    QLabel *monthly;
    QLabel *term;
    QLineEdit *input_amount;
    QLineEdit *input_term;
    QLabel *rate;
    QLabel *amount;
    QLineEdit *input_rate;
    QRadioButton *annuity;
    QRadioButton *diff;
    QPushButton *pushButton_calculate;

    void setupUi(QMainWindow *Credit)
    {
        if (Credit->objectName().isEmpty())
            Credit->setObjectName(QString::fromUtf8("Credit"));
        Credit->resize(430, 420);
        Credit->setMaximumSize(QSize(480, 620));
        Credit->setBaseSize(QSize(480, 620));
        Credit->setStyleSheet(QString::fromUtf8("padding:5px;"));
        centralwidget = new QWidget(Credit);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(500, 600));
        centralwidget->setBaseSize(QSize(500, 600));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        type = new QLabel(centralwidget);
        type->setObjectName(QString::fromUtf8("type"));
        type->setGeometry(QRect(0, 360, 150, 60));
        QFont font;
        font.setPointSize(12);
        type->setFont(font);
        duty = new QLabel(centralwidget);
        duty->setObjectName(QString::fromUtf8("duty"));
        duty->setGeometry(QRect(0, 300, 150, 60));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        duty->setFont(font1);
        input_duty = new QLineEdit(centralwidget);
        input_duty->setObjectName(QString::fromUtf8("input_duty"));
        input_duty->setGeometry(QRect(150, 300, 280, 60));
        input_duty->setMinimumSize(QSize(280, 60));
        input_duty->setMaximumSize(QSize(280, 60));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        input_duty->setFont(font2);
        input_duty->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        input_duty->setReadOnly(true);
        interest = new QLabel(centralwidget);
        interest->setObjectName(QString::fromUtf8("interest"));
        interest->setGeometry(QRect(0, 240, 150, 60));
        interest->setFont(font1);
        input_interest = new QLineEdit(centralwidget);
        input_interest->setObjectName(QString::fromUtf8("input_interest"));
        input_interest->setGeometry(QRect(150, 240, 280, 60));
        input_interest->setMinimumSize(QSize(150, 30));
        input_interest->setMaximumSize(QSize(300, 60));
        input_interest->setFont(font2);
        input_interest->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        input_interest->setReadOnly(true);
        input_monthly = new QLineEdit(centralwidget);
        input_monthly->setObjectName(QString::fromUtf8("input_monthly"));
        input_monthly->setGeometry(QRect(150, 180, 280, 60));
        input_monthly->setMinimumSize(QSize(280, 60));
        input_monthly->setMaximumSize(QSize(280, 60));
        input_monthly->setFont(font2);
        input_monthly->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        input_monthly->setReadOnly(true);
        monthly = new QLabel(centralwidget);
        monthly->setObjectName(QString::fromUtf8("monthly"));
        monthly->setGeometry(QRect(0, 180, 150, 60));
        monthly->setFont(font1);
        term = new QLabel(centralwidget);
        term->setObjectName(QString::fromUtf8("term"));
        term->setGeometry(QRect(0, 60, 150, 60));
        term->setMaximumSize(QSize(150, 60));
        term->setFont(font1);
        input_amount = new QLineEdit(centralwidget);
        input_amount->setObjectName(QString::fromUtf8("input_amount"));
        input_amount->setGeometry(QRect(150, 0, 280, 60));
        input_amount->setMinimumSize(QSize(280, 30));
        input_amount->setMaximumSize(QSize(280, 60));
        input_amount->setFont(font2);
        input_amount->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        input_term = new QLineEdit(centralwidget);
        input_term->setObjectName(QString::fromUtf8("input_term"));
        input_term->setGeometry(QRect(150, 60, 280, 60));
        input_term->setMinimumSize(QSize(280, 30));
        input_term->setMaximumSize(QSize(280, 60));
        input_term->setFont(font2);
        input_term->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        rate = new QLabel(centralwidget);
        rate->setObjectName(QString::fromUtf8("rate"));
        rate->setGeometry(QRect(0, 120, 150, 60));
        rate->setMaximumSize(QSize(150, 60));
        rate->setFont(font1);
        rate->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        amount = new QLabel(centralwidget);
        amount->setObjectName(QString::fromUtf8("amount"));
        amount->setGeometry(QRect(0, 0, 150, 60));
        amount->setMaximumSize(QSize(150, 60));
        amount->setFont(font);
        amount->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        input_rate = new QLineEdit(centralwidget);
        input_rate->setObjectName(QString::fromUtf8("input_rate"));
        input_rate->setGeometry(QRect(150, 120, 280, 60));
        input_rate->setMinimumSize(QSize(280, 30));
        input_rate->setMaximumSize(QSize(280, 60));
        input_rate->setBaseSize(QSize(1, 0));
        input_rate->setFont(font2);
        input_rate->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        annuity = new QRadioButton(centralwidget);
        annuity->setObjectName(QString::fromUtf8("annuity"));
        annuity->setGeometry(QRect(150, 360, 80, 60));
        annuity->setFont(font);
        annuity->setChecked(true);
        diff = new QRadioButton(centralwidget);
        diff->setObjectName(QString::fromUtf8("diff"));
        diff->setGeometry(QRect(230, 360, 110, 60));
        diff->setFont(font);
        pushButton_calculate = new QPushButton(centralwidget);
        pushButton_calculate->setObjectName(QString::fromUtf8("pushButton_calculate"));
        pushButton_calculate->setGeometry(QRect(340, 360, 90, 60));
        Credit->setCentralWidget(centralwidget);

        retranslateUi(Credit);

        QMetaObject::connectSlotsByName(Credit);
    } // setupUi

    void retranslateUi(QMainWindow *Credit)
    {
        Credit->setWindowTitle(QCoreApplication::translate("Credit", "CreditWindow", nullptr));
        type->setText(QCoreApplication::translate("Credit", "Payment type", nullptr));
        duty->setText(QCoreApplication::translate("Credit", "Debt + interest", nullptr));
        interest->setText(QCoreApplication::translate("Credit", "Interest charges", nullptr));
        monthly->setText(QCoreApplication::translate("Credit", "Monthly payment", nullptr));
        term->setText(QCoreApplication::translate("Credit", "Credit term", nullptr));
        input_amount->setPlaceholderText(QCoreApplication::translate("Credit", "1000", nullptr));
        input_term->setPlaceholderText(QCoreApplication::translate("Credit", "12", nullptr));
        rate->setText(QCoreApplication::translate("Credit", "Interest rate", nullptr));
        amount->setText(QCoreApplication::translate("Credit", "Amount of credit", nullptr));
        input_rate->setPlaceholderText(QCoreApplication::translate("Credit", "0.5", nullptr));
        annuity->setText(QCoreApplication::translate("Credit", "Annuity", nullptr));
        diff->setText(QCoreApplication::translate("Credit", "Differentiated", nullptr));
        pushButton_calculate->setText(QCoreApplication::translate("Credit", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit: public Ui_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
