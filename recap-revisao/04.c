// Faça um programa que leia uma matriz numérica 5 X 5 e calcule a soma
// dos elementos da diagonal principal. Mostrar na tela a matriz original e a
// soma

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Declaração variáveis
    int matriz[5][5], cont = 0;

    //Função que zera o clock do processador
    srand(time(NULL));

    //Popular matriz
    printf("Informe 5 valores para o vetor A: \n");
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            matriz[i][j] = rand() % 50;

    //Imprime a matriz inteira
    printf("Vetor A: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        for (int j = 0; j < 5; j++)
            printf(" %d ", matriz[i][j]);
    }

    printf("\n");

    //Imprime a diagonal principal
    printf("\n Diagonal Principal: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                cont += matriz[i][j];
                printf(" %d ", matriz[i][j]);
            }
            else
                printf(" ");
        }
    }

    printf("\n");

    //Imprime a soma da diagonal principal
    printf("\n Soma da Diagonal Principal: %d\n", cont);
}