#include <stdio.h>
#include <stdlib.h>

int main () {
    char nome[20];
    double Sal, Com, Total;

    printf("Qual seu nome?: ");
    scanf("%s", nome);
    printf("Qual seu salario?: ");
    scanf("%lf",&Sal);
    printf("Qual o total de vendas efetuadas no mes?: ");
    scanf("%lf",&Com);

    Total = Sal + (Com * 0.15);

    printf("Vendedor: %s\n", nome);

    printf("TOTAL = R$ %.2lf\n", Total);


    return 0;
}
