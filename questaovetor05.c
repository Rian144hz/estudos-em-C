#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int matriz[3][3];
    int vetor[3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }
    printf("Matriz printada!\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("==========================\n");
    printf("Vetor printado!\n");
    for (int i = 0; i < 3; i++)
    {
        vetor[i] = rand() % 10;
        printf("%d\n", vetor[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = vetor[i] * matriz[i][j];
        }
    }
 printf("==========================\n");
    printf("Multiplicação!\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}