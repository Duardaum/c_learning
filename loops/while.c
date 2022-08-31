#include <stdio.h>

int main(){
    int n;

    printf("Digite um numero para contarmos até zero: ");
    scanf("%d", &n);

    while (n != 0)
    {
        n--;
        printf("%d \n", n);
        
    }

    return 0;
}