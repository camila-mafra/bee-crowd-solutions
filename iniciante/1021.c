#include <stdio.h>
#include <stdlib.h>

int main () {
    double N;
    int n100, n50, n20, n10, n5, n2, n1, n050, n025, n010, n005, n001;

    printf("Qual a quantidade de dinheiro?: ");
    scanf("%lf",&N);

    n100 = N / 100;
    N = N - (n100 * 100);

    n50 = N / 50;
    N = N - (n50 * 50);

    n20 = N / 20;
    N = N - (n20 * 20);

    n10 = N / 10;
    N = N - (n10 * 10);

    n5 = N / 5;
   N = N - (n5 *5);

    n2 = N / 2;
   N = N - (n2 * 2);

    n1 = N / 1;
    N = N - (n1 * 1);

    n050 = N / 0.50;
    N = N - (n050 * 0.50);

    n025 = N / 0.25;
    N = N - (n025 * 0.25);

    n010 = N / 0.10;
    N = N - (n010 * 0.10);

    n005 = N / 0.05;
    N = N - (n005 * 0.05);

    n001 = N / 0.01;
    N = N - (n001 * 0.01);




   printf("NOTAS:\n");
    printf("%d nota (s) de R$ 100,00\n", n100);
    printf("%d nota (s) de R$ 50,00\n", n50);
    printf("%d nota (s) de R$ 20,00\n", n20);
    printf("%d nota (s) de R$ 10,00\n", n10);
    printf("%d nota (s) de R$ 5,00\n", n5);
    printf("%d nota (s) de R$ 2,00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda (s) de R$ 1,00\n", n1);
    printf("%d moeda (s) de R$ 0.50\n", n050);
    printf("%d moeda (s) de R$ 0.25\n", n025);
    printf("%d moeda (s) de R$ 0.05\n", n005);
    printf("%d moeda (s) de R$ 0.01\n", n001);
    

    return 0;
}