#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    srand(time(NULL));
    int vetorA[100];
    int vetorB[100];
    int alternado[200];
    int k = 0;

    printf("Vetor A!\n");
    for (int i = 0; i < 100; i++)
    {
        vetorA[i] = rand() % 10;
        printf("%d\n", vetorA[i]);
    }
    printf("Vetor B!\n");
    for (int j = 0; j < 100; j++)
    {
        vetorB[j] = rand() % 10;
        printf("%d\n", vetorB[j]);
    }
    printf("===================================\n");
    printf("Vetor com valores alternados!\n");

    for (int i = 0; i < 100; i++){
        alternado[k++] = vetorA[i];
        alternado[k++] = vetorB[i];
    }

            for (int i = 0; i < 200; i++){
                printf("[%d] %d\n", i, alternado[i]);
            }
}