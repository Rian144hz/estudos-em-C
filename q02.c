#include <stdio.h>
int main(){
    int linhas;
    int colunas;
    do{

        printf("Digite a quantidade de linhas da sua matriz: ");
        scanf("%d", &linhas);

        printf("Digite a quantidade de colunas da sua matriz: ");
        scanf("%d", &colunas);

        if (linhas != colunas){
            printf("Você não digitou uma matriz quadrada, tente novamente!\n");
        }
        if (linhas == colunas){
            printf("Você digitou uma matriz quadrada!\n");
        }

    } while (linhas != colunas);

    int matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++){
       for (int j = 0; j < colunas; j++){
       printf("Digite os números da sua matriz [%d][%d]:",i,j);
       scanf("%d",&matriz[i][j]);
       }
       
    }

    
    printf("\nAPENAS A DIAGONAL PRINCIPAL!\n");
    for (int i = 0; i < linhas; i++){
        
            printf("%d ",matriz[i][i]);
        
        
    }
    
    

    return 0;
}