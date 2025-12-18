#include <stdio.h>
void main()
{
    int idade = 0;
    int ano = 365;
    int dias = 0;

    printf("Qual sua idade: ");
    scanf("%d", &idade);
    dias = idade * 365 + (idade / 4);

    printf("Você já viveu %d dias: ", dias);
}