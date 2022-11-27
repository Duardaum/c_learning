#include <stdio.h>
#include <stdlib.h>

/**
 * Este exercício, é um exemplo da implementação do conceito 
 * de pilha (FILO/LIFO) em C com o tamanho pre-definido.
 * 
 */

#define STACK_LENGTH 10
int STACK[STACK_LENGTH] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int top = 0;

void reseta(){
    int m = -1;
    for(int i = 0; i < STACK_LENGTH; i++)
        STACK[i] = 0;
    top = 0;
    system("clear");
    printf("\n==== PILHA - Resetando ==== \n");
    printf("Pilha resetada com sucesso! \n");
    printf("\npress 0 to return to menu..");
    scanf("%d", &m);
    menu();
}

void deleta(){
    int m = -1;
    if(top > 0){
        top--;
        STACK[top] = 0;
    }
    system("clear");
    printf("\n==== PILHA - Removendo ====\n");
    printf("Último elemento da pilha removido! \n");
    printf("\npress 0 to return to menu..");
    scanf("%d", &m);
    menu();
}

void adiciona(){
    int e = 0, m = -1;
    system("clear");
    printf("\n==== PILHA - Adicionando ====\n");
    printf("Digite o número do elemento que gostaria de adicionar: \n");
    scanf("%d", &e);

    if(e != 0 && top < STACK_LENGTH){
        STACK[top] = e;
        top++;
    }

    printf("\npress 0 to return to menu..");
    scanf("%d", &m);
    menu();
}

void lista(){
    int m = -1;
    system("clear");
    printf("\n==== PILHA - Listagem ==== \n");
    for(int i = 0; i < STACK_LENGTH; i++){
        printf("|%d|", STACK[i]);
        printf("-");
    }
    printf("\ntop: %d", top);
    printf("\npress 0 to return to menu..");
    scanf("%d", &m);
    menu();
}

void menu(){
    int opcao = 0;
    system("clear");
    printf("\n===== PILHA - Menu ====\n");
    printf("Selecione uma das opções para realizar com a pilha:\n");
    printf("\n1. Listar \n2. Adicionar elemento \n3. Remover elemento \n4. Resetar pilha \n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            lista();
            break;
        case 2:
            adiciona();
            break;
        case 3:
            deleta();
            break;
        case 4:
            reseta();
            break;
        default:
            menu();
    }
}

int main(){
    menu();
    return 0;
}