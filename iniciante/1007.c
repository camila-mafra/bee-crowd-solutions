#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B,C,D, Diferenca;

    printf("Escolha um numero inteiro: ");
    scanf("%d",&A);
    printf("Escolha um numero inteiro: ");
    scanf("%d",&B);
     printf("Escolha um numero inteiro: ");
    scanf("%d",&C);
     printf("Escolha um numero inteiro: ");
    scanf("%d",&D);

    Diferenca = A * B - C * D;

    printf("DIFERENCA = %d\n", Diferenca);

    return 0;
}