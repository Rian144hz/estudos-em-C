#include <stdio.h>
void main()
{
    int sucessor = 1;
    int numero = 0;

    printf("Digite algum número: ");
    scanf(" %d", &numero);

    sucessor = sucessor + numero;

    printf("O número digitado foi %d \n", numero);
    printf("O sucessor de %d é: %d", numero, sucessor);
}