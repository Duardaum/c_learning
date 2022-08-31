#include <stdio.h>

int main(){
    /**
     * Arrays em C pode ser declarados por tipo e definindo sua dimensão.
     * Os indices dos arrays, são sempre inteiros!
     */
    
    char nome[50];//array de char
    printf("Qual seu nome? ");
    gets(nome);

    char letras[26];//array de char
    int ascii = 97;
    for(int i = 0; i < 26; i++){
        letras[i] = ascii++;
    }
    
    printf("%s, segue a ordenação do alfabeto e seus valores na tabela ASCII: \n", nome);
    for(int i = 0; i < 26; i++){
        printf("Letra: %c - %d \n", letras[i], letras[i]);
    }

    float valores[5];//array de float
    int numeros[5];//array de int
    numeros[0] = 5;
    numeros[1] = 7;
    numeros[2] = 15;
    numeros[3] = 762;
    numeros[4] = 33;
    for(int i = 0; i < 5; i++){
        valores[i] = (float) numeros[i] / 2;
    }

    printf("Exibindo resultado da divisão dos numeros inteiros por 2: \n");
    for(int i = 0; i < 5; i++){
        printf("%d dividido por 2 é igual a %.2f \n", numeros[i], valores[i]);
    }

    return 0;
}