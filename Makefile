INCLUDE= -I ./thirdparty 
INCLUDE2= -I ./src
all: bin/main bin/test

bin/main: obj/main.o obj/unitcon.o
	gcc -o bin/main obj/main.o obj/unitcon.o  -Wall -lm

bin/test: obj/main_test.o obj/unitcon_test.o
	gcc -o bin/test obj/main_test.o obj/unitcon_test.o obj/unitcon.o -Wall -lm

test:	bin/test
	cd bin && ./test && cd ..

obj/main.o: src/main.c
	mkdir obj
	gcc -c src/main.c -Wall -o obj/main.o 

obj/unitcon.o: src/unitcon.c
	gcc -c src/unitcon.c -Wall -o obj/unitcon.o
 
obj/main_test.o: test/main_test.c
	gcc $(INCLUDE) -c test/main_test.c -Wall -o obj/main_test.o 

obj/unitcon_test.o: test/unitcon_test.c
	gcc $(INCLUDE) $(INCLUDE2) -c test/unitcon_test.c -Wall -o obj/unitcon_test.o

.PHONY: clean
clean:
	rm -f -r bin/main bin/test obj/
