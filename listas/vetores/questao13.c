#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
    srand(time(NULL));
    int vetor[10];
    int repete = 0;
    int i = 0;
    int j =0;
    for (int i = 0; i < 10; i++){
        vetor[i] = rand() % 10;
        printf("%d\n", vetor[i]);
        
    }
    for (int i = 0; i < 10; i++){
       repete = 0;
       for (int j = 0; j < 10; j++){
            if (vetor[i]==vetor[j]){
            repete++;
                
            }
            if (vetor[i]==vetor[j]){
                printf("O valor %d se repete %d vezes\n",vetor[i],repete);
            }
            
            
       }
       
    }
    
       
    
}