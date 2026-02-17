#include <stdio.h>
#include <string.h>
int main(){
    char palavras[2][30];
    int iguais = 0;
    for (int i = 0; i < 2; i++){
        printf("Digite sua palavra %d:", i + 1);
        scanf("%s", &palavras[i]);
    }
    for (int i = 0; i < 2; i++){
       
        for (int j = 0; j < 2; j++){
            if (strchr(palavras[i],palavras[j] == 0)){
                printf("Elas são iguais!");
            }else if (strcmp(palavras[i],palavras[j] == 1)){
                 printf("Elas NÃO são iguais!");
            }
            
            
            
        }
        
        
    }
    

    return 0;
}