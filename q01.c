#include <stdio.h>
int main()
{
    int linhas;
    int colunas;

    printf("Digite a quantidade de linhas da sua matriz: ");
    scanf("%d", &linhas);

    printf("Digite a quantidade de colunas da sua matriz: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("Digite os números da sua matriz[%d][%d]:", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nMATRIZ DIGITADA PRINTADA!\n");
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}