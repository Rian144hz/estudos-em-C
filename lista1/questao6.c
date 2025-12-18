#include <stdio.h>
void main()
{
    int numero = 0;
    int adicional = 11;
    printf("Digite algum número: ");
    scanf(" %d", &numero);
    adicional = numero + adicional;
    printf("O número digtado foi: %d \n", numero);
    printf("Com adicional ficou: %d", adicional);
}




