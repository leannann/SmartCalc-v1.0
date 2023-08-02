BD=build/
CC = gcc
FLAGS = -Wall -Werror -Wextra -std=c11
TST_LIBS = -lcheck
APP=$(BD)SmartCalc.app

all:

build: $(BD)SmartCalc.pro
	cp SmartCalc/qcustomplot.h build/qcustomplot.h
	cd $(BD); qmake SmartCalc.pro
	make -C $(BD)

./$(BD)SmartCalc.pro:
	mkdir build
	cp SmartCalc/SmartCalc.pro $(BD)

install: build
	mkdir Documentation
	mkdir $(HOME)/Applications/SmartCalc
	cp -rf $(APP) $(HOME)/Applications/SmartCalc/
	cp -rf Documentation $(HOME)/Applications/SmartCalc/
	make clean

uninstall:
	rm -rf $(HOME)/Applications/SmartCalc

dist:
	tar -zcvf $(HOME)/Applications/SmartCalc/Documentation/SmartCalc.tar $(HOME)/Applications/SmartCalc/SmartCalc.app/

dvi:
	cd DOXYGEN
	doxygen doc.pdf 

test:
	$(CC) $(FLAGS) Lib/test.c Lib/s21_SmartCalc_v1_0.c $(TST_LIBS) -o test
	./test

gcov_report:
	$(CC) $(FLAGS) --coverage Lib/test.c Lib/s21_SmartCalc_v1_0.c $(TST_LIBS) -o unit-test
	./unit-test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html

clean:
	rm -rf build
	rm -rf test report unit-test
	rm -rf *.gcda *.gcno *.info *.gch
	rm -rf Documentation