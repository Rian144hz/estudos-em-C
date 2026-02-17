#include <stdio.h>
int main()
{
    int vet[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor %d do seu vetor:", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("\nPrintando em ordem digitada!\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", vet[i]);
    }
}
