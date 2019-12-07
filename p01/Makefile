all: p01


p01: contexts.o
	gcc -o p01 contexts.o


contexts.o: contexts.c
	gcc -o contexts.o -c contexts.c 


clean: 
	rm -f *.o
	rm -f p01


