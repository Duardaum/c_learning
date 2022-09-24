#include <stdio.h>
#include <string.h>

/**
 * Structs em C, como o proprio nome diz, é uma estrutura de dados que permite agrupar variaveis (propriedades - como uma classe).
 * Para definir uma variavel do tipo 'struct', você precisa dizer que ela é do tipo 'struct <nome da struct> <nome da variavel>.
 */

struct AlunoStruct {
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
};

int main(){

    struct AlunoStruct aluno;

    printf("Informe a matricula do Aluno: \n");
    fgets(aluno.matricula, 10, stdin);
    /**
     * especificando o ultimo caracter da string (o ENTER depois de digitar o nome), como o caracter 'null terminal', 
     * indicando como o final da linha, para remover a quebra de linha que se cria, 
     * toda vez que o usuário digita o nome e aperta ENTER no teclado (que é o caracter no final da string).
     */
    aluno.matricula[strlen(aluno.matricula) -1] = '\0';

    printf("Informe a nome do Aluno: \n");
    fgets(aluno.nome, 100, stdin);
    aluno.nome[strlen(aluno.nome) -1] = '\0';

    printf("Informe o curso do Aluno: \n");
    fgets(aluno.curso, 50, stdin);
    aluno.curso[strlen(aluno.curso) -1] = '\0';

    printf("Informe o ano de nascimento do Aluno: \n");
    scanf("%d", &aluno.ano_nascimento);

    printf(" === INFORCAÇÕES === \n");
    printf("Aluno %s de %d, com matrícula %s, foi matriculado no curso %s! \n", aluno.nome, aluno.ano_nascimento, aluno.matricula, aluno.curso);

    return 0;
}