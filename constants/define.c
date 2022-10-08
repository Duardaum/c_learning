#include <stdio.h>

/**
 * Em C, para de definir uma constante, você faz como no exemplo abaixo:
 * 
 * #define NOME_DA_CONSANTE VALOR_DA_CONSTANTE
 * 
 * Você pode fazer uma verificação da existencia da constante, caso não saiba se a mesma
 * ja foi definida em outro lugar e evitar erros de compilação, como no exemplo abaixo:
 * 
 * #ifndef NOME_DA_CONSANTE
 *  #define NOME_DA_CONSTANTE VALOR_DA_CONSTANTE
 * #endif
 * 
 * Essas constantes são conhecidas em C como DIRETIVAS DE COMPILAÇÃO!
 * Elas tem o mesmo comportamento de imutabilidade que as constantes em outras linguagens.
 * 
 * Você tambem pode fazer uma verificação, para saber se a consante foi definida e usar seu valor
 * no código, durante alguma operação:
 * 
 * #ifdef NOME_DA_CONSANTE
 *  //ação qualquer
 * #endif
 *
 */

#ifndef PI
    #define PI 3.14
#endif


int main(){
    printf("O valor de PI é %.2f \n", PI);

    #ifdef boolean
        printf("a constante boolean foi definida! \n");
    #else 
        printf("a constante boolean não foi definida! \n");
    #endif

    return 0;
}