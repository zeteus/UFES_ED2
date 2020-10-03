all: cliente

cliente: cliente_sort.o helloWorld.o
	gcc -o cliente cliente_sort.o helloWorld.o

cliente_sort.o: cliente_sort.c helloWorld.h
	gcc -o cliente_sort.o cliente_sort.c -c -W -Wall -ansi -pedantic

helloWorld.o: helloWorld.c helloWorld.h
	gcc -o helloWorld.o helloWorld.c -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o *~ cliente