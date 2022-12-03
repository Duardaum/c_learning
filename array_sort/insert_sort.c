#include <stdio.h>

/***
 * Implementando a ordenação de valores de um vetor, baseado no script de ordenação INSERT SORT
 * Neste script, a ordenação é baseada na comparação de um dos valores do array que está sendo 
 * iterado para frente, comparando com os valores anteriores.
*/

void insert_sort(int vector[], int lenght){
    for(int i = 0; i < lenght; i++){
        int current;    
        int backward_pos = i;
        for(int j = i; j >= 0; j--){
            if(vector[backward_pos] < vector[j]){
                current = vector[backward_pos];
                vector[backward_pos] = vector[j];
                vector[j] = current;
                backward_pos--;
            }
        }
    }
}

int main(){
    int vector[6] = {8, 3, 1, 42, 12, 5};

    insert_sort(vector, 6);

    for(int i = 0; i < 6; i++)
        printf("%d, ", vector[i]);
    
    printf("\n");

    return 0;
}