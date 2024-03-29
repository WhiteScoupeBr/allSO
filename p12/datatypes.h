// PingPongOS - PingPong Operating System
// Prof. Carlos A. Maziero, DAINF UTFPR
// Versão 1.0 -- Março de 2015
//
// Estruturas de dados internas do sistema operacional

#ifndef __DATATYPES__
#define __DATATYPES__
#include <ucontext.h>


// Estrutura que define uma tarefa
typedef struct task_t
{
  struct task_t *prev,*next;  // para usar com a biblioteca de filas (cast)
  int tid ;                    // ID da tarefa
  ucontext_t context;
  void *args;
  int state;
  int prio;
  int prioD;
  int quantum;
  int flag;
  unsigned int tsono,execTime, processTime;
  int activs;  
  // preencher quando necessário
} task_t ;

// estrutura que define um semáforo
typedef struct
{
  int value;
  task_t *task;
  int d;
} semaphore_t ;

// estrutura que define um mutex
typedef struct
{
  // preencher quando necessário
} mutex_t ;

// estrutura que define uma barreira
typedef struct
{
   int N;
   task_t* task;
   int ntask;
} barrier_t ;

// estrutura que define uma fila de mensagens
typedef struct 
{
  int max;
  int count;
  int size;
  void * alocar;
  semaphore_t colocar;
  semaphore_t tirar;
  int final;
  int start;
  int d;
} mqueue_t ;

#endif
