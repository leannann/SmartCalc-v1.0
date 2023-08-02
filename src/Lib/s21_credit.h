#ifndef LIB_S21_CREDIT_H
#define LIB_S21_CREDIT_H

#include <math.h>
#include <stdlib.h>
#include <string.h>

#define ANNUITY 0
#define DIFFERENTIATED 1

typedef struct t_loan {
  double amount;
  double rate;
  int term;
  int type;
} t_loan;

typedef struct out_loan {
  int err;
  char *message;
  double *monthly_payments;
  double overpayment;
  double total;
} out_loan;

out_loan check_loan_type(t_loan loan);
out_loan annuity(t_loan loan);
out_loan differentiated(t_loan loan);
char *init_loan(t_loan loan);

#endif  // LIB_s21_CREDIT_H