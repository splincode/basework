main.o: main.c
	gcc -c main.c

mylib.o: mylib/mylib.c
	gcc -c mylib/mylib.c

hello: main.o mylib/mylib.o
	gcc -o hello main.o mylib/mylib.o
	rm -rf *.o mylib/*.o

all: hello