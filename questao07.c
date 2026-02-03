#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    srand(time(NULL));
    int vetor[10];
    int maior = 0;
    int indice = 0;

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 10;
        printf("%d\n", vetor[i] + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    printf("O maior valor lido é:\n", maior);
    printf("Ele ocorre nas posiçoes");
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] == maior)
        {
            printf("[%d]", i + 1);
        }
    }
}