#include <stdio.h>
#include <stdlib.h>

int main () {
    double N1, N2, N3, N4, media, alunoExame, mediaFinal;

    printf("Quais as notas do aluno?");
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 *1)) / 10;
    printf("Media: %.1lf\n", media);

    if (media >= 7){
        printf("Aluno Aprovado");

    } else if (media < 5){
        printf("Aluno Reprovado"); 

    } else{
        printf("Aluno em exame\n");
        double notaExame, mediaFinal;
        printf("Qual a nota do exame? ");
        scanf("%lf", &notaExame);
        printf("Nota do exame: %.1lf\n", notaExame);
        mediaFinal = (media + notaExame) / 2;
        if (mediaFinal >=5) {
            printf("Aluno Aprovado\n");
        } else {
            printf("Aluno Reprovado\n");
        }
        
        printf("Media final: %.1lf/n", mediaFinal);
    }

  


    return 0;
}