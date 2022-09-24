#include<stdio.h>
#include"libfila.h"

#define N 10

int main(){

    int op = -1; int num; int retirado = 0;
    fila_t* fila = fila_cria();
    
    printf("TESTE FILA\n\n");
    while(op != 0){

    printf("Qual operacao deseja realizar?\n");
    printf("1-adicionar elemento\n");
    printf("2-remover elemento\n");
    printf("3-imprimir fila\n");
    printf("4-mostra o ultimo elemento da fila\n");
    printf("5-mostra a quantidade de elementos da fila\n");
    printf("0-encerra o programa\n\n");
    scanf("%d" , &op);

        if(op == 1){
            
            printf("Qual numero voce deseja incluir na fila?\n");
            scanf("%d" , &num);
            if(queue(fila, num) == -1){
                printf("A fila está cheia!\n");
                printf("\n");
            }else{
                printf("O numero foi adicionado a fila\n");
                printf("\n");
            }
        }
        else if(op == 2){
            
            if(dequeue(fila, &retirado) == 0){
                printf("A fila está vazia!\n");
                printf("\n");
            }else{
            printf("O elemento %d foi retirado da fila\n" , retirado);
            printf("\n");
            }
        }
        else if(op == 3){
            
            if(fila_vazia(fila) == 1){
                printf("A fila está vazia!\n");
                printf("\n");
            }else{
                fila_imprime(fila);
                printf("\n");
            }

        }
        else if(op == 4){

            if(fila_vazia(fila) == 1){
                printf("A fila está vazia!\n");
                printf("\n");
            }else{
                printf("O ultimo elemento da fila é o %d\n" , fila->fim->chave);
                printf("\n");
            }

        }
        else if(op == 5){

            printf("O número de elementos na fila é %d\n" , fila_tamanho(fila));
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
    
    fila_destroi(fila);
    return 0;
}