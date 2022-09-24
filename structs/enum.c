#include <stdio.h>
#include <string.h>

/**
 * Em linhas gerais, o ENUM em C, se comporta como o enum em outras linguagens, incluindo o PHP, mais com algumas limitações:
 * 
 * 1. não se pode criar metodos dentro do ENUM
 * 2. Os valores definidos para as chaves do ENUM são sempre numéricos e inteiros
 * 3. Caso não especifique valores para as chaves, ele será indexado do primeiro para o ultimo com valor inteiro, começando pelo 0 (zero)
 * 4. A chamada das chaves dos ENUM, é feita de forma direta, e não atravez do nome do ENUM.
 */

enum DiaSemanaEnum {
    DOMINGO,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO,
};

enum MesesDoAno {
    JANEIRO = 1,
    FEVEREIRO = 2,
    MARCO = 3,
    ABRIL = 4,
    MAIO = 5,
    JUNHO = 6,
    JULHO = 7,
    AGOSTO = 8,
    SETEMBRO = 9,
    OUTUBRO = 10,
    NOVEMBRO = 11,
    DEZEMBRO = 12
};

int main(){
    char* dia_semana[7] = {"Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};
    char* mes_ano[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    enum DiaSemanaEnum week;
    enum MesesDoAno month;
    unsigned short int day;
    unsigned short int year;

    week = SABADO;
    month = SETEMBRO;
    day = 24;
    year = 2022;

    printf("Hoje é %s, dia %d de %s de %d \n", dia_semana[week], day, mes_ano[month - 1], year);

    return 0;
}