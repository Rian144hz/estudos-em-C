#include <stdio.h>
#include <string.h>

struct aluno
{
    int cpf;
    char nome[50];
    char curso[30];
    float media1;
    float media2;
};
int main()
{
    float mediaTotal = 0.0;
    struct aluno aluno1;

    printf("Digite seu cpf: ");
    scanf("%d", &aluno1.cpf);
    printf("Digite seu nome: ");
    scanf("%s", &aluno1.nome);
    printf("Digite seu curso: ");
    scanf("%s", &aluno1.curso);
    printf("Digite sua media1: ");
    scanf("%f", &aluno1.media1);
    printf("Digite sua media2: ");
    scanf("%f", &aluno1.media2);
    mediaTotal = (aluno1.media1 + aluno1.media2) / 2;

    
    
    
    printf("\n===============================================\n");
    printf("\nCPF ALUNO:%d", aluno1.cpf);
    printf("\nNOME ALUNO:%s", aluno1.nome);
    printf("\nCURSO ALUNO:%s", aluno1.curso);
    printf("\nMEDIA1 ALUNO:%2.f", aluno1.media1);
    printf("\nMEDIA2 ALUNO:%2.f", aluno1.media2);
    printf("\nMEDIA ALUNO:%2.f", mediaTotal);
    printf("\n SITUAÇÃO ALUNO:");

    if (mediaTotal >=7){
       printf("APROVADO");
    }else{
    printf("REPROVADO");
    }


    return 0;
}