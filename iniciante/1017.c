#include <stdio.h>
#include <stdlib.h>

int main () {
    int tempo, velocidade;
    double litros;

    printf("Qual o tempo gasto na viagem?: ");
    scanf("%d",&tempo);
    printf("Qual a velocidade media durante a viagem?: ");
    scanf("%d",&velocidade);

    litros = ((double) velocidade / 12) * tempo;

    printf("%.3lf\n", litros);


    return 0;
}