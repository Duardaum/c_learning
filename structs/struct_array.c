#include <stdio.h>
#include <string.h>

/**
 * Structs em C, como o proprio nome diz, é uma estrutura de dados que permite agrupar variaveis (propriedades - como uma classe).
 * Para definir uma variavel do tipo 'struct', você precisa dizer que ela é do tipo 'struct <nome da struct> <nome da variavel>.
 * 
 * Também é possivel, criar uma Struct com outra Struct.
 * Ex: struct <nome da struct> { struct <nome de outra struct ja criada>; }
 */

struct AlunoStruct {
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
};

int main(){

    struct AlunoStruct alunos[2];

    for(int i = 0; i < 2; i++){
        printf("Informe a matricula do Aluno %d: \n", i);
        fgets(alunos[i].matricula, 10, stdin);
        /**
         * especificando o ultimo caracter da string (o ENTER depois de digitar o nome), como o caracter 'null terminal', 
         * indicando como o final da linha, para remover a quebra de linha que se cria, 
         * toda vez que o usuário digita o nome e aperta ENTER no teclado (que é o caracter no final da string).
         */
        alunos[i].matricula[strlen(alunos[i].matricula) - 1] = '\0';

        printf("Informe a nome do Aluno %d: \n", i);
        fgets(alunos[i].nome, 100, stdin);
        alunos[i].nome[strlen(alunos[i].nome) - 1] = '\0';

        printf("Informe o curso do Aluno %d: \n", i);
        fgets(alunos[i].curso, 50, stdin);
        alunos[i].curso[strlen(alunos[i].curso) - 1] = '\0';

        printf("Informe o ano de nascimento do Aluno %d: \n", i);
        scanf("%d", &alunos[i].ano_nascimento);
        printf("\n");
        /**
         * entre o SCANF e o FGETS, devemos colocar esta funcao, indicando que ele deve pegar um caracter na proxima iteracao, 
         * evitando assim, de pular a captura do proximo FGETS
         */
        getchar();
    }
    

    printf(" === INFORCAÇÕES === \n");
    for(int i = 0; i < 2; i++)
        printf("Aluno %s de %d, com matrícula %s, foi matriculado no curso %s! \n", alunos[i].nome, alunos[i].ano_nascimento, alunos[i].matricula, alunos[i].curso);

    return 0;
}