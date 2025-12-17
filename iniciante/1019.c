#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, horas, minutos, segundos;

    printf("Qual a duracao do evento em segundos?: ");
    scanf("%d",&N);

    horas = N / 3600;
    N = N % 3600;

    minutos = N / 60;
    N = N % 60;

    segundos = N;

    printf("%d : %d : %d\n", horas, minutos, segundos);
    return 0;

}