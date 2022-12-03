#include <stdio.h>

/***
 * Implementando a ordenação de valores de um vetor, baseado no script de ordenação BUBBLE SORT
 * Neste script, a ordenação é feita através da comparação dupla de valores do array, onde ele
 * joga o maior valor sempre para o final e, como o último valor sempre é o maior, ele não ordena mais
 * eles uma vez que ja foram ordenados.
*/

void bubble_sort(int vector[], int lenght){
    int times = lenght;
    while(times != 0){
        for(int i = 0; i < (times-1); i++){
            int current;
            if(vector[i] > vector[i+1]){
                current = vector[i+1];
                vector[i+1] = vector[i];
                vector[i] = current;
            }
        }
        times--;
    }
}

int main(){
    int vector[6] = {8, 3, 1, 42, 12, 5};

    bubble_sort(vector, 6);

    for(int i = 0; i < 6; i++)
        printf("%d, ", vector[i]);
    
    printf("\n");

    return 0;
}