all: programa

programa: main.o funcoes.o
	gcc main.o funcoes.o -o programa 

main.o: main.c funcoes.h
	gcc -c main.c -o main.o -W -Wall -ansi -pedantic

funcoes.o: funcoes.c funcoes.h
	gcc -c funcoes.c -o funcoes.o -W -Wall -ansi -pedantic

clean:
	rm -rf *.o *~ programa