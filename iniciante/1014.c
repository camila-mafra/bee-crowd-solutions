#include <stdio.h>
#include <stdlib.h>

int main () {
    int X;
    double Y, total;

    printf("Qual a distancia total percorrida?: ");
    scanf("%d",&X);
    printf("Qual o total de combustivel gasto?: ");
    scanf("%lf",&Y);

    total = X / Y;

    printf("%.3lf km/l\n", total);

    return 0;
}