#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>

#include "credit.h"
#include "deposit.h"
#include "qcustomplot.h"

extern "C" {
#include "../Lib/s21_SmartCalc_v1_0.h"
#include "../Lib/s21_credit.h"
#include "../Lib/s21_deposit.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private:
  Ui::MainWindow *ui;
  QVector<double> x, y;
  Credit *credit;
  Deposit *deposit;

 private slots:
  void concat(QString str);

  void on_pushButton_0_clicked();
  void on_pushButton_1_clicked();
  void on_pushButton_2_clicked();
  void on_pushButton_3_clicked();
  void on_pushButton_4_clicked();
  void on_pushButton_5_clicked();
  void on_pushButton_6_clicked();
  void on_pushButton_7_clicked();
  void on_pushButton_8_clicked();
  void on_pushButton_9_clicked();
  void on_pushButton_dot_clicked();
  void on_pushButton_div_clicked();
  void on_pushButton_mul_clicked();
  void on_pushButton_sub_clicked();
  void on_pushButton_sum_clicked();
  void on_pushButton_sin_clicked();
  void on_pushButton_cos_clicked();
  void on_pushButton_tan_clicked();
  void on_pushButton_asin_clicked();
  void on_pushButton_acos_clicked();
  void on_pushButton_atan_clicked();
  void on_pushButton_LBracket_clicked();
  void on_pushButton_Rbracket_clicked();
  void on_pushButton_mod_clicked();
  void on_pushButton_const_clicked();
  void on_pushButton_nlog_clicked();
  void on_pushButton_log_clicked();
  void on_pushButton_pow_clicked();
  void on_pushButton_sqwrt_clicked();
  void on_pushButton_C_clicked();
  void on_pushButton_AC_clicked();
  void on_pushButton_sign_clicked();
  void on_pushButton_result_clicked();
  void on_pushButton_print_clicked();
  void on_pushButton_credit_clicked();
  void on_pushButton_18_clicked();
};
#endif  // MAINWINDOW_H
