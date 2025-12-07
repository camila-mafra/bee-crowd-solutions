#include <stdio.h>
#include <stdlib.h>

int main () { 
    int num, horas;
    double valor, salario;

    printf("Qual seu numero de funcionario?: ");
    scanf("%d",&num);
    printf("Qual seu numero de horas trabalhadas?: ");
    scanf("%d",&horas);
    printf("Qual o valor que recebe por hora?: ");
    scanf("%lf",&valor);

    salario = horas * valor;

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}