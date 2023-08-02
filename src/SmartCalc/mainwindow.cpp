#include "mainwindow.h"

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::concat(QString str) {
  QString text = ui->lineEdit->text();

  if (static_cast<int>(text.length()) == 1 &&
      *text.toLocal8Bit().constData() == '0' &&
      *str.toLocal8Bit().constData() != '.')
    ui->lineEdit->clear();

  ui->lineEdit->setText(ui->lineEdit->text() + str);
}

void MainWindow::on_pushButton_0_clicked() { MainWindow::concat("0"); }

void MainWindow::on_pushButton_1_clicked() { MainWindow::concat("1"); }

void MainWindow::on_pushButton_2_clicked() { MainWindow::concat("2"); }

void MainWindow::on_pushButton_3_clicked() { MainWindow::concat("3"); }

void MainWindow::on_pushButton_4_clicked() { MainWindow::concat("4"); }

void MainWindow::on_pushButton_5_clicked() { MainWindow::concat("5"); }

void MainWindow::on_pushButton_6_clicked() { MainWindow::concat("6"); }

void MainWindow::on_pushButton_7_clicked() { MainWindow::concat("7"); }

void MainWindow::on_pushButton_8_clicked() { MainWindow::concat("8"); }

void MainWindow::on_pushButton_9_clicked() { MainWindow::concat("9"); }

void MainWindow::on_pushButton_dot_clicked() { MainWindow::concat("."); }

void MainWindow::on_pushButton_div_clicked() { MainWindow::concat("/"); }

void MainWindow::on_pushButton_mul_clicked() { MainWindow::concat("*"); }

void MainWindow::on_pushButton_sub_clicked() { MainWindow::concat("-"); }

void MainWindow::on_pushButton_sum_clicked() { MainWindow::concat("+"); }

void MainWindow::on_pushButton_sin_clicked() { MainWindow::concat("sin"); }

void MainWindow::on_pushButton_cos_clicked() { MainWindow::concat("cos"); }

void MainWindow::on_pushButton_tan_clicked() { MainWindow::concat("tan"); }

void MainWindow::on_pushButton_asin_clicked() { MainWindow::concat("asin"); }

void MainWindow::on_pushButton_acos_clicked() { MainWindow::concat("acos"); }

void MainWindow::on_pushButton_atan_clicked() { MainWindow::concat("atan"); }

void MainWindow::on_pushButton_LBracket_clicked() { MainWindow::concat("("); }

void MainWindow::on_pushButton_Rbracket_clicked() { MainWindow::concat(")"); }

void MainWindow::on_pushButton_mod_clicked() { MainWindow::concat("%"); }

void MainWindow::on_pushButton_const_clicked() { MainWindow::concat("x"); }

void MainWindow::on_pushButton_nlog_clicked() { MainWindow::concat("ln"); }

void MainWindow::on_pushButton_log_clicked() { MainWindow::concat("log"); }

void MainWindow::on_pushButton_pow_clicked() { MainWindow::concat("^"); }

void MainWindow::on_pushButton_sqwrt_clicked() { MainWindow::concat("sqrt"); }

void MainWindow::on_pushButton_C_clicked() { ui->lineEdit->clear(); }

void MainWindow::on_pushButton_AC_clicked() {
  QString s = ui->lineEdit->text();

  if (s.length() > 0) {
    QString newtext = s.remove(s.length() - 1, 1);
    ui->lineEdit->setText(newtext);
  }
}

void MainWindow::on_pushButton_sign_clicked() {
  double res = 0.;
  QString tmp;
  if (ui->pushButton_sign->text() == "+/-") {
    res = (ui->lineEdit->text()).toDouble();
    res *= -1;
    tmp = QString::number(res, 'g', 15);
  }
  ui->lineEdit->setText(tmp);
}

void MainWindow::on_pushButton_result_clicked() {
  std::string str = ui->lineEdit->text().toStdString();
  char *ptr = &str[0];
  int error = 0;
  QString str_x = ui->lineEdit_value->text();
  double x = str_x.toDouble();
  char *polish = reverse_not(ptr, &error);

  if (error == 0) {
    double res = calculation(polish, &x);
    QString p = QString::number(res);
    ui->lineEdit->setText(p);
  } else
    ui->lineEdit->setText("ERROR!");
}

void MainWindow::on_pushButton_print_clicked() {
  ui->widget->clearGraphs();
  x.clear();
  y.clear();

  QString str_xBegin = ui->lineEdit_xBegin->text();
  QString str_xEnd = ui->lineEdit_xEnd->text();
  QString str_step = ui->lineEdit_step->text();

  double xStart = str_xBegin.toDouble();
  double xEnd = str_xEnd.toDouble();
  double step = str_step.toDouble();

  QString str_xMax = ui->lineEdit_xMax->text();
  QString str_xMin = ui->lineEdit_xMin->text();

  double xMax = str_xMax.toDouble();
  double xMin = str_xMin.toDouble();

  QString str_yMax = ui->lineEdit_yMax->text();
  QString str_yMin = ui->lineEdit_yMin->text();

  double yMax = str_yMax.toDouble();
  double yMin = str_yMin.toDouble();

  ui->widget->xAxis->setRange(xMin, xMax);
  ui->widget->yAxis->setRange(yMin, yMax);

  std::string str = ui->lineEdit->text().toStdString();
  char *ptr = &str[0];
  int error = 0;

  for (double tmp = xStart; tmp <= xEnd; tmp += step) {
    char *polish = reverse_not(ptr, &error);
    x.push_back(tmp);
    y.push_back(calculation(polish, &tmp));
  }

  ui->widget->addGraph();
  ui->widget->graph(0)->addData(x, y);
  ui->widget->replot();
}

void MainWindow::on_pushButton_credit_clicked() {
  credit = new Credit(this);
  credit->show();
}

void MainWindow::on_pushButton_18_clicked() {
  deposit = new Deposit(this);
  deposit->show();
}
