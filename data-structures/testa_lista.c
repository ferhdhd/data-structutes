#include<stdio.h>
#include"liblista.h"

#define N 10

int main(){

    int op = -1; int num; int retirado = 0;
    lista_t* lista = lista_cria();
    
    printf("TESTE LISTA\n");
    while(op != 0){

        printf("Qual operacao deseja realizar?\n");
        printf("1-adicionar elemento no inicio\n");
        printf("2-adicionar elemento no fim\n");
        printf("3-adicionar elemento ordenado (se a lista estiver ordenada)\n");
        printf("4-remover elemento no inicio\n");
        printf("5-remover elemento no fim\n");
        printf("6-remover elemento escolhido\n");
        printf("7-verificar se certo elemento pertence a lista\n");
        printf("8-imprimir lista\n");
        printf("9-imprimir o tamanho da lista\n");
        printf("0-encerrar programa\n\n");

        scanf("%d" , &op);

        if(op == 1){
            
            printf("Qual numero voce deseja incluir na lista?\n");
            scanf("%d" , &num);
            if(lista_insere_inicio(lista, num) == 0){
                printf("Erro de alocação de memória!\n");
                printf("\n");
            }else{
                printf("O numero foi adicionado a lista\n");
                printf("\n");
            }
        }
        else if(op == 2){
            
            printf("Qual numero voce deseja incluir na lista?\n");
            scanf("%d" , &num);
            if(lista_insere_fim(lista, num) == 0){
                printf("Erro de alocação de memória!\n");
                printf("\n");
            }else{
                printf("O numero foi adicionado a lista\n");
                printf("\n");
            }

        }
        else if(op == 3){
            
            printf("Qual numero voce deseja incluir na lista?\n");
            scanf("%d" , &num);
            if(lista_insere_ordenado(lista, num) == 0){
                printf("Erro de alocação de memória!\n");
                printf("\n");
            }else{
                printf("O numero foi adicionado a lista\n");
                printf("\n");
            }
        }
        else if(op == 4){
            
            if(lista_retira_inicio(lista, &retirado) == 0){
                printf("A lista está vazia!\n");
                printf("\n");
            }else{
            printf("O elemento %d foi retirado da lista\n" , retirado);
            printf("\n");

            }

        }
        else if(op == 5){
            
            if(lista_retira_fim(lista, &retirado) == 0){
                printf("A lista está vazia!\n");
                printf("\n");
            }else{
            printf("O elemento %d foi retirado da lista\n" , retirado);
            printf("\n");

            }

        }
        else if(op == 6){
            
            printf("Qual número você deseja retirar da lista?\n");
            scanf("%d" , &retirado);
            
            if(lista_retira_elemento(lista, &retirado) == 0){
                printf("A lista está vazia ou o elemento nao esta na lista!\n");
                printf("\n");
            }else{
            printf("O elemento %d foi retirado da lista\n" , retirado);
            printf("\n");

            }

        }
        else if(op == 7){
            
            printf("Qual elemento voce deseja verificar se pertence a lista?\n");
            scanf("%d" , &num);

            if(lista_pertence(lista, num) == 0){
                printf("A lista está vazia ou o número não pertence a lista!\n");
                printf("\n");
            }else{
            printf("O elemento %d pertence a lista!\n" , num);
            printf("\n");

            }

        }
        else if(op == 8){
            
            if(lista_vazia(lista) == 1){
                printf("A lista está vazia!\n");
                printf("\n");
            }else{
                lista_imprime(lista);
                printf("\n");
            }

        }
        else if(op == 9){

            printf("O número de elementos na lista é %d\n" , lista_tamanho(lista));
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
    
    lista_destroi(lista);
    return 0;
}