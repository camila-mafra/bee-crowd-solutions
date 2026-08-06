#include <stdio.h>
#include <stdlib.h>

int main () {
    int A,B,C, maior, menor, meio;

    printf("Escolhe 3 valores inteiros: ");
    scanf("%d %d %d", &A,&B,&C);
    
    if(A > B && A > C){
        maior = A;
        if(B > C) {
            meio = B;
            menor = C;
         } else {
            menor = B;
            meio = C;
         }
    } else if (B > A && B > C) {
        maior = B;
        if(A > C) {
            meio = A;
            menor = C;
         } else {
            menor = A;
            meio = C;
         }
    } else {
        maior = C;
        if(B > A) {
            meio = B;
            menor = A;
        } else {
            menor = B;
            meio = A;
        }
    }
    printf("\n%d\n %d\n %d\n", maior, meio, menor);
    printf("\n%d\n %d\n %d\n", A, B, C);
    return 0;
}