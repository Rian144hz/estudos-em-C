
#include <stdio.h>
int somatorio(int p)
{
    if (p == 0)
    {
        return 0;
    }
    if (p % 2 == 0)
    {
        return p + somatorio(p - 1);
    }
    else
    {
        return somatorio(p-1);
    }
}
int main()
{
    int p;
    int resultado;
    printf("Digite um número: ");
    scanf("%d", &p);

    resultado = somatorio(p);
    printf("%d", resultado);

    return 0;
}