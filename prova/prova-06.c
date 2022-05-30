#include <stdio.h>
#include <stdlib.h>

int funcRecursiva(int n, int aux)
{
    if (aux > n)
        return 0;
    else
        return aux + funcRecursiva(n, aux + 2);
}

int main()
{
    int n, aux = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("Soma de todos os numeros inteiros pares de zero ate o numero informado: %d", funcRecursiva(n, aux));

    return 0;
}