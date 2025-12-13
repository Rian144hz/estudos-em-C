#include <stdio.h>
int main(void)
{
    int x = 0, a = 0, b = 0, c = 0, d = 0, e = 0;
    x = a + b * c;
    x = (a + b) * c;
    x = a * b % c;
    x = a * (b % c);
    x = (a + b * c) / b + c / 2;
    x = (a - b * c) * (3 * a - (d % e));
}