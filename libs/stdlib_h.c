#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * Alguns métodos da stdlib:
 * 
 * atof: converte string em double
 * atoi: converte string em inteiro
 * atol: converte string em inteiro longo
 * 
 */

int main(){
    char sa[5] = "4.230";
    double d = atof(sa);
    printf("Valor convertido para double: %.3f ! \n", d);

    char sb[3] = "123";
    int i = atoi(sb);
    printf("Valor convertido para inteiro: %d ! \n", i);

    char sc[20] = "99999999999999999999";
    long int li = atol(sc);
    printf("Valor convertido para inteiro: %ld ! \n", li);

    return 0;
}