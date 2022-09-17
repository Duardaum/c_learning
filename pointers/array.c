#include <stdio.h>

int main(){
    int valores[3] = {1, 5, 9};

    printf("O array possui %ld bytes! \n", sizeof(valores));
    printf("O endereço de memoria do array na posição 0 é %p e valor %d! \n", valores[0], valores[0]);
    printf("O endereco de memoria do array é %p ! \n", *(valores));
    printf("O endereco de memoria do array na posição 1 é %p e valor %d ! \n", *(valores+1), *(valores+1));
    printf("O endereco de memoria do array na posição 2 é %p e valor %d ! \n", *(valores+2), *(valores+2));

    return 0;
}