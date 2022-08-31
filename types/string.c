#include <stdio.h>

int main(){
    /**
     * Em C, não existe o tipo STRING, apenas o tipo CHAR.
     * Mais podemos simular criando um vetor do tipo CHAR.
     */

    char nome[50];

    printf("Qual a cidade que você mora? ");
    gets(nome);//metodo GETS está depreciado e não é mais recomendado a sua utilizacao.

    printf("Seja bem vindo pessoa da cidade de %s \n", nome);

    return 0;
}