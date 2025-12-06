#include <stdio.h>
#include <stdlib.h>

int main () {
    double A, B, media;

    printf("Qual a primeira nota do aluno?: ");
    scanf("%lf",&A);
    printf("Qual a segunda nota do aluno?: ");
    scanf("%lf",&B);

    media = ((A * 3.5) + (B * 7.5)) / 11; 

    printf("MEDIA = %.5lf\n", media);

    return 0;
}