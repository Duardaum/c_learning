#include <stdio.h>

/***
 * Implementando a ordenação de valores de um vetor, baseado no script de ordenação SELECT SORT
 * Neste script a ordenação é feita através da comparação do primeiro número, com todos os outros
 * que ainda está no array para frente, fazendo a troca de posição dos mesmos.
*/

void select_sort(int vector[], int lenght){
    for(int i = 0; i < lenght; i++){
        int current;
        for(int j = (i+1); j < lenght; j++){
            if(vector[j] < vector[i]){
                current = vector[i];
                vector[i] = vector[j];
                vector[j] = current;
            }
        }
    }
}

int main(){
    int vector[6] = {8, 3, 1, 42, 12, 5};

    select_sort(vector, 6);

    for(int i = 0; i < 6; i++)
        printf("%d, ", vector[i]);
    
    printf("\n");

    return 0;
}