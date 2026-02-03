#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int vetor[30];

    for (int i = 0; i < 30; i++){
        vetor[i] = rand() % 20;
        printf("%d ", vetor[i]);
    }

    return 0;
}