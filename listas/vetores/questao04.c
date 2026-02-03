#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    srand(time(NULL));
    int vetor[100];
    int soma = 0;
    float media = 0.0;

    for (int i = 0; i < 100; i++)
    {
        vetor[i] = rand() % 10;
        printf("%d\n", vetor[i]);
        soma += vetor[i];
    }
    printf("==========================\n");
    media = soma / 100.0;

    printf("Essa aqui é a média[%2.f]\n", media);

    printf("=======================\n");
    printf("Números acima da média!\n");
    for (int i = 0; i < 100; i++)
    {
        if (vetor[i] > media)
        {
            printf("%d\n", vetor[i]);
        }
    }
}