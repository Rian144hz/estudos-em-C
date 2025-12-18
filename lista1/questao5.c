#include <stdio.h>
void main()
{
    int numero = 0;
    int resto = 0;
    printf("Digite algum número: ");
    scanf(" %d", &numero);
    resto = numero % 3;

    printf("O resto da divisao de %d é: %d", numero, resto);
}