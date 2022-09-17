#include <stdio.h>

/**
 * Em C, por ser uma linguagem procedural e não possuir classes (e consequentemente variaveis de escopo global neste contexto),
 * o que é comum de se fazer quando se quer acessar/alterar o valor de uma variavel criada em uma outra função qualquer,
 * é usando o PONTEIRO, que neste caso, é o endereço do espaço alocado daquela variavel na memória.
 * 
 * &variavel = como se seta o valor de uma variavel qualquer em memória
 * func (int* variavel) = em uma função, é desta fora que se passa o endereco da memoria
 * (*variavel) = quando se quer acessar o valor dentro do endereco de memoria
 * int* variavel = forma de declarar um PONTEIRO em uma funcao.
 * 
 */

void soma(int* e1, int* e2, int* e3){
    printf("Enderecos na memória: %p, %p e %p respectivamente! \n", e1, e2, e3);
    (*e3) = (*e1) + (*e2);
};

int main(){
    int n1, n2;
    int sum = 0;

    printf("Digite o 1º número: ");
    scanf("%d", &n1);
    printf("Digite o 2º número: ");
    scanf("%d", &n2);
    
    soma(&n1, &n2, &sum);

    printf("O resultado da soma é %d! \n", sum);

    return 0;
}