#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    srand(time(NULL));
    int vetor[10];
    int s = 0;
    int diferenca = 0;

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 10;
        printf("%d\n", vetor[i] + 1);
    }

    for (int i = 0; i < 5; i++)
    {
        diferenca = vetor[i] - vetor[9 - i];
        s += diferenca * diferenca;
    }
    printf("Valor de S:%d", s);
}