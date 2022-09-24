#include <stdio.h>
#include <string.h>

/**
 * typedef, é uma forma de definir tipos em C, baseados em outros tipos já existentes.
 * Isso inclue inclusive os tipos de estruturas como: STRUCT, UNION e ENUM
 */

typedef unsigned short int boolean;
const boolean true = 1;
const boolean false = 0;

struct CasaStruct {
    int comodos;
    int banheiros;
    boolean propria;
};

int main(){

    typedef struct CasaStruct ResidenciaStruct;
    ResidenciaStruct cafofo;
    char status[10];
    

    cafofo.comodos = 3;
    cafofo.banheiros = 1;
    cafofo.propria = false;

    strcpy(status, (cafofo.propria ? "É" : "NÃO É"));//pela variavel ser um array de char, a unica forma de especificar valor, é através de uma função

    printf("Minha humilde residência tem %d comodo(s), %d banheiro(s) e %s uma casa própria! \n", cafofo.comodos, cafofo.comodos, status);

    return 0;
}