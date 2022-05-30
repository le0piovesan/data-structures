// Escreva um programa que declare um inteiro, um real e um char, e ponteiros para cada
// um deles. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada
// variável usando os ponteiros. Imprima os valores das variáveis antes e após a
// modificação.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 27;
    float y = 27.80;
    char z = 'A';

    int *ptrX;
    float *ptrY;
    char *ptrZ;

    ptrX = &x;
    ptrY = &y;
    ptrZ = &z;

    printf("Conteudo da variavel X: %d\n", x);
    printf("Conteudo da variavel Y: %.2f\n", y);
    printf("Conteudo da variavel Z: %c\n", z);

    *ptrX = 50;
    *ptrY = 50.20;
    *ptrZ = 'B';

    printf("Conteudo da variavel para onde o ponteiro X aponta: %d\n", *ptrX);
    printf("Conteudo da variavel para onde o ponteiro Y aponta: %.2f\n", *ptrY);
    printf("Conteudo da variavel para onde o ponteiro Z aponta: %c\n", *ptrZ);

    system("pause");
}