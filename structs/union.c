#include <stdio.h>
#include <string.h>

/**
 * Estruturalmente falando, STRUCT e UNION são idênticos, mais possuem diferenças na sua alocação de memoria.
 * De uma forma mais resumida, os valores (propriedades) da STRUCT são alocados em memoria em locais (enderecos) separados.
 * Já o UNION, todos os valores (pripriedades) compartilham do mesmo espaço.
 * No UNION, o espaço alocado em memoria, é o espaco do maior valor (propriedade), e este espaço é compartilhado entre todos os valores do UNION.
 * 
 * Por ser compartilhado, o valor que fica registrado do UNION, é apenas o valor setado por último em alguma das propriedades, pois ele SEMPRE é sobrescrito.
 * 
 * Existem outras questões, na qual podem ser vista no link abaixo (caso ainda esteja ativo).
 * Qualquer coisa, basta pesquisar na internet as demais diferenças do mesmo.
 * 
 * https://acervolima.com/diferenca-entre-estrutura-e-uniao-em-c/
 */

union PessoaUnion {
    char nome[100];
    unsigned short int idade;
};

int main(){

    union PessoaUnion eduardo;
    union PessoaUnion fulano;

    strcpy(eduardo.nome, "Eduardo Júnior dos Santos");
    printf("Nome: %s \n", eduardo.nome);

    eduardo.idade = 34;
    printf("Idade: %d \n \n", eduardo.idade);

    printf("Reimprimindo: \n");
    printf("Nome: %s \n", eduardo.nome);
    printf("Idade: %d \n \n", eduardo.idade);

    strcpy(fulano.nome, "Evaldo Santos");
    fulano.idade = 33;
    printf("%s tem %d anos \n", fulano.nome, fulano.idade);

    return 0;
}