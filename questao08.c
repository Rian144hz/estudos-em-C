#include <stdio.h>
int binario(int n)
{
    if (n == 1){
    printf("%d ", n % 2 );
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        
        return binario(n / 2);
    }
}
int main()
{
    int numero;
    printf("Digite um número para convertelo em binario: ");
    scanf("%d", &numero);

    printf("%d", binario(numero));
}