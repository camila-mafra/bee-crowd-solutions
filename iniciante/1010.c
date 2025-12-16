#include <stdio.h>
#include <stdlib.h>

int main () {
    int Cod1, Num1, Cod2, Num2;
    double Valor1, Valor2, Total;

    printf("Qual o codigo da peca?: ");
    scanf("%d",&Cod1);
    printf("Qual o numero de pecas?: ");
    scanf("%d",&Num1);
     printf("Qual o valor unitario da peca?: ");
    scanf("%lf",&Valor1);

     printf("Qual o codigo da peca?: ");
    scanf("%d",&Cod2);
    printf("Qual o numero de pecas?: ");
    scanf("%d",&Num2);
     printf("Qual o valor unitario da peca?: ");
    scanf("%lf",&Valor2);
    
    Total = (Num1 * Valor1)+ (Num2 * Valor2);
    printf("VALOR A PAGAR: R$ %.2lf\n", Total);

    return 0;
}