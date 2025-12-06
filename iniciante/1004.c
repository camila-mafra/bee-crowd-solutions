#include <stdio.h>
#include <stdlib.h>

int main () {
    int A, B, PROD;

    printf("Digite um numero inteiro: ");
    scanf("%d",&A);
    printf("Digite outro numero inteiro: ");
    scanf("%d",&B);

    PROD = A * B;

    printf("PROD = %d\n", PROD);

    return 0;
}