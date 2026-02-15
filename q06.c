#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int matriz[3][3];
    printf("\nMATRIZ DIGITADA!\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 10;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nABAIXO DA DIAGONAL PRINCIPAL!\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j <  i)
            {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
}