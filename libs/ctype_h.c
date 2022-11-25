#include <stdio.h>
#include <ctype.h>

/**
 * A lib CTYPE, contem funcoes para verificar o tipo do dado do caracter.
 * Existem várias funções nesta lib, o que recomendo procurar as que for necessária
 * na internet, a medida que forem precisando delas.
 * 
 * Vamos apenas deixar alguns exemplos no codigo abaixo.
 *  
 */

int main(){

    char c = '1';
    
    printf("isalnum: %d \n", isalnum(c));
    printf("isalpha: %d \n", isalpha(c));
    printf("isdigit: %d \n", isdigit(c));
    printf("isupper: %d \n", isupper(c));
    printf("tolower: %c \n", tolower(c));
    printf("toupper: %c \n", toupper(c));

    return 0;
}