all: p03

p03: pingpong.o pingpong-dispatcher.o queue.o
	gcc -o p03 pingpong.o pingpong-dispatcher.o queue.o

pingpong.o: pingpong.c
	gcc -o pingpong.o -c pingpong.c 

pingpong-dispatcher.o: pingpong-dispatcher.c
	gcc -o pingpong-dispatcher.o -c pingpong-dispatcher.c 

queue.o: queue.c
	gcc -o queue.o -c queue.c

clean: 
	rm -f *.o
	rm -f p03

