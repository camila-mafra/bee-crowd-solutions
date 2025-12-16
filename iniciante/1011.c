#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int raio;
    double pi = 3.14159, vol;

    printf("Qual o raio da esfera?: ");
    scanf("%d",&raio);

    vol = ((4.0/3) * pi) * pow(raio, 3);

    printf("VOLUME = %.3lf\n", vol);
    return 0;
}
