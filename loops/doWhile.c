#include <stdio.h>

int main(){
    int n;

    printf("Digite um numero de vezes que gostaria que se repetisse o a palavra 'doWhile': ");
    scanf("%d", &n);

    do
    {
        printf("doWhile \n");
        n--;
    }while(n != 0);

    return 0;
}