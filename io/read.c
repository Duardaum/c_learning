#include <stdio.h>

/**
 * Para manipular arquivos em C, você precisa criar um PONTEIRO de um tipo específico para arquivo, chamado FILE.
 * No geral, manipulação de arquivo, é igual o PHP, mais tem algumas diferenças.
 * As funções de manipulacao de arquivo em C são nativas, o que faz não ser necessária, a importação de libs especificas para tal.
 */

int main(){
    FILE *fp;
    char c;
    char nomes[3][50];
    int i = 0;

    //leitura por caracter
    fp = fopen("./io/read.txt", "r");
    while((c = getc(fp)) != EOF){
        printf("%c", c);
    }
    fclose(fp);
    printf("\n");

    //leitura por linha
    fp = fopen("./io/read.txt", "r");
    while(!feof(fp)){
        fgets(nomes[i], 50, fp);
        printf("Nome: %s", nomes[i]);
        i++;
    }
    fclose(fp);
    printf("\n");

    return 0;
}