#include <stdio.h>
#include <stdlib.h>

/**
 * Este exercício, é um exemplo da implementação do conceito 
 * de fila (FIFO) em C com o tamanho pre-definido.
 * 
 */

#define QUEUE_LENGTH 10
int QUEUE[QUEUE_LENGTH] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0;
int tail = 0;

void reseta(){
    int m = -1;
    for(int i = 0; i < QUEUE_LENGTH; i++)
        QUEUE[i] = 0;
    head = 0;
    tail = 0;
    system("clear");
    printf("\n==== FILA - Resetando ==== \n");
    printf("Fila resetada com sucesso \n");
    printf("\npress 0 to return to menu..");
    scanf("%d", &m);
    menu();

}

void deleta(){
    int m = -1;
    if(head < tail){
        QUEUE[head] = 0;
        head++;
    }
    system("clear");
    printf("\n==== FILA - Removendo ==== \n");
    printf("Primeiro elemento da fila removido! \n");
    printf("\npress 0 to return to menu..");
    scanf("%d", &m);
    menu();
}

void adiciona(){
    int e = 0, m = -1;
    system("clear");
    printf("\n==== FILA - Adicionando ==== \n");
    printf("Digite o número do elemento que gostaria de adicionar: \n");
    scanf("%d", &e);

    if(e != 0 && tail < QUEUE_LENGTH){
        QUEUE[tail] = e;
        tail++;
    }

    printf("\npress 0 to return to menu..");
    scanf("%d", &m);
    menu();
}

void lista(){
    int m = -1;
    system("clear");
    printf("\n==== FILA - Listagem ==== \n");
    for(int i = 0; i < QUEUE_LENGTH; i++){
        printf("|%d|", QUEUE[i]);
        printf("-");
    }
    printf("\nhead: %d", head);
    printf("\ntail: %d", tail);
    printf("\npress 0 to return to menu..");
    scanf("%d", &m);
    menu();
}

void menu(){
    int opcao = 0;
    system("clear");
    printf("\n===== FILA - Menu ====\n");
    printf("Selecione uma das opções para realizar com a fila:\n");
    printf("\n1. Listar \n2. Adicionar elemento \n3. Remover elemento \n4. Resetar fila \n");
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