#include <stdio.h>
#include <stdlib.h>

int main () {
    double A, B, C, perimetro, area;

    printf("Digite 3 valores reais: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    if (A + B > C && A + C > B && B + C > A){
        perimetro = A + B + C;
        printf("Perimetro = %.2lf", perimetro);
    } else {
        area = ((A + B) * C) / 2;
        printf("Area = %.2lf", area);
    }


    return 0;
}