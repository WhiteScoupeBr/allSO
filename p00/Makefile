all: p00


p00: testafila.o queue.o 
	gcc -o p00 testafila.o queue.o 


testafila.o: testafila.c
	gcc -o testafila.o -c testafila.c 


queue.o: queue.c
	gcc -o queue.o -c queue.c


clean: 
	rm -f *.o
	rm -f p00


