#include "deposit.h"

#include "mainwindow.h"
#include "ui_deposit.h"

Deposit::Deposit(QWidget *parent) : QMainWindow(parent), ui(new Ui::Deposit) {
  ui->setupUi(this);
}

Deposit::~Deposit() { delete ui; }

void Deposit::on_flag_clicked(bool checked) {
  if (checked)
    flag = 1;
  else
    flag = 0;
}

void Deposit::on_calculate_clicked() {
  QString str_deposit = ui->input_deposit->text();
  double deposit_amount = str_deposit.toDouble();
  QString str_period = ui->input_period->text();
  double period = str_period.toDouble();
  QString str_rate = ui->input_rate->text();
  double rate = str_rate.toDouble();
  QString str_replenishment = ui->input_replenishment->text();
  double replenishment = str_replenishment.toDouble();
  QString str_unreplenishment = ui->input_withdraw->text();
  double withdrawals = str_unreplenishment.toDouble();
  QString str_taxrate = ui->input_taxrate->text();
  double tax_rate = str_taxrate.toDouble();

  double accrueds = 0;
  double depositEnd = 0;
  double tax_amount = 0.;

  deposit(&deposit_amount, &period, &rate, &tax_rate, &accrueds, &depositEnd,
          &tax_amount, &flag, &replenishment, &withdrawals, &periodicity);

  QString p_outputCharges = QString::number(accrueds, 'g', 6);
  QString p_depositEnd = QString::number(depositEnd, 'g', 6);
  QString p_taxAmount = QString::number(tax_amount, 'g', 6);

  ui->input_percent->setText(p_outputCharges);
  ui->input_depositEnd->setText(p_depositEnd);
  ui->input_tax->setText(p_taxAmount);
}

void Deposit::on_dropdown_replemishment_activated(int index) {
  if (index == 0) periodicity = 0;
  if (index == 1) periodicity = 1;
  if (index == 2) periodicity = 3;
  if (index == 3) periodicity = 6;
  if (index == 4) periodicity = 12;
}

void Deposit::on_dropdown_withdraw_activated(int index) {
  if (index == 0) periodicity = 0;
  if (index == 1) periodicity = 1;
  if (index == 2) periodicity = 3;
  if (index == 3) periodicity = 6;
  if (index == 4) periodicity = 12;
}
