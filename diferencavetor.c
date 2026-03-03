#include <stdio.h>
int existe(int vetor[], int tam, int valor){
    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] == valor)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{

    int vetora[50], vetorb[50], vetorc[50];
    int numberA, numberB, numberC = 0;

    // reanding size vetor A.
    do{
        printf("Digite o tamanho do vetor A (máx 50):");
        scanf("%d", &numberA);

    } while (numberA < 1 || numberA > 50);

    // reanding the numbers vetor A(no repetion)
    for (int i = 0; i < numberA; i++){
        int valor;
        printf("Digite o valor[%d] do vetor A:", i + 1);
        scanf("%d",&valor);

        while (existe(vetora, i, valor)){
            printf("Números iguais, digite outro!");
            scanf("%d", &valor);
        }
        vetora[i] = valor;
    }
    // reanding size vetor B.
    do
    {
        printf("Digite o tamanho do vetor B (máx 50):");
        scanf("%d", &numberB);

    } while (numberB < 1 || numberB > 50);

    // reanding the numbers vetor B(no repetion)
    for (int i = 0; i < numberB; i++){
        int valor;
        printf("Digite o valor[%d] do vetor B:", i + 1);
        scanf("%d", &valor);

        while (existe(vetorb, i, valor)){
            vetorb[i] = valor;
            printf("Números iguais, digite outro!");
            scanf("%d",&valor);
        }
        vetorb[i] = valor;
    }
    for (int i = 0; i < numberA; i++){
       if (!existe(vetorb,numberB,vetora[i])){
       vetorc[numberC] = vetora[i];
       numberC++;

       
       
       }
       printf("\nDiferça dos vetores A e B:\n");
    for (int i = 0; i < numberC; i++) {
        printf("%d",vetorc[i]);
    }

    return 0;

       
    }
}
    