# include <stdio.h>
# include <stdlib.h>

/***
 * Alocação de memoria de array multidimencional.
 * 
 * Para você alocar um espaço em memoria para um array dimensional,
 * você precisa saber o numero de linhas e colunas que este array possui e
 * e fazer a multiplicação deles pelo sizeof do tipo que deverá ser armazenado.
 * Exemplo:
 * 
 * Um array de 3 linhas e 3 colunas será: 3 * 3 * sizeof(tipo do dado que será armazenado em memoria)
 * 
*/

int main (){
    int *p;
    int l = 2, c = 3;//array[2][3]
    
    p = malloc(l * c * sizeof(int));

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            p[i * c + j] = 3 * i + j;
        }
    }

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("%d\n", p[i * c + j]);
        }
    }

    printf("Espaço alocado em memória pelo ponteiro, foi de %ld bytes! \n", (l * c * sizeof(int)));

    free(p);//desalocar a memoria que foi alocada para uso no sistema
    p = NULL;//medida de seguraça - inutilizar o ponteiro, para que programas maliciosos não o utilize para ter acesso a sua aplicação

    return 0;
}