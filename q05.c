#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int matriz[3][3];
    float divisao = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 100;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nDivisão!\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            divisao = (float)matriz[i][j] / matriz[i][i];
            printf("%f ", divisao);
        }
        printf("\n");
    }

    return 0;
}




