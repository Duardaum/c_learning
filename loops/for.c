#include <stdio.h>

int main(){
    int n;
    int sum = 0;

    printf("Digite um numero para saber a raiz quadrada: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        sum = sum + n;
    }
    
    printf("O resultado da soma é %d! \n", sum);

    return 0;
}