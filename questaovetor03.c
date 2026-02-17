#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int vetor[5];
    printf("Vetor printado!\n");
    for (int i = 0; i < 5; i++){
        vetor[i] = rand() % 10;
        printf("%d\n", vetor[i]);
    }
    printf("Vetor inverso printado!\n");
    for (int i = 5-1; i >=0; i--){
     printf("%d\n", vetor[i]);
        
    }
    

    return 0;
}