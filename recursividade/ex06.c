// Escreva uma função recursiva que calcule a soma dos dígitos de um
// número inteiro. Por exemplo, se a entrada for 123, a saída deverá ser
// 1+2+3 = 6.

#include <stdio.h>

int soma(int num)
{
    int a, b;
    a = num % 10;
    b = (num - a) / 10;
    if (b <= 0)
    {
        return a;
    }
    else
    {
        return a + soma(b);
    }
}
int main()
{
    int num;
    printf("informe um numero\n");
    scanf("%d", &num);
    printf("a soma dos digitos do numero eh %d\n", soma(num));
}
