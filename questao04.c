#include <stdio.h>
int potencia(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * potencia(a, b - 1);
    }
}
int main()
{
    int a1, b1, resultado;

    printf("Digite a base:");
    scanf("%d",&a1);
    printf("Digite o expoente:");
    scanf("%d",&b1);

    resultado = potencia(a1,b1);

    printf("%d",resultado);


    return 0;
}