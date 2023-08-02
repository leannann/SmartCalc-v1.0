#include "s21_credit.h"

out_loan check_loan_type(t_loan loan) {
  return loan.type == ANNUITY ? annuity(loan) : differentiated(loan);
}

out_loan annuity(t_loan loan) {
  out_loan out_l;

  char *error = init_loan(loan);

  if (error)
    out_l.message = error;
  else {
    double _amount = loan.amount;
    double _rate = loan.rate;
    double _rate_per_month = _rate / 1200;
    double _term = loan.term;
    double _rate_months = pow((1 + _rate_per_month), _term);
    double _coefficient = (_rate_per_month * _rate_months) / (_rate_months - 1);
    double _payment = _coefficient * _amount;

    out_l.total = _payment * _term;
    out_l.overpayment = out_l.total - _amount;
    out_l.monthly_payments = malloc(sizeof(double) * _term);

    for (int i = 0; i < _term; ++i) out_l.monthly_payments[i] = _payment;
  }
  return out_l;
}

out_loan differentiated(t_loan loan) {
  out_loan out_l;

  double _amount = loan.amount;
  double _rate = loan.rate;
  double _rate_per_month = _rate / 1200;
  double _term = loan.term;
  double _balance = _amount;
  double _amount_per_month = _amount / _term;

  out_l.monthly_payments = malloc(sizeof(double) * _term);

  for (int i = 0; i < _term; ++i) {
    out_l.monthly_payments[i] = _amount / _term + _balance * _rate_per_month;
    _balance -= _amount_per_month;
    out_l.total += out_l.monthly_payments[i];
  }
  out_l.overpayment = out_l.total - _amount;
  return out_l;
}

char *init_loan(t_loan loan) {
  char *message = NULL;

  if (loan.amount <= 0 || loan.term <= 0 || loan.rate <= 0) {
    if (loan.amount <= 0) message = "[1] Invalid credit amountd!";
    if (loan.rate <= 0) message = "[2] Invalid credit rate!";
    if (loan.term <= 0) message = "[3] Invalid credit term!";
  }
  return message;
}
