//Aluno: Leonardo Piovesan

//Reproduzir a sequência de Fibonacci em C usando recursividade.

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int x)
{
    if (x == 0 || x == 1)
        return x;
    else
        return fibonacci(x - 1) + fibonacci(x - 2);
}

int main()
{
    int num;

    printf("Digite a posicao para descobrir o numero de Fibonacci referente a ela: ");
    scanf("%d", &num);

    printf("Fibonacci: %d", fibonacci(num));

    return 0;
}