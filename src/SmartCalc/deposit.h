#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <QMainWindow>

namespace Ui {
class Deposit;
}

class Deposit : public QMainWindow {
  Q_OBJECT

 public:
  explicit Deposit(QWidget *parent = nullptr);
  ~Deposit();

  int flag = 0;
  double periodicity = 0.;

 private slots:
  void on_calculate_clicked();

  void on_flag_clicked(bool checked);

  void on_dropdown_replemishment_activated(int index);

  void on_dropdown_withdraw_activated(int index);

 private:
  Ui::Deposit *ui;
};

#endif  // DEPOSIT_H
