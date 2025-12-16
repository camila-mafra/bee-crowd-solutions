#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    double A, B, C, triangulo, circulo, trapezio, quadrado, retangulo, pi = 3.14159;

    printf("Escolha o valor de A: ");
    scanf("%lf",&A);
    printf("Escolha o valor de B: ");
    scanf("%lf",&B);
    printf("Escolha o valor de C: ");
    scanf("%lf",&C);

    triangulo = (A * C) / 2;
    circulo = pi * pow(C, 2);
    trapezio = ((A + B) * C)/2;
    quadrado = B * B;
    retangulo = A * B;

    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("Retangulo: %.3lf\n", retangulo);
    

    return 0;
}