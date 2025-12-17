#include <stdio.h>
#include <stdlib.h>

int main () {
    int N, anos, meses, dias;

    printf("Qual a sua idade em dias?: ");
    scanf("%d",&N);

    anos = N / 365;
    N = N % 365;

    meses = N /30;
    N = N % 30;

    dias = N;

    printf("%d ano(s)\n", anos);
    printf("%d mes(s)\n", meses);
    printf("%d dia(s)\n", dias);
    return 0;
}
