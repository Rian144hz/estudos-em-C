#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    float alunos[3][3];
    float nota1;
    float nota2;
    float nota3;
    float soma = 0;
    float somaTotal = 0;
    float media = 0.0;
    float mediaTurma = 0.0;
    float mediaPeriodo = 0.0;
    float somaPeriodo = 0.0;
    for (int i = 0; i < 3; i++)
    {

        soma = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("Digite sua nota %d:", j + 1);
            scanf("%f", &alunos[i][j]);
            soma += alunos[i][j];
        }
        media = soma / 3;
        printf("\n=========================================\n");
        printf("Media do aluno %d: %.2f\n", i + 1, media);
    }

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            somaTotal += alunos[i][j];
        }
    }
    mediaTurma = somaTotal / 9;
    printf("Media da turma: %.2f\n", mediaTurma);
    for (int j = 0; j < 3; j++)
    {
        somaPeriodo = 0;

        for (int i = 0; i < 3; i++)
        {
            somaPeriodo += alunos[i][j];
        }
        mediaPeriodo = somaPeriodo / 3;
        printf("Media do periodo %d: %.2f\n", j + 1, mediaPeriodo);
        
    }

    printf("\n\t1P\t2P\t3P\n");

    for (int i = 0; i < 3; i++){
        printf("Aluno %d\t", i + 1);

        for (int j = 0; j < 3; j++){
            printf("%.1f\t", alunos[i][j]);
        }

        printf("\n");
    }
}