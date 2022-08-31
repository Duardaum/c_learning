 #include <stdio.h>

 int main(){
    int sum = 0;//declarando variavel e inicializando
    printf("Quanto que é 2 + 2? ");
    scanf("%d", &sum);

    switch(sum){
        case 4:
            printf("Parabéns, você acertou! \n");
            break;
        case 3:
            printf("Quuuaassee!! \n");
            break;
        case 2:
            printf("Pensa mais um pouquinho ai.. \n");
            break;
        default:
            printf("Mar mininu.. vou nem dizer nada! \n");
    }

    return 0;
 }