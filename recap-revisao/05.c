// Criar uma matriz 3X3, contendo números inteiros, e armazene a soma de
// cada linha dentro de um vetor.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Declaração variáveis
    int matriz[3][3], vet[3], cont = 0;

    //Função que zera o clock do processador
    srand(time(NULL));

    //Popular matriz
    printf("Informe 3 valores para o vetor A: \n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matriz[i][j] = rand() % 10;

    //Imprime a matriz inteira
    printf("Vetor A: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf(" %d ", matriz[i][j]);
    }

    //Faz a soma de cada linha
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cont += matriz[i][j];
        }
        vet[i] = cont;

        cont = 0;
    }

    printf("\n\nSoma de cada linha: \n");

    //Imprime o vetor
    for (int i = 0; i < 3; i++)
    {
        printf(" %d \n", vet[i]);
    }
}