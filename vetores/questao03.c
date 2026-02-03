#include <stdio.h>
#include <stdbool.h>
int main()
{
    int v1 = 0, v2 = 0;
    int vetor1[50];
    int vetor2[50];
    int somaDosvetores[50];

    // PRIMEIRO VETOR
    printf("Digite a quantidade de elementos do primeiro vetor (max 50): ");
    scanf("%d", &v1);

    // SEGUNDO VETOR
    printf("Digite a quantidade de elementos do segundo vetor (max 50): ");
    scanf("%d", &v2);

    while (v1 != v2 || v1>50||v2 > 50){

        if (v1 != v2 || v1 > 50 || v2 > 50)
        {
            printf("As quantidades devem ser iguais e no máximo 50.\n");
            
            // PRIMEIRO VETOR
   printf("Digite a quantidade de elementos do primeiro vetor (max 50): ");
    scanf("%d", &v1);

    // SEGUNDO VETOR
    printf("Digite a quantidade de elementos do segundo vetor (max 50): ");
    scanf("%d", &v2);
        }
        
    }

    // for do primeiro vetor
    for (int i = 0; i < v1; i++)
    {
        printf("Digite o número %d do seu primeiro vetor:", i + 1);
        scanf("%d", &vetor1[i]);
    }
    printf("==============================================\n");

    // for do segundo vetor
    for (int i = 0; i < v2; i++)
    {
        printf("Digite o número %d do seu segundo vetor:", i + 1);
        scanf("%d", &vetor2[i]);
    }
    printf("==============================================\n");

    printf("Terceiro vetor gerado pela soma dos dois!\n");
    for (int i = 0; i < v1; i++)
    {
        somaDosvetores[i] = vetor1[i] + vetor2[i];
        printf("%d\n", somaDosvetores[i]);
    }
}