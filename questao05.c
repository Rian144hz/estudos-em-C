#include <stdio.h>
int contarDigitos(int n)
{
    if (n < 10)
    {
        return 1;
    }
    else
    {
        return 1 + contarDigitos(n / 10);
    }
}
int main()
{
    int numero;
    printf("Digite um número p saber quantos caractres ele tem: ");
    scanf("%d", &numero);

    printf("A quantidade de caracteres è: %d",contarDigitos(numero));

    return 0;
}