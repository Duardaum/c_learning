#include <stdio.h>

int main(){

    char uf;

    printf("De qual estado você é (UF)?? ");
    scanf("%c", &uf);

    printf("você disse que era de %c \n", uf);

    printf("Printando o alfabeto: \n");
    for(int i = 97; i <= 122; i++){
        printf("%c, ", i);
        if(i == 122)
            printf("\n");
    }

    return 0;
}