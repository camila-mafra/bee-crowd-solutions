#include <stdio.h>
#include <stdlib.h>

int main () {

    int quantidade, codigo, cachorroQuente=1,
        xSalada=2,
        xBacon=3,
        torradaSimples=4,
        refrigerante=5;

    double total;

        

    printf("Digite o codigo do item e após a quantidade: ");
    scanf("%d %d",&codigo ,&quantidade);
    

    if (codigo == 1) {
        total = 4.00 * quantidade;
    } else if (codigo == 2) {
        total = 4.50 * quantidade;
    } else if (codigo == 3) {
        total = 5.00 * quantidade;
    } else if (codigo == 4) {
        total = 2.00 * quantidade;
    } else if (codigo == 5) {
        total = 1.50 * quantidade;
    }

    printf("Total: %.2lf\n", total);

    return 0;
}