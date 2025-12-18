#include <stdio.h>
void main()
{
    int numero = 0;
    int adicional = 10;
    printf("Digite algum número: ");
    scanf(" %d", &numero);
    adicional = adicional + numero;

    printf("O número digitado foi: %d \n", numero);
    printf("Com o adicional de 10 ficou: %d", adicional);
}