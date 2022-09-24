#include<stdio.h>
#include"libpilha.h"

#define N 10  /* tamanho maximo da pilha, esta em 10 para testes da pilha */

int main(){

    int op = -1; int num;
    pilha_t* pilha = pilha_cria(N);
    
    printf("TESTE PILHA\n\n");
    while(op != 0){

    printf("Qual operacao deseja realizar?\n");
    printf("1-adicionar elemento\n");
    printf("2-remover elemento\n");
    printf("3-imprimir pilha atual\n");
    printf("4-mostra o ultimo elemento da pilha\n");
    printf("5-mostra a quantidade de elementos na pilha\n");
    printf("0-encerra o programa\n\n");
    scanf("%d" , &op);

        if(op == 1){
            
            printf("Qual numero voce deseja incluir na pilha?\n");
            scanf("%d" , &num);
            if(push(pilha, num) == -1){
                printf("A pilha está cheia!\n");
                printf("\n");
            }else{
                printf("O numero foi adicionado a pilha\n");
                printf("\n");
            }
        }
        else if(op == 2){
            
            if(pop(pilha) == 0){
                printf("A pilha está vazia!\n");
                printf("\n");
            }else{
            printf("O elemento %d foi retirado da pilha\n" , pilha_topo(pilha));
            printf("\n");
            }
        }
        else if(op == 3){
            
            if(pilha_vazia(pilha) == 1){
                printf("A pilha está vazia!\n");
                printf("\n");
            }else{
                pilha_imprime(pilha);
                printf("\n");
            }

        }
        else if(op == 4){

            if(pilha_vazia(pilha) == 1){
                printf("A pilha está vazia!\n");
                printf("\n");
            }else{
                printf("O ultimo elemento da pilha é o %d\n" , pilha->elems[pilha->topo-1]);
                printf("\n");
            }

        }
        else if(op == 5){

            printf("O número de elementos na pilha é %d\n" , pilha_tamanho(pilha));
            printf("\n");

        }
        else if(op == 0){
            printf("O programa foi encerrado!\n");
        }
        else{
            printf("Expressão inválida, digite uma operação válida!\n");
            printf("\n");
        }
    }
    
    pilha_destroi(pilha);
    return 0;
}