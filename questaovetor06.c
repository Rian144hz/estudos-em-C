#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    srand(time(NULL));
    int vetor[10];
    int temp = 0;

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 10;
        printf("%d\n", vetor[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        temp = vetor[i];
        vetor[i] = vetor[9 - i];
        vetor[9 - i] = temp;
    }

    printf("\n vetor invertido!\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vetor[i]);
    }
}