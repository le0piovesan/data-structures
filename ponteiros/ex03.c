// Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
// teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

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

    int x;
    int y;

    printf("Digite um valor inteiro para variavel X:\n");
    scanf("%d", &x);
    printf("Digite um valor inteiro para variavel Y:\n");
    scanf("%d", &y);

    enderecMaior(&x, &y);

    system("pause");
}