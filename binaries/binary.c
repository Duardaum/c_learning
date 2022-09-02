#include <stdio.h>

int main(){
    /**
     * Deslocamento da posição do bit
     *
     * >> - indica o deslocamento do bit para a direita
     * << - indica o deslocamento do bit para a esquerda
     * ~ - indica a negação do valor (muda os valores dos bits: 0 para 1 e 1 para 0)
     */
    
    int v = 1;

    printf("Deveria aparecer 1: %d \n", v);

    v = v << 1;
    printf("Deveria aparecer 2: %d \n", v);

    v = v << 1;
    printf("Deveria aparecer 4: %d \n", v);

    v = v << 1;
    printf("Deveria aparecer 8: %d \n", v);

    v = v << 1;
    printf("Deveria aparecer 16: %d \n", v);

    v = v << 1;
    printf("Deveria aparecer 32: %d \n", v);

    v = 1;
    v = ~v;//negação do valor
    printf("Negação do valor 1 em binário: %d \n", v);

    return 0;
}