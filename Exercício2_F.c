#include <stdio.h>
int main () {
    float graus_farenheit;
    printf("temperatura em graus farenheit");
    scanf ( "%f" , &graus_farenheit );
    printf("%f graus celcius",(graus_farenheit - 32) * 5 / 9);

    return 0;
}
