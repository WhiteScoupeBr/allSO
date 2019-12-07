#include <stdio.h>
#include <stdlib.h>
#include "pingpong.h"
#include <time.h>
#include <stdlib.h>

int item;
int buffer[5];
task_t p1,p2,p3,c1,c2;
semaphore_t s_buffer, s_item, s_vaga ;
 

 int bufferCheio(){
		if(buffer[5]!=-1){
			return 1;
		}
		else
		{
			return 0;
		}
	}

 int bufferVazio(){
		if(buffer[0]==-1){
			return 1;
		}
		else
		{
			return 0;
		}
	}

void produtor(void * arg)
{

int j=0;
 while (j!=5)
	{
	task_sleep (1);
	
	item = rand()%100;
	sem_down (&s_vaga);
	sem_down (&s_buffer);
	for(int i=0;i<5;i++){
		if(buffer[i]==-1){
			buffer[i]=item;
			break;
		}
	}
	sem_up (&s_buffer);
	sem_up (&s_item);
	printf ("%s produtor (%d)\n", (char *) arg, item) ;
	j++;
	}
	task_exit(0);
}


void consumidor(void * arg)
{

	int j=0;
  while(j!=4)
	{
	sem_down (&s_item);
	sem_down (&s_buffer);
	if(buffer[0]!=-1){
		for(int i=0;i<4;i++){
			buffer[i]=buffer[i+1];
		}
		buffer[5]=-1;
	}
	sem_up (&s_buffer);
	sem_up (&s_vaga);
	printf ("%s consumidor (%d)\n", (char *) arg, item) ;
	task_sleep (1);
	j++;
	}

	task_exit(0);
}

int main(int argc, char *argv[]){


	printf ("Main INICIO\n") ;

	srand(time(NULL)); 
	for(int i=0;i<5;i++){
		buffer[i]=-1;
		//printf("%d", buffer[i]);
	}
	pingpong_init();

	sem_create (&s_item, 5) ;
	sem_create (&s_vaga, 5) ;
	sem_create (&s_buffer, 5) ;
	task_create (&p1, produtor, "p1") ;
  	task_create (&p2, produtor, "p2") ;
    task_create (&p3, produtor, "p3") ;
    task_create (&c1, consumidor, "c1") ;
	task_create (&c2, consumidor, "c2") ;
	task_join(&p1);
	task_join(&p2);
	task_join(&p3);
	task_join(&c1);
	task_join(&c2);
	
	
	printf ("Main FIM\n") ;
   	task_exit (0) ;

  	 exit (0) ;

}

