#include <stdio.h>
#define TAM 5

struct Aluno
{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    int qtd_faltas;
    float media;
};
struct Aluno cadastrarAluno()
{
    struct Aluno a;
    printf("\n======Cadastrar aluno:==========\n");
    printf("\nMatricula: ");
    scanf("%d", &a.matricula);
    printf("Nome:");
    scanf("%s", a.nome);
    printf("Nota1:");
    scanf("%f", &a.nota1);
    printf("Nota2:");
    scanf("%f", &a.nota2);
    printf("Nota3:");
    scanf("%f", &a.nota3);
    printf("Quantidade de faltas:");
    scanf("%d", &a.qtd_faltas);

    printf("\n=========================================\n");
    printf("Aluno %s cadastrado com sucesso!", a.nome);
    printf("\n=========================================\n");
    return a;
}

int main()
{
    struct Aluno aluno[TAM];
    int opcao = 0;
    int cadastrado = 0;
    int maior = 0;
    int menor = 0;
    int maiorFaltas = 0;
    int menorFaltas = 0;

    float mediaAtual = 0.0;
    float mediaMaior = 0.0;
    float mediaMenor = 0.0;
    do
    {

        printf("\nInforme a opção:\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Obter aluno com maior media\n");
        printf("3 - Obter aluno com menor media\n");
        printf("4 - Obter aluno com maior quantidade faltas\n");
        printf("5 -  Obter aluno com menor quantidade faltas\n");
        printf("6 - Listar todos os alunos cadastrados\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 0:
            printf("Encerrando programa....");
            break;
        case 1:
            aluno[cadastrado] = cadastrarAluno();
            cadastrado++;

            break;
        case 2:
            if (cadastrado <= 0)
            {
                printf("\n==========================\n");
                printf("Nenhum aluno cadastrado!");
                printf("\n======================\n");
            }
            else
            {
                maior = 0;
                for (int i = 0; i < cadastrado; i++)
                {
                    mediaAtual = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3;
                    mediaMaior = (aluno[maior].nota1 + aluno[maior].nota2 + aluno[maior].nota3) / 3;
                    if (mediaAtual > mediaMaior)
                    {
                        maior = i;
                    }
                }
                float mediaFinal = (aluno[maior].nota1 + aluno[maior].nota2 + aluno[maior].nota3) / 3;
                printf("\n===========================================\n");
                printf("Aluno com maior média: %s\n", aluno[maior].nome);
                printf("Média: %.2f", mediaFinal);
                printf("\n===========================================\n");
            }
            break;
        case 3:
            if (cadastrado <= 0)
            {
                printf("\n==========================\n");
                printf("Nenhum aluno cadastrado!");
                printf("\n======================\n");
            }
            else
            {
                menor = 0;
                for (int i = 0; i < cadastrado; i++)
                {
                    mediaAtual = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3;
                    mediaMenor = (aluno[menor].nota1 + aluno[menor].nota2 + aluno[menor].nota3) / 3;
                    if (mediaAtual < mediaMenor)
                    {
                        menor = i;
                    }
                }
                float mediaFinal = (aluno[menor].nota1 + aluno[menor].nota2 + aluno[menor].nota3) / 3;
                printf("\n===========================================\n");
                printf("Aluno com menor média: %s\n", aluno[menor].nome);
                printf("Média: %.2f", mediaFinal);
                printf("\n===========================================\n");
            }

            break;
        case 4:
            if (cadastrado <= 0)
            {
                printf("\n==========================\n");
                printf("Nenhum aluno cadastrado!");
                printf("\n======================\n");
            }
            else
            {
                maiorFaltas = 0;
                for (int i = 0; i < cadastrado; i++)
                {
                    if (aluno[i].qtd_faltas > aluno[maiorFaltas].qtd_faltas)
                    {
                        maiorFaltas = i;
                    }
                }
                printf("\n===========================================\n");
                printf("Aluno com maior quntidade de faltas: %s\n", aluno[maiorFaltas].nome);
                printf("Quantidade faltas: %d", aluno[maiorFaltas].qtd_faltas);
                printf("\n===========================================\n");
            }
            break;
        case 5:
            if (cadastrado <= 0)
            {
                printf("\n==========================\n");
                printf("Nenhum aluno cadastrado!");
                printf("\n======================\n");
            }
            else
            {
                menorFaltas = 0;
                for (int i = 0; i < cadastrado; i++)
                {
                    if (aluno[i].qtd_faltas < aluno[menorFaltas].qtd_faltas)
                    {
                        menorFaltas = i;
                        
                    }
                }
                printf("\n===========================================\n");
                        printf("Aluno com menor quntidade de faltas: %s\n", aluno[menorFaltas].nome);
                        printf("Quantidade faltas: %d", aluno[menorFaltas].qtd_faltas);
                        printf("\n===========================================\n");
            }
            break;
        case 6:
            if (cadastrado <= 0)
            {
                printf("\n==========================\n");
                printf("Nenhum aluno cadastrado!");
                printf("\n======================\n");
            }
            else
            {
                for (int i = 0; i < cadastrado; i++)
                {
                    printf("\n======Alunos cadastrados======\n");
                    printf("\nMatricula: %d", aluno[i].matricula);
                    printf("\nNome: %s", aluno[i].nome);
                    printf("\nNota1: %.2f", aluno[i].nota1);
                    printf("\nNota2: %.2f", aluno[i].nota3);
                    printf("\nNota3: %.2f", aluno[i].nota1);
                    printf("\nQuantidade de faltas: %d", aluno[i].qtd_faltas);
                }
            }

            break;
        default:
            printf("Opção inválida.");
            break;
        }
    } while (opcao != 0);

    return 0;
}
