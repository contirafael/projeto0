#include <stdio.h>
#include "tarefas.h"

int main(){
  int pos = 0;
  Tarefa tarefas[TOTAL];


   int opcao;
   do{
     printf("\n Menu principal\n");
     printf("1 - criar tarefa\n");
     printf("2 - deletar tarefa\n");
     printf("3 - listar tarefa\n");
     printf("0 - sair\n");
     printf("entre com uma opcao:");
     scanf("%d", &opcao);
     printf("opcao escolhida: %d\n", opcao);
     
     }while(opcao !=0);
     
}  