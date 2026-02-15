#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int matriz[4][4];
    int soma = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matriz[i][j] = rand() % 10;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n SOMA PRINTADA!\n");

    for (int i = 0; i < 4; i++)
    {
        soma = 0;
        for (int j = 0; j < 4; j++)
        {
            soma += matriz[i][j];
        }
        printf("%d \n", soma);
    }

    return 0;
}