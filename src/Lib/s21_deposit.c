#include "s21_deposit.h"

void deposit(double *deposit_amount, double *period, double *rate,
             double *tax_rate, double *accrueds, double *deposit_end,
             double *tax_amount, int *capital_flag, double *replenishment,
             double *withdrawals, double *periodicity) {
  int count = 0;
  double tmp = 0.;
  double tmp_1 = 0.;

  if (*capital_flag == 1 && *replenishment == 0 && *withdrawals == 0 &&
      *periodicity == 0) {
    *accrueds = *deposit_amount * *rate * (*period * 31 / 365) / 100;
    *deposit_end = *deposit_amount + *accrueds;
  }
  if (*capital_flag == 0 && *replenishment == 0 && *withdrawals == 0 &&
      *periodicity == 0) {
    *accrueds = *deposit_amount * *rate * (*period * 31 / 365) / 100;
    *deposit_end = *deposit_amount;
  }

  if (*capital_flag == 1 && *replenishment != 0 && *withdrawals == 0 &&
      *periodicity != 0) {
    *deposit_end = *deposit_amount;

    check_periodicity(period, periodicity, &count);

    capital(period, deposit_end, accrueds, replenishment, withdrawals, rate,
            &tmp, &tmp_1, &count);
  }
  if (*capital_flag == 0 && *replenishment != 0 && *withdrawals == 0 &&
      *periodicity != 0) {
    *deposit_end = *deposit_amount;

    check_periodicity(period, periodicity, &count);

    without_capital(period, deposit_end, accrueds, replenishment, withdrawals,
                    rate, &tmp, &tmp_1, &count);
  }

  if (*capital_flag == 1 && *replenishment == 0 && *withdrawals != 0 &&
      *periodicity != 0) {
    *deposit_end = *deposit_amount;
    check_periodicity(period, periodicity, &count);

    capital(period, deposit_end, accrueds, replenishment, withdrawals, rate,
            &tmp, &tmp_1, &count);
  } else if (*capital_flag == 0 && *replenishment == 0 && *withdrawals != 0 &&
             *periodicity != 0) {
    *deposit_end = *deposit_amount;

    check_periodicity(period, periodicity, &count);

    without_capital(period, deposit_end, accrueds, replenishment, withdrawals,
                    rate, &tmp, &tmp_1, &count);
  }
  if (*tax_rate > 0) *tax_amount = *accrueds * *tax_rate / 100;
}

void check_periodicity(double *period, double *periodicity, int *count) {
  if (*periodicity == 12) *count = roundl(*period / 12) * 10 / 100 * 10;

  if (*periodicity == 6) *count = roundl(*period / 6) * 10 / 100 * 10;

  if (*periodicity == 3) *count = roundl(*period / 3) * 10 / 100 * 10;

  if (*periodicity == 1) *count = roundl(*period / 1) * 10 / 100 * 10;
}

void capital(double *period, double *deposit_end, double *accrueds,
             double *replenishment, double *withdrawals, double *rate,
             double *tmp, double *tmp_1, int *count) {
  if (*replenishment != 0 && *withdrawals == 0)

    for (int j = 0; j < *period; ++j) {
      if ((*count == 1 || *count == 2) && j == 0)
        *deposit_end += *replenishment;

      if ((*count == 2 && j == 0) || (*count == 2 && j == 3))
        *deposit_end += *replenishment;

      if (*count == 6 && j <= 6) *deposit_end += *replenishment;

      *tmp = *deposit_end * (1 + *rate / 100);
      *tmp_1 = *tmp * *count + *deposit_end;
      *accrueds += *tmp;
      *deposit_end += *tmp;
    }

  if (*replenishment == 0 && *withdrawals != 0)

    for (int j = 0; j < *period; ++j) {
      if ((*count == 1 || *count == 2) && j == 0) *deposit_end -= *withdrawals;

      if ((*count == 2 && j == 0) || (*count == 2 && j == 3))
        *deposit_end -= *withdrawals;

      if (*count == 6 && j <= 6) *deposit_end -= *withdrawals;

      *tmp = *deposit_end * (1 + *rate / 100);
      *tmp_1 = *tmp * *count + *deposit_end;
      *accrueds += *tmp;
      *deposit_end += *tmp;
    }
}

void without_capital(double *period, double *deposit_end, double *accrueds,
                     double *replenishment, double *withdrawals, double *rate,
                     double *tmp, double *tmp_1, int *count) {
  if (*replenishment != 0 && *withdrawals == 0)

    for (int j = 0; j < *period; ++j) {
      if ((*count == 1 || *count == 2) && j == 0)
        *deposit_end += *replenishment;

      if ((*count == 2 && j == 0) || (*count == 2 && j == 3))
        *deposit_end += *replenishment;

      if (*count == 6 && j <= 6) *deposit_end += *replenishment;

      *tmp = *deposit_end * (1 + *rate / 100);
      *tmp_1 = *tmp * *count + *deposit_end;
      *accrueds += *tmp;
    }

  if (*replenishment == 0 && *withdrawals != 0)
    for (int j = 0; j < *period; ++j) {
      if ((*count == 1 || *count == 2) && j == 0) *deposit_end -= *withdrawals;

      if ((*count == 2 && j == 0) || (*count == 2 && j == 3))
        *deposit_end -= *withdrawals;

      if (*count == 6 && j <= 6) *deposit_end -= *withdrawals;

      *tmp = *deposit_end * (1 + *rate / 100);
      *tmp_1 = *tmp * *count + *deposit_end;
      *accrueds += *tmp;
    }
}