 #include <stdio.h>

 int main(){
    int age = 0;//declarando variavel e inicializando
    printf("Qual sua idade? ");
    scanf("%d", &age);

    if(age <= 12){
        printf("Você é uma criança! \n");
    }else if(age > 12 && age < 18){
        printf("Você é um adolescente! \n");
    }else if(age >= 18 && age < 60){
        printf("Você é um adulto! \n");
    }else{
        printf("Você é um idoso! \n");
    }
    return 0;
 }