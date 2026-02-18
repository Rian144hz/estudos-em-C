#include <stdio.h>
int imprimirnumeros(int n)
{
    printf("%d\n", n);
     if (n == 0)
    {
        return 0;
    }
    else
    {
        return imprimirnumeros(n - 1);
    }
}
int main()
{
    int numero;
    printf("Digite seu nÚmero: ");
    scanf("%d", &numero);

     imprimirnumeros(numero);
    

    return 0;
}