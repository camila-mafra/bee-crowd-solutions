#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b, c, maiorAB, maior;

    printf("Escolha um numero: ");
    scanf("%d",&a);
     printf("Escolha um numero: ");
    scanf("%d",&b);
     printf("Escolha um numero: ");
    scanf("%d",&c);

    maiorAB = (a + b + abs(a-b)) / 2;
    
    if (maiorAB > c) {
        printf("%d eh o maior\n", maiorAB);
    } else {
        printf("%d eh o maior\n", c);

    }

    return 0;
}