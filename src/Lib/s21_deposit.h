#ifndef LIB_S21_DEPOSIT_H
#define LIB_S21_DEPOSIT_H

#include "math.h"

void deposit(double *deposit_amount, double *period, double *rate,
             double *tax_rate, double *accrueds, double *deposit_end,
             double *tax_amount, int *capital_flag, double *replenishment,
             double *withdrawals, double *periodicity);

void check_periodicity(double *period, double *periodicity, int *count);

void capital(double *period, double *deposit_end, double *accrueds,
             double *replenishment, double *un_replenishment, double *rate,
             double *tmp, double *tmp_1, int *count);

void without_capital(double *period, double *deposit_end, double *accrueds,
                     double *replenishment, double *un_replenishment,
                     double *rate, double *tmp, double *tmp_1, int *count);

#endif  // LIB_S21_CREDIT_H
