#include <stdio.h>
void main()
{
    int antecessor = -1;
    int numero = 0;

    printf("Digite algum número: ");
    scanf(" %d", &numero);

    antecessor = antecessor + numero;

    printf("O número digitado foi %d \n", numero);
    printf("O antecessor de %d é: %d", numero, antecessor);
}