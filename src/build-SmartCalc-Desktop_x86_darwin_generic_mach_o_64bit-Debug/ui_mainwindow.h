/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_C;
    QPushButton *pushButton_sign;
    QPushButton *pushButton_div;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_nlog;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_9;
    QPushButton *pushButton_log;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_6;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_Rbracket;
    QPushButton *pushButton_3;
    QPushButton *pushButton_sqwrt;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_sum;
    QPushButton *pushButton_LBracket;
    QPushButton *pushButton_const;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_0;
    QPushButton *pushButton_result;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_credit;
    QPushButton *pushButton_print;
    QPushButton *pushButton_18;
    QCustomPlot *widget;
    QLineEdit *lineEdit_xBegin;
    QLineEdit *lineEdit_xEnd;
    QLineEdit *lineEdit_step;
    QLineEdit *lineEdit_xMin;
    QLineEdit *lineEdit_xMax;
    QLineEdit *lineEdit_yMin;
    QLineEdit *lineEdit_yMax;
    QLineEdit *lineEdit_value;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 0, 700, 100));
        lineEdit->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"background-color: white;"));
        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setGeometry(QRect(0, 100, 100, 50));
        pushButton_AC->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_C = new QPushButton(centralwidget);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        pushButton_C->setGeometry(QRect(100, 100, 100, 50));
        pushButton_C->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_sign = new QPushButton(centralwidget);
        pushButton_sign->setObjectName(QString::fromUtf8("pushButton_sign"));
        pushButton_sign->setGeometry(QRect(200, 100, 100, 50));
        pushButton_sign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(300, 100, 100, 50));
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: qlineargfradient(x1: 0, y1: 0, x2: 0, y2:1,\n"
"								stop: 0 #FF78312, stop: 1 #FF9739);\n"
"}"));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(400, 100, 100, 50));
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(500, 100, 100, 50));
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_nlog = new QPushButton(centralwidget);
        pushButton_nlog->setObjectName(QString::fromUtf8("pushButton_nlog"));
        pushButton_nlog->setGeometry(QRect(600, 100, 100, 50));
        pushButton_nlog->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(500, 150, 100, 50));
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(200, 150, 100, 50));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(600, 150, 100, 50));
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(100, 150, 100, 50));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 150, 100, 50));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_mul = new QPushButton(centralwidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(300, 150, 100, 50));
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: qlineargfradient(x1: 0, y1: 0, x2: 0, y2:1,\n"
"								stop: 0 #FF78312, stop: 1 #FF9739);\n"
"}"));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(400, 150, 100, 50));
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(500, 200, 100, 50));
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(200, 200, 100, 50));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_pow = new QPushButton(centralwidget);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(600, 200, 100, 50));
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(100, 200, 100, 50));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 200, 100, 50));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_sub = new QPushButton(centralwidget);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        pushButton_sub->setGeometry(QRect(300, 200, 100, 50));
        pushButton_sub->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: qlineargfradient(x1: 0, y1: 0, x2: 0, y2:1,\n"
"								stop: 0 #FF78312, stop: 1 #FF9739);\n"
"}"));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(400, 200, 100, 50));
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_Rbracket = new QPushButton(centralwidget);
        pushButton_Rbracket->setObjectName(QString::fromUtf8("pushButton_Rbracket"));
        pushButton_Rbracket->setGeometry(QRect(500, 250, 100, 50));
        pushButton_Rbracket->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 250, 100, 50));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_sqwrt = new QPushButton(centralwidget);
        pushButton_sqwrt->setObjectName(QString::fromUtf8("pushButton_sqwrt"));
        pushButton_sqwrt->setGeometry(QRect(600, 250, 100, 50));
        pushButton_sqwrt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 250, 100, 50));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 250, 100, 50));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_sum = new QPushButton(centralwidget);
        pushButton_sum->setObjectName(QString::fromUtf8("pushButton_sum"));
        pushButton_sum->setGeometry(QRect(300, 250, 100, 50));
        pushButton_sum->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: qlineargfradient(x1: 0, y1: 0, x2: 0, y2:1,\n"
"								stop: 0 #FF78312, stop: 1 #FF9739);\n"
"}"));
        pushButton_LBracket = new QPushButton(centralwidget);
        pushButton_LBracket->setObjectName(QString::fromUtf8("pushButton_LBracket"));
        pushButton_LBracket->setGeometry(QRect(400, 250, 100, 50));
        pushButton_LBracket->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_const = new QPushButton(centralwidget);
        pushButton_const->setObjectName(QString::fromUtf8("pushButton_const"));
        pushButton_const->setGeometry(QRect(500, 300, 100, 50));
        pushButton_const->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(200, 300, 100, 50));
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(0, 300, 200, 50));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_result = new QPushButton(centralwidget);
        pushButton_result->setObjectName(QString::fromUtf8("pushButton_result"));
        pushButton_result->setGeometry(QRect(300, 300, 100, 50));
        pushButton_result->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 151, 57);\n"
"color: white;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: qlineargfradient(x1: 0, y1: 0, x2: 0, y2:1,\n"
"								stop: 0 #FF78312, stop: 1 #FF9739);\n"
"}"));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(400, 300, 100, 50));
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
""));
        pushButton_credit = new QPushButton(centralwidget);
        pushButton_credit->setObjectName(QString::fromUtf8("pushButton_credit"));
        pushButton_credit->setGeometry(QRect(700, 0, 100, 133));
        pushButton_print = new QPushButton(centralwidget);
        pushButton_print->setObjectName(QString::fromUtf8("pushButton_print"));
        pushButton_print->setGeometry(QRect(700, 266, 100, 133));
        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(700, 133, 100, 133));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(800, 0, 450, 400));
        lineEdit_xBegin = new QLineEdit(centralwidget);
        lineEdit_xBegin->setObjectName(QString::fromUtf8("lineEdit_xBegin"));
        lineEdit_xBegin->setGeometry(QRect(0, 350, 100, 50));
        lineEdit_xEnd = new QLineEdit(centralwidget);
        lineEdit_xEnd->setObjectName(QString::fromUtf8("lineEdit_xEnd"));
        lineEdit_xEnd->setGeometry(QRect(100, 350, 100, 50));
        lineEdit_step = new QLineEdit(centralwidget);
        lineEdit_step->setObjectName(QString::fromUtf8("lineEdit_step"));
        lineEdit_step->setGeometry(QRect(200, 350, 100, 50));
        lineEdit_xMin = new QLineEdit(centralwidget);
        lineEdit_xMin->setObjectName(QString::fromUtf8("lineEdit_xMin"));
        lineEdit_xMin->setGeometry(QRect(300, 350, 100, 50));
        lineEdit_xMax = new QLineEdit(centralwidget);
        lineEdit_xMax->setObjectName(QString::fromUtf8("lineEdit_xMax"));
        lineEdit_xMax->setGeometry(QRect(400, 350, 100, 50));
        lineEdit_yMin = new QLineEdit(centralwidget);
        lineEdit_yMin->setObjectName(QString::fromUtf8("lineEdit_yMin"));
        lineEdit_yMin->setGeometry(QRect(500, 350, 100, 50));
        lineEdit_yMax = new QLineEdit(centralwidget);
        lineEdit_yMax->setObjectName(QString::fromUtf8("lineEdit_yMax"));
        lineEdit_yMax->setGeometry(QRect(600, 350, 100, 50));
        lineEdit_value = new QLineEdit(centralwidget);
        lineEdit_value->setObjectName(QString::fromUtf8("lineEdit_value"));
        lineEdit_value->setGeometry(QRect(600, 300, 100, 50));
        lineEdit_value->setStyleSheet(QString::fromUtf8("QLabel {\n"
"qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"background-color: white;"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit->setText(QString());
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_C->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_sign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_nlog->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_Rbracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_sqwrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_LBracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_const->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_result->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_mod->setProperty("Text", QVariant(QCoreApplication::translate("MainWindow", "%", nullptr)));
        pushButton_credit->setText(QCoreApplication::translate("MainWindow", "Credit", nullptr));
        pushButton_print->setText(QCoreApplication::translate("MainWindow", "print", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        lineEdit_xBegin->setPlaceholderText(QCoreApplication::translate("MainWindow", "xBegin", nullptr));
        lineEdit_xEnd->setPlaceholderText(QCoreApplication::translate("MainWindow", "xEnd", nullptr));
        lineEdit_step->setPlaceholderText(QCoreApplication::translate("MainWindow", "step", nullptr));
        lineEdit_xMin->setPlaceholderText(QCoreApplication::translate("MainWindow", "xMin", nullptr));
        lineEdit_xMax->setPlaceholderText(QCoreApplication::translate("MainWindow", "xMax", nullptr));
        lineEdit_yMin->setPlaceholderText(QCoreApplication::translate("MainWindow", "yMin", nullptr));
        lineEdit_yMax->setPlaceholderText(QCoreApplication::translate("MainWindow", "yMax", nullptr));
        lineEdit_value->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
