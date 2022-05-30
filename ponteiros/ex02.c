// Escreva um programa que contenha duas variáveis inteiras. Compare o endereço de
// ambas e exiba o maior.

#include <stdio.h>
#include <stdlib.h>

int enderecMaior(int *ptrX, int *ptrY)
{
    if (*ptrX > *ptrY)
        printf("Conteudo da variavel MAIOR para onde o ponteiro X aponta: %d\n", *ptrX);
    else
        printf("Conteudo da variavel MAIOR para onde o ponteiro Y aponta: %d\n", *ptrY);
}

int main()
{

    int x = 27;
    int y = 50;

    printf("Conteudo da variavel X: %d\n", x);
    printf("Conteudo da variavel Y: %d\n", y);

    enderecMaior(&x, &y);

    system("pause");
}