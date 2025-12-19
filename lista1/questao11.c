#include <stdio.h>

void main()
{
    int nota1 = 0, nota2 = 0, nota3 = 0, peso1 = 2, peso2 = 3, peso3 = 5;
    double mediaPonderada = 0.0;

    printf("Qual sua primeira nota: ");
    scanf(" %d", &nota1);
    printf("Qual sua segunda nota: ");
    scanf(" %d", &nota2);
    printf("Qual sua terceira nota: ");
    scanf(" %d", &nota3);

    mediaPonderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("Sua média é \n");
    printf("%f", mediaPonderada);
}