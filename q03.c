#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int matriz[3][3];
    int matriz2[3][3];

    printf("\nMatriz printada de forma normal!\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 10;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz printada de forma contraria!\n");
    for (int i = 3 - 1; i >= 0; i--)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz2[i][j] = matriz[i][j];
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}