QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../SmartCalc/main.cpp \
    ../SmartCalc/mainwindow.cpp \
    ../Lib/s21_SmartCalc_v1_0.c \
    ../SmartCalc/qcustomplot.cpp \
    ../SmartCalc/credit.cpp \
    ../Lib/s21_credit.c \
    ../SmartCalc/deposit.cpp \
    ../Lib/s21_deposit.c \

HEADERS += \
    ../Lib/s21_SmartCalc_v1_0.h \
    ../SmartCalc/mainwindow.h \
    ../SmartCalc/qcustomplot.h \
    ../SmartCalc/credit.h \
    ../Lib/s21_credit.h \
    ../SmartCalc/deposit.h \
    ../Lib/s21_deposit.h \

FORMS += \
    ../SmartCalc/mainwindow.ui \
    ../SmartCalc/credit.ui \
    ../SmartCalc/deposit.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
