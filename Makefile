all: main

main: build/main.o build/deposit.o
	gcc -Wall -Werror -o bin/main build/deposit.o build/main.o
build/main.o: src/main.c
	gcc -Wall -Werror -c -o build/main.o src/main.c
build/deposit.o: src/deposit.c
	gcc -Wall -Werror -c -o build/deposit.o src/deposit.c
.PHONY: clean
clean:
	rm build/*.o
