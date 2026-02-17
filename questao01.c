#include <stdio.h>

int fatorial(int numero){
    if (numero == 0){
        return 1;
    }
    else
    {
        return numero * fatorial(numero - 1);
    }
}
int main(){
int n;
int resultado;
printf("Digite um número para saber seu fatorial: ");
scanf("%d",&n);

resultado = fatorial(n);

printf("O fatorial é: %d\n",resultado);








return 0;
}