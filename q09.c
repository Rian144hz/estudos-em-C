#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int linhasMatriz1;
    int colunasMatriz1;
    int linhasMatriz2;
    int colunasMatriz2;
    do
    {

        printf("Digite a quantidade de linhas da sua  primeira matriz: ");
        scanf("%d", &linhasMatriz1);

        printf("Digite a quantidade de colunas da sua primeira matriz matriz: ");
        scanf("%d", &colunasMatriz1);

        printf("\n===================================================================\n");
        printf("Digite a quantidade de linhas da sua  segunda matriz: ");
        scanf("%d", &linhasMatriz2);

        printf("Digite a quantidade de colunas da sua segunda matriz: ");
        scanf("%d", &colunasMatriz2);

        if (linhasMatriz1 != linhasMatriz2 || colunasMatriz1 != colunasMatriz2)
        {
            printf("Você não digitou duas matriz de mesma ordem!\n");
        }
        if (linhasMatriz1 == linhasMatriz2 && colunasMatriz1 == colunasMatriz2)
        {
            printf("Agora sim! as duas matrizes são de mesma ordem.\n");
        }

    } while (linhasMatriz1 != linhasMatriz2 || colunasMatriz1 != colunasMatriz2);

    int matriz1[linhasMatriz1][colunasMatriz1];
    int matriz2[linhasMatriz2][colunasMatriz2];
    int matriz3[linhasMatriz1][colunasMatriz1];

    printf("\nMatriz 1!\n");
    for (int i = 0; i < linhasMatriz1; i++)
    {
        for (int j = 0; j < colunasMatriz1; j++)
        {
            matriz1[i][j] = rand() % 10;
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 2!\n");
    for (int i = 0; i < linhasMatriz2; i++)
    {
        for (int j = 0; j < colunasMatriz2; j++)
        {
            matriz2[i][j] = rand() % 10;
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\nmatriz 3!\n");
    for (int i = 0; i < linhasMatriz1; i++)
    {
        for (int j = 0; j < colunasMatriz1; j++)
        {

            if (j > i)
            {
                matriz3[i][j] = matriz1[i][j];
            }
            else if (j < i)
            {
                matriz3[i][j] = matriz2[i][j];
            }

            else
            {
                if (i % 2 == 0)
                {
                    matriz3[i][j] = matriz1[i][i];
                }
                else

                    matriz3[i][j] = matriz2[i][i];
            }

            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;
}