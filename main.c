#include <stdio.h>
#include <stdlib.h>

int main () {

  char nome[10];
  double Sal, Ven, Total;

  printf("Qual seu nome?: ");
  scanf("%s",nome);

  printf("Seu nome é: %s\n", nome);

  printf("Qual seu salário?: ");
  scanf("%lf",&Sal);
  printf("Qal o total de vendas no mes?: ");
  scanf("%lf",&Ven);
  
  Total = Sal + (Ven * 0.15);

  printf("Total = R$ %.2lf\n", Total);

    return 0;
}