#include <stdio.h>
#include <math.h>

/**
 * A lib MATH contem um conjunto de funcoes matematicas, que são uteis para realizacao
 * de calculos matemáticos.
 * Para saber quais funções estão presentes nesta lib, recomendo olhar na internet ou alguma documentação C
 * 
 * Para compilar código com a lib MATH incluida, existe um parametro especial que precisa ser passado,
 * indicando o computador que deve ser usado a lib em questão.
 * 
 * Este comando especial, consta no README deste repositório.
 * 
 * 
 */


int main(){
    int angulo = 45;//graus
    float res = cos(angulo);

    printf("O Coseno de %d é %f \n", angulo, res);

    return 0;
}