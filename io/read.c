#include <stdio.h>

/**
 * Para manipular arquivos em C, você precisa criar um PONTEIRO de um tipo específico para arquivo, chamado FILE.
 * No geral, manipulação de arquivo, é igual o PHP, mais tem algumas diferenças.
 * As funções de manipulacao de arquivo em C são nativas, o que faz não ser necessária, a importação de libs especificas para tal.
 */

int main(){
    FILE *fp;
    char c;

    fp = fopen("./io/read.txt", "r");
    while((c = getc(fp)) != EOF){//leitura por caracter
        printf("%c", c);
    }
    fclose(fp);

    printf("\n");

    return 0;
}