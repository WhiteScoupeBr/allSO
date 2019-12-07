all: p04

p04: pingpong.o pingpong-scheduler.o queue.o
	gcc -o p04 pingpong.o pingpong-scheduler.o queue.o

pingpong.o: pingpong.c
	gcc -o pingpong.o -c pingpong.c 

pingpong-scheduler.o: pingpong-scheduler.c
	gcc -o pingpong-scheduler.o -c pingpong-scheduler.c 

queue.o: queue.c
	gcc -o queue.o -c queue.c

clean: 
	rm -f *.o
	rm -f p04

