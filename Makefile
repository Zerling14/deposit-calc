all: bin/main

test: bin/main_test

bin/main: build/src/main.o build/src/deposit.o
	mkdir bin -p
	gcc -Wall build/src/deposit.o build/src/main.o -o bin/main

build/src/main.o: src/main.c
	mkdir build -p
	mkdir build/src -p
	gcc -Wall -c -o build/src/main.o src/main.c	

build/src/deposit.o: src/deposit.c
	mkdir build -p
	mkdir build/src -p
	gcc -Wall -c -o build/src/deposit.o src/deposit.c

bin/main_test: build/test/deposit_test.o build/test/main.o build/src/deposit.o build/src/validation_test.o
	mkdir bin -p
	gcc -I thirdparty -I src -Wall build/test/deposit_test.o build/test/main.o build/src/deposit.o build/src/validation_test.o -o bin/main_test

build/test/main.o: test/main.c
	mkdir build -p
	mkdir build/test -p
	gcc -I thirdparty -I src -Wall -c test/main.c -o build/test/main.o
	
build/test/deposit_test.o: test/deposit_test.c
	mkdir build -p
	mkdir build/test -p
	gcc -I thirdparty -I src -Wall -c test/deposit_test.c -o build/test/deposit_test.o

build/src/validation_test.o: test/validation_test.c
	mkdir build -p
	mkdir build/test -p
	gcc -I thirdparty -I src -Wall -c test/validation_test.c -o build/src/validation_test.o
	
.PHONY: clean
clean:
	rm build/* -rf
	rm bin/* -rf
