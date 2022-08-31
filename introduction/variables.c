#include <stdio.h>

int main(){
    int idade; //declarando variavel
    
    printf("Qual sua idade? ");
    scanf("%d", &idade);//recebendo dado digitado no terminal
    printf("Sua idade é %d ! \n", idade);//exibindo valor digitado
    return 0;
}