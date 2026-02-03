#include <stdio.h>
int main()
{
    int a;
    int b;
    int vetora[10];
    int vetorb[10];
    int vertorOrdenado[20];
    int k = 0;

    printf("Digite quantos números seu primeiro vetor deseja ter(máximo 50):");
    scanf("%d", &a);

    printf("===========================================\n");

    for (int i = 0; i < a; i++)
    {
        printf("Digite o número %d do seu vetor:", i + 1);
        scanf("%d", &vetora[i]);
    }

    printf("Digite quantos números seu segundo  vetor deseja ter(máximo 50): ");
    scanf("%d", &b);

    printf("===========================================\n");

    for (int j = 0; j < b; j++)
    {
        printf("Digite o número %d do seu vetor:", j + 1);
        scanf("%d", &vetorb[j]);
    }
    for (int i = 0; i < a; i++)
    {
        vertorOrdenado[k] = vetora[i];
        k++;
    }
    for (int i = 0; i < b; i++){
        vertorOrdenado[k] = vetorb[i];
        k++;
    }

   for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < k - 1 - i; j++) {
            if (vertorOrdenado[j] > vertorOrdenado[j+1]) {
                int temp = vertorOrdenado[j];
                vertorOrdenado[j] = vertorOrdenado[j+1];
                vertorOrdenado[j+1] = temp;
            }
        }
    }

     printf("\nVetor final ordenado:\n{ ");
    for (int i = 0; i < k; i++) {
        printf("%d ", vertorOrdenado[i]);
    }
    printf("}\n");

    return 0;
}
    
