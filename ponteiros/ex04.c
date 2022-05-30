// Crie um programa que contenha uma função que permita passar por parâmetro dois
// números inteiros A e B. A função deverá calcular a soma entre estes dois números e
// armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá
// modificar o valor do primeiro parâmetro. Imprima os valores atualizados de A e B na
// função principal.

#include <stdio.h>
#include <stdlib.h>

int enderecMaior(int *ptrA, int *ptrB)
{
    *ptrA += *ptrB;
}

int main()
{

    int a;
    int b;

    printf("Digite um valor inteiro para variavel A:\n");
    scanf("%d", &a);
    printf("Digite um valor inteiro para variavel B:\n");
    scanf("%d", &b);

    enderecMaior(&a, &b);

    printf("Valor de A e B respectivamente: %d, %d\n", a, b);

    system("pause");
}