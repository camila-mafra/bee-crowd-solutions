#include <stdio.h>
#include <stdlib.h>

int main () {

    int distancia, minutos;

    printf("Qual a distancia?: ");
    scanf("%d",&distancia);

    minutos = distancia * 2;

    printf("%d minutos\n", minutos);

    return 0;
}