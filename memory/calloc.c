# include <stdio.h>
# include <stdlib.h>

/***
 * Funções para alocação de memoria.
 * 
 * Neste exercício, vamos alocar memoria dinamicamente,
 * para podermos receber de forma indefinida, uma quantidade X de registros
 * que será especificada por usuário ou de forma dinâmica pela aplicação.
 * 
 * A principal diferença entre MALLOC e CALLOC, é que,
 * no caso do MALLOC, ele aloca espaço em memoria não mais utilizada e, caso esta parte da memoria
 * que ele irá utilizar para alocar, contiver algum dado utilizado previamente por alguma outra parte do programa
 * ou até mesmo outros programas do sistema, ele vai trazer este dado junto na hora da alocação.
 * Já o CALLOC, ele irá zerar o espaço alocado, preenchendo o mesmo com zeros, removendo o "lixo" da memoria.
 * 
 * O principio de utilização dos dois métodos é o mesmo e praticamente identicos na sua utilização tambem.
 * 
*/

int main (){
    int n, *p;

    printf("Quantidade de elementos que irá digitar: \n");
    scanf("%d", &n);

    /***
     * O segredo está na linha abaixo:
     * 
     * De forma dinâmica, você aloca o espaço em memoria, de acordo com o tipo do dado que
     * será recebido na aplicação, jogando este espaço para dentro de um ponteiro (p), e usando
     * ele de acordo com o necessário, baseado em seu tipo.
     * 
    */
    p = (int*) calloc(n, sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Informe o valor da posição %d: \n", i);
        scanf("%d", &p[i]);
    }

    printf("Os valores informados foram: \n");
    for(int i = 0; i < n; i++)
        printf("Posição %d: %d \n", i, p[i]);

    printf("Espaço alocado em memória pelo ponteiro, foi de %ld bytes! \n", (n * sizeof(int)));

    free(p);//desalocar a memoria que foi alocada para uso no sistema
    p = NULL;//medida de seguraça - inutilizar o ponteiro, para que programas maliciosos não o utilize para ter acesso a sua aplicação

    return 0;
}