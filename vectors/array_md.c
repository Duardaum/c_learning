#include <stdio.h>

int main(){
    /**
     * Arrays Multidimencional (Matrizes) em C pode ser declarados por tipo e definindo sua dimensão.
     * Os indices dos arrays, são sempre inteiros!
     */
    
    char nome[3][50];//matriz com 3 linhas e 50 colunas
    printf("Digite o nome de 3 pessoas que você goste: \n");
    for(int i = 0; i < 3; i++){
        gets(nome[i]);
    }

    int idade[3];
    printf("Digite a idade de cada um deles: \n");
    for(int i = 0; i < 3; i++){
        scanf("%d", &idade[i]);
    }

    printf("Resultado: \n");
    for(int i = 0; i < 3; i++){
        printf("%s tem %d anos! \n", nome[i], idade[i]);
    }

    return 0;
}