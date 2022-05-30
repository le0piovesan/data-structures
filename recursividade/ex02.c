// Implemente uma função recursiva que, dados dois números inteiros x e
// n, calcula o valor de xn

#include <stdio.h>

int pot(int n, int p)
{
    if (n == 0)
        return 1;
    else
        return (n * pot(n, p - 1));
}

int main()
{
    int n, p;

    printf("Digite um numero natural: ");
    scanf("%d", &n);
    scanf("%d", &p);

    printf("Resultado: %d", pot(n, p));

    return 0;
}