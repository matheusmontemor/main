#include <stdio.h>

int main (){
    char nome[30];
    printf( " Como eh seu nome? " );
    scanf( "%s", nome);
    int idade;
    printf( " Qual a sua idade ? " );
    scanf( "%d", &idade);
    printf( "%d", idade*365);

    return 0;


}
