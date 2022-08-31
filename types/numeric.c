#include <stdio.h>

int main(){
    //int n1, n2;
    float n1, n2;
    double p1, p2;

    printf("Calculando regra de 3 simples (porcentagem)! \n");
    printf("1º número: ");
    scanf("%f", &n1);
    printf("Porcentagem do 1º número: ");
    scanf("%lf", &p1);
    printf("2º número: ");
    scanf("%f", &n2);

    p2 = n2 * p1 / n1;

    printf("O número %.2f representa %.2f%% de %.2f \n", n2, p2, n1);//escape do caractere de porcentagem, tem que usa-lo duas vezes.

    return 0;
}