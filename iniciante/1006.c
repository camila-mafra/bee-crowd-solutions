#include <stdio.h>
#include <stdlib.h>

int main () {
    double A, B, C, media;

    printf("Qual a primeira nota?: ");
    scanf("%lf",&A);
    printf("Qual a segunda nota?: ");
    scanf("%lf",&B);
    printf("Qual a terceira nota?: ");
    scanf("%lf",&C);
   

    media = (( A * 2) + (B * 3) + (C * 5)) / 10;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}