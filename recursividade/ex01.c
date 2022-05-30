//Crie uma função recursiva que receba um número inteiro positivo N e
//calcule o somatório dos números de 1 a N

#include <stdio.h>
#include <stdlib.h>

int funcRecursiva(int x)
{
    if (x == 1)
        return 1;
    else
        return x + funcRecursiva(x - 1);
}

int main()
{
    int num;

    printf("Digite um numero natural: ");
    scanf("%d", &num);

    printf("Somatorio: %d", funcRecursiva(num));

    return 0;
}