#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int numero;
    int resultado;
    printf("Digite um número para ver seu n-ésimo termo:");
    scanf("%d", &numero);

    resultado = fibonacci(numero);
    printf("O resultado é: %d", resultado);
}