#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n;
    printf("Digite quantos alunos você irá querer em seu vetor:");
    scanf("%d", &n);
    char nomes[n][50];

    for (int i = 0; i < n; i++)
    {
        printf("Digite o nome número %d:", i + 1);
        scanf("%s", &nomes[i]);
    }
    printf("Nomes digitados!\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", nomes[i]);
    }
    printf("=================================\n");
    printf("Agora em forma contraria!\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%s\n", nomes[i]);
    }

    return 0;
}