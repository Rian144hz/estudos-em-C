#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int vetor[10];
    int crescente = 0;

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 20;
        printf("%d ", vetor[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (vetor[i] > vetor[j])
            {
                crescente = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = crescente;
            }
        }
    }
    printf("\nNúmeros em ordem crescente!\n{");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("}");

    return 0;
}