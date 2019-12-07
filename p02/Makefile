all: p02-1 p02-2 p02-3

p02-1: pingpong.o pingpong-tasks1.o
	gcc -o p02-1 pingpong.o pingpong-tasks1.o

p02-2: pingpong.o pingpong-tasks2.o
	gcc -o p02-2 pingpong.o pingpong-tasks2.o

p02-3: pingpong.o pingpong-tasks3.o
	gcc -o p02-3 pingpong.o pingpong-tasks3.o

pingpong.o: pingpong.c
	gcc -o pingpong.o -c pingpong.c 

pingpong-tasks1.o: pingpong-tasks1.c
	gcc -o pingpong-tasks1.o -c pingpong-tasks1.c 

pingpong-tasks2.o: pingpong-tasks2.c
	gcc -o pingpong-tasks2.o -c pingpong-tasks2.c

pingpong-tasks3.o: pingpong-tasks3.c
	gcc -o pingpong-tasks3.o -c pingpong-tasks3.c

clean: 
	rm -f *.o
	rm -f p02-1
	rm -f p02-2
	rm -f p02-3

