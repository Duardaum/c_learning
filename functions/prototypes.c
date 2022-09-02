#include <stdio.h>

/**
 * Protótipo de função, são parecidas com as Interfaces em PHP.
 * Em C, as funções devem ser escritas antes da função 'main'.
 * Mais você pode escreve-las após, mas precisa declarar
 * o seu protótipo (interface) de declaração, antes da função 'main', para
 * que o compilador saiba que a função existe abaixo dela e assim, conseguir
 * reconhecer a função em questão durante o processo de compilação.
 */


int soma(int n1, int n2);

int main(){
    int n1, n2;
    int sum = 0;

    printf("Digite o 1º número: ");
    scanf("%d", &n1);
    printf("Digite o 2º número: ");
    scanf("%d", &n2);
    
    sum = soma(n1, n2);

    printf("O resultado da soma é %d! \n", sum);

    return 0;
}

int soma(int n1, int n2){
    return n1 + n2;
}