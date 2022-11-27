#include <stdio.h>
#include <stdlib.h>

/**
 * Este exercício, é um exemplo da implementação do conceito 
 * de lista encadeada em C.
 * 
 * P.S.: Em uma lista encadeada, cada elemento é um objeto, onde um
 * dos seus atributos, aponta para o próximo elemento da lista.
 * Por ser assim, voê pode adicionar elementos na lista encadeada,
 * tanto no final quanto no começo da lista.
 * Em uma lista encadeada, cada elemento dela é chamada de Nó!
 * 
 */

struct st_no {
    int value;
    struct st_no *next;
};
typedef struct st_no no;

void lista(no *ll)
{
    int n;
    system("clear");
    printf("\n==== LISTA ENCADEADA - Listagem ====\n");
    if(ll->next == NULL){
        printf("Lista está vazia!");
    }else{
        no *tmp = ll->next;
        do{
            printf("|%d|", tmp->value);
            printf("-");
            tmp = tmp->next;
        }while(tmp != NULL);
    }
    printf("\npress 0 to return to menu..");
    scanf("%d", &n);
}

void reseta(no *ll)
{
    int n;
    if(ll->next != NULL){
        no *current, *tmp;
        current = ll->next;
        while(current != NULL){
            tmp = current->next;
            free(current);
            current = tmp;
        }
    }
    system("clear");
    printf("\n==== LISTA ENCADEADA - Resetando ====\n");
    printf("Lista resetada com sucesso!\n");
    printf("\npress 0 to return to menu...\n");
    scanf("%d", &n);
}

void adicionaFinal(no *ll)
{
    struct st_no *final = (no *) malloc(sizeof(no));
    system("clear");
    printf("\n==== LISTA ENCADEADA - Adicionando Final ====\n");
    printf("Digite o valor: \n");
    scanf("%d", &final->value);
    
    no *tmp;
    if(ll->next == NULL)
        tmp = ll;
    else
        tmp = ll->next;

    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = final;
}

void adicionaInicio(no *ll)
{
    //primeiro elemento da lista encadeada, serve apenas como apontador.
    //os valores no primeiro elemento não são usados/preenchidos.
    struct st_no *begin = (no *) malloc(sizeof(no));
    system("clear");
    printf("\n==== LISTA ENCADEADA - Adicionando Inicio ====\n");
    printf("Digite o valor: \n");
    scanf("%d", &begin->value);
    
    no *tmp = ll->next;//antigo primeiro
    ll->next = begin;
    begin->next = tmp;
}

int menu(){
    int opt;
    system("clear");
    printf("\n==== LISTA ENCADEADA - Menu ====\n");
    printf("\n1. Lista \n2. Adiciona Inicio \n3. Adiciona Final \n4. Reseta \n0. Sair \n");
    scanf("%d",&opt);
    return opt;
}

int main(){
    no *ll = (no *) malloc(sizeof(no));
    int opt;
    do{
        opt = menu();
        switch(opt){
            case 1:
                lista(ll);
            break;
            case 2:
                adicionaInicio(ll);
            break;
            case 3:
                adicionaFinal(ll);
            break;
            case 4:
                reseta(ll);
            break;
            case 0:
                exit(1);
                break;
        }
    }while(opt);
    free(ll);
    return 0;
}