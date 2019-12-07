all: p05

p05: pingpong.o pingpong-preempcao.o queue.o
	gcc -o p05 pingpong.o pingpong-preempcao.o queue.o

pingpong.o: pingpong.c
	gcc -o pingpong.o -c pingpong.c 

pingpong-preempcao.o: pingpong-preempcao.c
	gcc -o pingpong-preempcao.o -c pingpong-preempcao.c 

queue.o: queue.c
	gcc -o queue.o -c queue.c

clean: 
	rm -f *.o
	rm -f p05

