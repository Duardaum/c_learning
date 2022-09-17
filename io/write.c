#include <stdio.h>

/**
 * Para manipular arquivos em C, você precisa criar um PONTEIRO de um tipo específico para arquivo, chamado FILE.
 * No geral, manipulação de arquivo, é igual o PHP, mais tem algumas diferenças.
 * As funções de manipulacao de arquivo em C são nativas, o que faz não ser necessária, a importação de libs especificas para tal.
 * 
 * w = abre o arquivo para gravacao com o ponteiro no inicio do arquivo. Caso nao exista, cria um novo. Caso exista, ele apaga o arquivo.
 * r = abre o arquivo para leitura com o ponteiro no inicio do arquivo.
 * a = abre o arquivo para gravacao com o ponteiro no final do arquivo. Caso nao exista, cria um novo.
 */

int main(){
    FILE *fp;
    char nome[50];

    fp = fopen("./io/write.txt", "a");
    printf("Digite um nome ou 0 (zero) para sair: \n");
    fgets(nome, 50, stdin);//stdin = entrada padrao = teclado
    while(nome[0] != '0'){
        fputs(nome, fp);
        printf("Digite um nome ou 0 (zero) para sair: \n");
        fgets(nome, 50, stdin);//stdin = entrada padrao = teclado
    }
    fclose(fp);

    return 0;
}