#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int matriz[4][4];
    printf("\nMATRIZ DIGITADA!\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matriz[i][j] = rand() % 10;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nACIMA DA DIAGONAL PRINCIPAL!\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j >=  i)
            {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
}