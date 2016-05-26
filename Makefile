INCLUDE=-I ./thirdparty ./src

all: bin/main bin/test

bin/main: obj/main.o obj/unitcon.o
	mkdir bin
	gcc -o bin/main obj/main.o obj/unitcon.o  -Wall -lm

obj/main.o: src/main.c
	mkdir obj
	gcc -c src/main.c -Wall -o obj/main.o 

obj/fun.o: src/unitcon.c
	gcc -c src/unitcon.c -Wall -o obj/unitcon.o

.PHONY: clean
clean:
	rm -f -r bin/ obj/
