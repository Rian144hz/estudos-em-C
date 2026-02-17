#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int vetor[10];
    for (int i = 0; i < 10; i++)
    {
        vetor[i] = rand() % 10;
        printf("%d ", vetor[i]);
    }
    printf("\n=======================\n");
    printf("Apenas pares!\n");
    for (int i = 0; i < 10; i++){
        if (vetor[i] % 2 == 0){
            printf("%d ", vetor[i]);
        }
    }
}