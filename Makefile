all: bin/main

bin/main: build/src/main.o build/src/deposit.o
	mkdir bin -p
	gcc -Wall -Werror -o bin/main build/src/deposit.o build/src/main.o
build/src/main.d: src/main.c
	mkdir build -p
	gcc -Wall -Werror -c -o build/src/main.o src/main.c -MP -MMD
build/src/deposit.d: src/deposit.c
	mkdir build -p
	gcc -Wall -Werror -c -o build/src/deposit.o src/deposit.c -MP -MMD
test: bin/main_test

bin/main_test: build/test/main.o build/test/deposit_test.o
	mkdir bin -p
	gcc -I thirdparty src -Wall -Werror -o bin/main_test build/test/deposit_test.o build/test/main.o
build/test/main.d: test/main.c
	mkdir build -p
	mkdir build/src -p
	gcc -I thirdparty -I src -Wall -Werror -c -o build/src/main.o src/main.c -MP -MMD
build/test/deposit_test.d: test/deposit_test.c
	mkdir build -p
	mkdir build/test -p
	gcc -I thirdparty -I src -Wall -Werror -c -o build/test/deposit_test.o test/deposit_test.c -MP -MMD


.PHONY: clean
clean:
	rm build/* -rf
-include build/src/main.d
-include build/src/deposit.d
-include build/test/main.d
-include build/test/deposit_test.d
