#include <stdio.h>

int soma(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + soma(n - 1);
    }
}
int main()
{
    int numero;
    int resultado;
    printf("Digite o valor de n: ");
    scanf("%d", &numero);

    resultado = soma(numero);

    printf("%d", resultado);

    return 0;
}