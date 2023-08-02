BD=../build/
СС=gcc -Wall -Weror -Wextra -std=c11
APP=$(BD)SmartCalc.app
MAN=./Documentation
TEST=test.c
SOURCE=../Lib/s21_SmartCalc_v1_0.c ../Lib/s21_credit.c ../Lib/s21_deposit.c
GCOVFLAGS=-fprofile-arcs -ftest-coverage -lgcov
TST_LIBS = -lcheck

OBJ = $(SOURCE:.c=.o) $(TEST)

ifeq (&(OS), Linux)
		FLAGS = -lcheck -lm -pthread -lrt -lsubunit
else
		FLAGS = -lcheck
endif


all: build install

s21_SmartCalc_v1_0.a:
	$(CC) $(FLAGS) $(SOURCE) -c
	ar rc s21_SmartCalc_v1_0.a *.o
	rm *.o

build: $(BD)SmartCalc.pro
	cp ../SmartCalc/qcustomplot.h ../build/qcustomplot.h
	cd $(BD); qmake SmartCalc.pro
	make -C $(BD)

./$(BD)SmartCalc.pro:
	cp SmartCalc.pro $(BD)

install: build
	mkdir $(HOME)/Applications/SmartCalc
	cp -rf $(APP) $(HOME)/Applications/SmartCalc/
	cp -rf $(MAN) $(HOME)/Applications/SmartCalc/
	make clean

uninstall:
	rm -rf $(HOME)/Applications/SmartCalc

dist:
	tar -zcvf $(HOME)/Applications/SmartCalc/Documentation/SmartCalc.tar $(HOME)/Applications/SmartCalc/SmartCalc.app/

dvi:
	doxygen doc.pdf

test:
	$(CC) $(SOURCE) $(TEST) -lcheck -o test
	./test

gcov_report:
	$(CC) --coverage $(TEST) $(SOURCE) $(TST_LIBS) -o unit-test
	./unit-test
	lcov -t "test" -o ../Make/test.info -c -d .
	genhtml -o report test.info
	open report/index.html

clean:
	rm -rf $(BD)*
	rm -rf *.o *.a *.gch *.gcno *.gcna *.gcda *.info *.out test test_html 


