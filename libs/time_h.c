#include <stdio.h>
#include <time.h>

/**
 * Esta lib contem algumas funções e constantes para manipulacao de data, hora e clock de processador
 * Vamos deixar alguns exemplos abaixo, mais para novas funcoes,
 * procure uma documentacao de C.
 * 
 * Abaixo vamos ver as seguintes funções:
 * 
 * clock;
 * time_t;
 * struct tm;
 * localtime;
 * asctime;
 * 
 */

int main(){
    long int clock_start, clock_finish;
    double clock_total;

    time_t data_atual;
    struct tm *info_data;

    clock_start = clock();
    for(int i = 0; i < 1500000000; i++){}
    clock_finish = clock();
    clock_total = (double) ((double) clock_finish - (double) clock_start) / (double) CLOCKS_PER_SEC;

    printf("Clock inicial: %ld \n", clock_start);
    printf("Clock final: %ld \n", clock_finish);
    printf("Clocks por segundo: %ld \n", CLOCKS_PER_SEC);
    printf("Tempo total usado pela CPU (em segundos): %.2f \n", clock_total);

    time(&data_atual);
    info_data = localtime(&data_atual);

    printf("Data Atual: %s", asctime(info_data));

    return 0;
}