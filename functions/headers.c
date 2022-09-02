#include <stdio.h>
#include "utils.h"

/**
 * Em C, também é possivel criar arquivos para importacao (headers), mas sua extensão é o '.h';
 * Neste arquivo '.h', deve-se ficar apenas os protótipos da função, pois um outro
 * arquivo com a extensão '.c' de mesmo nome precisa ser criado e é nele que a implementacao
 * das funções uma vez declaradas no arquivo '.h' devem ser implementadas de fato.
 * 
 * OBS.: Na compilação do programa, os arquivos '.c' referentes aos headers (arquivos '.h') 
 * devem ser referenciados no comando para compilacao
 * 
 */

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
