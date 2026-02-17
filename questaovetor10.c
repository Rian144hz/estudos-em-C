#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int vetorA[10];
    int vetorB[10];

     printf("Vetor A!\n");
    for (int i = 0; i < 10; i++){
        vetorA[i] = rand() % 10;
        printf("%d \n", vetorA[i]);
    }
     printf("Vetor b!\n");
    for (int j = 0; j < 10; j++){
        vetorB[j] = rand() % 10;
        printf("%d\n", vetorB[j]);
    }
    printf("Em ordem inversa!\n");
    for (int j = 10 - 1; j >= 0; j--)
    {
        printf("%d \n", vetorB[j]);
    }

    return 0;
}