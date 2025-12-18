#include <stdio.h>
void main()
{
    int idade_dias;
    int anos, dias, meses;
    int resto_dias;
    printf("Qual sua idade em dias:");
    scanf("%d", &idade_dias);
    anos = idade_dias / 365;
    resto_dias = idade_dias % 365;
    meses = resto_dias / 30;
    dias = resto_dias % 30;

    printf("Sua idade expressa em anos, dias e meses: \n");
    printf("Anos: %d\n", anos);
    printf("Meses: %d\n", meses);
    printf("Dias: %d\n", dias);
}