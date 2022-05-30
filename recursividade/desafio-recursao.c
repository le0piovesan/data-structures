#include <stdio.h>
#include <stdlib.h>

int multRussa(int numA, int numB)
{
    if (numA == 1)
        return 1;
    else
        return ((numA % 2 == 1) + numB) + multRussa((numA / 2), (numB * 2));
}

int main()
{
    int numA, numB;

    printf("Digite um numero para A: ");
    scanf("%d", &numA);

    printf("Digite um numero para B: ");
    scanf("%d", &numB);

    printf("Somatorio: %d", multRussa(numA, numB));

    return 0;
}