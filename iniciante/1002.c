#include <stdio.h>
#include <stdlib.h>

int main() {
    double area, n = 3.14159, raio;

    printf("Qual o valor do raio do circulo?: ");
    scanf("%lf",&raio);

    area = n * (raio * raio);

    printf(" A = %.4lf\n", area);



    return 0;

}