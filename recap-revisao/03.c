// Faça um programa onde o usuário preenche um vetor de 10 posições
// contendo números inteiro, em seguida apresenta o vetor ordenado na tela
// (utilizar qualquer método).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Declaração variáveis
    int vetA[10], aux = 0;

    //Função que zera o clock do processador
    srand(time(NULL));

    //Popular array A
    printf("Informe 10 valores para o vetor A: \n");
    for (int i = 0; i < 10; i++)
    {
        vetA[i] = rand() % 50;
    }

    //Posicao i com posicao i + 1
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (vetA[i] < vetA[j])
            {
                aux = vetA[i];
                vetA[i] = vetA[j];
                vetA[j] = aux;
            }
        }
    }

    //Imprime vetor
    printf("Vetor A: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vetA[i]);
    }

    system("pause");
}