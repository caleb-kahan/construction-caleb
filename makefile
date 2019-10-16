all: construction.o
	gcc -o program construction.o

construction.o: construction.c
	gcc -c construction.c

run:
	./program

clean:
	rm *.o
	rm *~
