#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    srand(time(NULL));
    int vetorA[10];
    int vetorB[10];
    int a = 10;
    int b = 10;

    printf("Vetor A!\n");
    for (int i = 0; i < 10; i++)
    {
        vetorA[i] = rand() % 10;
        printf("%d\n", vetorA[i] + 1);
    }
    printf("========================================\n");
    printf("Vetor B!\n");
    for (int i = 0; i < 10; i++)
    {
        vetorB[i] = rand() % 10;
        printf("%d\n", vetorB[i] + 1);
    }

    int achou = 0;
    for (int i = 0; i < b; i++)
    {

        for (int j = 0; j < a; j++)
        {
            if (vetorB[j] == vetorA[i])
            {
                achou = 1;
                break;
            }
        }
    }
    if (achou == 1)
    {
        printf("Ocorreu no conjunto A");
    }
    else
    {
        printf(" NÃO ocorreu no conjunto A");
    }
}
