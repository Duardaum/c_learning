# include <stdio.h>
# include <stdlib.h>

/***
 * Funções para realocação (REALLOC) de memoria.
 * 
 * Neste exercício, vamos realocar memoria dinamicamente,
 * para podermos receber de forma indefinida, uma quantidade X de registros,
 * diferente da primeira vez que foi especificada.
 * 
 * Funciona no mesmo principio do MALLOC e do REALLOC
 * 
*/

int main (){
    int n, *p;

    printf("Quantidade de elementos que irá digitar: \n");
    scanf("%d", &n);

    p = (int*) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Informe o valor da posição %d: \n", i);
        scanf("%d", &p[i]);
    }

    printf("Os valores informados foram: \n");
    for(int i = 0; i < n; i++)
        printf("Posição %d: %d \n", i, p[i]);

    printf("Espaço alocado em memória pelo ponteiro, foi de %ld bytes! \n", (n * sizeof(int)));

    printf("Nova quantidade de elementos que irá digitar: \n");
    scanf("%d", &n);

    p = realloc(p, n * sizeof(int));
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