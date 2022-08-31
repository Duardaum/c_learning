#include <stdio.h>

int main(){
    /**
     * adição = +
     * subtração = -
     * multiplicação = *
     * divisão = /
     * exponenciação = n ** 2
     * módulação (resto da divisão) = %
     */

    int n1 = 100;
    int n2 = 20;
    float r = 0;

    r = n1 + n2;
    printf("Adição: %.0f \n", r);
    r = n1 - n2;
    printf("Subtração: %.0f \n", r);
    r = n1 * n2;
    printf("Multiplicação: %.0f \n", r);
    r = n1 / n2;
    printf("Divisão: %.2f \n", r);
    r = n1 * n1;
    printf("Exponenciação: N1 = %.0f \n", r);
    r = n1 % 2; 
    printf("Módulo: N1 = %.0f \n", r);

    return 0;
}