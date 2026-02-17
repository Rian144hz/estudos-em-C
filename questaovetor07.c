#include <stdio.h>
int main()
{
    char alunos[3][30];
    float notas[6];
    float media = 5.0;
         // pega os nomes dos alunos
    for (int i = 0; i < 3; i++){
        printf("Aluno %d: ", i + 1);
        scanf("%s", alunos[i]);
    }
        //pegas as notas 
    for (int i = 0; i < 3; i++){
        printf("Digite sua nota: %s:", alunos[i]);
        scanf("%f", &notas[i]);
    }
    printf("=====================\n");
    //printa as notas dos alunos
    for (int i = 0; i < 3; i++){
        printf("Nota do aluno %s:%2.f\n", alunos[i], notas[i]);
    }
 printf("=====================\n");
    for (int i = 0; i < 3; i++){
        if (notas[i] < media){
            printf("O aluno %s reprovou\n", alunos[i]);
        }
        else
        {
            printf("O aluno %s foi aprovado\n", alunos[i]);
        }
    }

    return 0;
}