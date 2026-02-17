#include <stdio.h>
int main()
{
    int a;
    int b;
    int vetora[10];
    int vetorb[10];

    int vetorab[20];
    int i = 0;
    int j = 0;
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

    while (i < a && j < b)
    {
        if (vetora[i] <= vetorb[j])
        {
            vetorab[k++] = vetora[i++];
        }
        else if (vetorb[j] <= vetora[i])
        {
            vetorab[k++] = vetorb[j++];
        }
        else
        {
            vetorab[k++] = vetora[i];
            i++;
            j++;
        }
    }
    while (i < a)
    {
        vetorab[k++] = vetora[i++];
    }
    while (j < b)
    {
        vetorab[k++] = vetorb[j++];
    }

    printf("Intersção de A e B:\n{");
    for (int i = 0; i < k; i++)
    {
        printf(" %d", vetorab[i]);
    }
    printf("}");
}