#include <stdio.h>
int produto(int a, int b){
    if (b == 0){
        return 0;
    }
    else{
        return a + produto(a, b - 1);
    }
}
int main()
{
    int a1, b1;
    printf("Digite a base:");
    scanf("%d", &a1);
    printf("Digite o expoente:");
    scanf("%d", &b1);

    printf("%d", produto(a1, b1));

    return 0;
}