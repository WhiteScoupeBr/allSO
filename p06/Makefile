all: p06-1 p06-2

p06-1: pingpongP3.o pingpong-contab.o queue.o
	gcc -o p06-1 pingpongP3.o pingpong-contab.o queue.o

p06-2: pingpongP4.o pingpong-contab-prio.o queue.o
	gcc -o p06-2 pingpongP4.o pingpong-contab-prio.o queue.o

pingpongP3.o: pingpongP3.c
	gcc -o pingpongP3.o -c pingpongP3.c 

pingpongP4.o: pingpongP4.c 
	gcc -o pingpongP4.o -c pingpongP4.c 

pingpong-contab.o: pingpong-contab.c 
	gcc -o pingpong-contab.o -c pingpong-contab.c 

pingpong-contab-prio.o: pingpong-contab-prio.c 
	gcc -o pingpong-contab-prio.o -c pingpong-contab-prio.c

queue.o: queue.c
	gcc -o queue.o -c queue.c

clean: 
	rm -f *.o
	rm -f p06-1
	rm -f p06-2
