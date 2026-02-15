#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int linhasMatriz1;
    int colunasMatriz1;
    int linhasMatriz2;
    int colunasMatriz2;

    printf("Digite a quantidade de linhas da sua  primeira matriz: ");
    scanf("%d", &linhasMatriz1);

    printf("Digite a quantidade de colunas da sua primeira matriz matriz: ");
    scanf("%d", &colunasMatriz1);
    printf("\n===================================================================\n");
    printf("Digite a quantidade de linhas da sua  segunda matriz: ");
    scanf("%d", &linhasMatriz2);

    printf("Digite a quantidade de colunas da sua segunda matriz: ");
    scanf("%d", &colunasMatriz2);

    if (colunasMatriz1 != linhasMatriz2){
        printf("\nNao eh possivel multiplicar essas matrizes!\n");
        return 0;
    }

    int matriz1[linhasMatriz1][colunasMatriz1];
    int matriz2[linhasMatriz2][colunasMatriz2];
    int multiplicacao[linhasMatriz1][colunasMatriz2];

    printf("\nMATRIZ 1!\n");
    for (int i = 0; i < linhasMatriz1; i++){
        for (int j = 0; j < colunasMatriz1; j++){
            matriz1[i][j] = rand() % 10;
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("\nMATRIZ 2!\n");
    for (int i = 0; i < linhasMatriz2; i++)
    {
        for (int j = 0; j < colunasMatriz2; j++)
        {
            matriz2[i][j] = rand() % 10;
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }
    printf("\nMULTIPLICAÇÃO!\n");
    for (int i = 0; i < linhasMatriz1; i++){
        for (int j = 0; j < colunasMatriz2; j++){
        // zera a soma
            multiplicacao[i][j] = 0;
            for (int k = 0; k < linhasMatriz1; k++){

                multiplicacao[i][j] += matriz1[i][k] * matriz2[k][j];
            }
             printf("%d ", multiplicacao[i][j]);
        }
        printf("\n");
    }

    return 0;
}