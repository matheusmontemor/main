#include <stdio.h>

int main (){
    float acao1 = 24.13;
    float acao2 = 11.00;
    float acao3 = 38.65;
    float dividendo1 = 17.00;
    float dividendo2 = 35.00;
    float dividendo3 = 25.00;

    printf ("entre com a quantidade da acao1: ");
    int quantidade;
    scanf("%d", &quantidade);
    printf("dividendo acao1 %f\n", (dividendo1 / acao1)* 100 * quantidade);

    printf ("entre com a quantidade da acao2: ");
    scanf("%d", &quantidade);
    printf("dividendo acao2 %f\n", (dividendo2 / acao2)* 100 * quantidade);

    printf ("entre com a quantidade da acao3: ");
    scanf("%d", &quantidade);
    printf("dividendo acao3 %f\n", (dividendo3 / acao3)* 100 * quantidade);


    return 0;


}
