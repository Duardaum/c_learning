#include <stdio.h>
#include <string.h>

/**
 * Possui funções de manipulação de string.
 * Para saber quais funções fazem parte desta lib, recomendo procurar na internet ou alguma documentacao de C
 * 
 * Abaixo, segue alguns exemplos.
 * 
 * strcyp = copia um valor para dentro de alguma variavel
 * strcat = contatena duas strings
 * strcmp = compara duas strings (o retorno é TRUE para diferente e FALSE para iguais)
 * 
 */

int main(){
    char dia[3];
    char mes[11];
    char ano[5];

    char data[19];

    strcpy(dia, "02");
    strcpy(mes, " Novembro ");
    strcpy(ano, "2022");

    strcat(data, dia);
    strcat(data, mes);
    strcat(data, ano);

    printf("%s \n", data);

    if(strcmp(dia, mes))
        printf("Não são Iguais! \n");
    else
        printf("São Iguais! \n");

    return 0;
}