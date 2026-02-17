#include <stdio.h>
int main()
{
    char palavras[3][30];
    for (int i = 0; i < 3; i++)
    {
        printf("Digite sua palavra %d:", i + 1);
        scanf("%s", &palavras[i]);
    }
    printf("Palavras digitadas!\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", palavras[i]);
    }

    printf("Palavras em ordem inversa!\n");
    for (int i = 3 - 1; i >= 0; i--)
    {
        printf("%s\n", &palavras[i]);
    }

    return 0;
}