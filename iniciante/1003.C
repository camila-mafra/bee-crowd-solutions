#include <stdio.h>
#include <stdlib.h>

int main () {
    int A, B, soma;

    printf("Escreva um numero inteiro: ");
    scanf("%d",&A);
    printf("Escreva outro numero inteiro: ");
    scanf("%d",&B);

    soma = A + B;

    printf("SOMA = %d\n", soma);

    return 0;
}
