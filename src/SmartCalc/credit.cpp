#include "credit.h"

#include "mainwindow.h"
#include "ui_credit.h"

Credit::Credit(QWidget *parent) : QMainWindow{parent}, ui(new Ui::Credit) {
  ui->setupUi(this);
}

Credit::~Credit() { delete ui; }

void Credit::on_pushButton_calculate_clicked() {
  QString str_amount = ui->input_amount->text();
  double amount = str_amount.toDouble();
  amount = fabs(amount);
  QString str_rate = ui->input_rate->text();
  double rate = str_rate.toDouble();
  rate = fabs(rate);
  QString str_term = ui->input_term->text();
  double term = str_term.toDouble();
  term = fabs(term);
  t_loan loan;

  if (ui->annuity->isChecked()) {
    memset(&loan, 0, sizeof(t_loan));
    loan.amount = amount;
    loan.rate = rate;
    loan.term = term;
    loan.type = ANNUITY;

    out_loan out = check_loan_type(loan);
    QString p_resMonthlyPayment =
        QString::number(out.monthly_payments[0], 'g', 6);
    QString p_overpayment = QString::number(out.overpayment, 'g', 6);
    QString p_totalAmount = QString::number(out.total, 'g', 6);

    ui->input_monthly->setText(p_resMonthlyPayment);
    ui->input_interest->setText(p_overpayment);
    ui->input_duty->setText(p_totalAmount);
  } else {
    memset(&loan, 0, sizeof(t_loan));
    loan.amount = amount;
    loan.rate = rate;
    loan.term = term;
    loan.type = DIFFERENTIATED;

    out_loan out = check_loan_type(loan);
    QString p_resMonthlyPayment =
        QString::number(out.monthly_payments[0], 'g', 6);
    QString p_resMonthlyPaymentEND =
        QString::number(out.monthly_payments[loan.term - 1], 'g', 6);
    QString p_overpayment = QString::number(out.overpayment, 'g', 6);
    QString p_totalAmount = QString::number(out.total, 'g', 6);

    ui->input_monthly->setText(p_resMonthlyPayment + '-' +
                               p_resMonthlyPaymentEND);
    ui->input_interest->setText(p_overpayment);
    ui->input_duty->setText(p_totalAmount);
  }
}
