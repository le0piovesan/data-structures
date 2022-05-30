// Criar dois vetores A e B cada um com 10 elementos inteiros. Construir um
// vetor C de mesmo tipo e tamanho, obedecendo as seguintes regras de
// formação:
// a) Ci deverá receber 1 quando A[i] for maior que B[i];
// b) Ci deverá receber 0 quando A[i] for igual a B[i];
// c) Ci deverá receber -1 quando A[i] for menor que B[i].

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Declaração variáveis
    int vetA[10], vetB[10], vetC[10];

    //Função que zera o clock do processador
    srand(time(NULL));

    //Popular array A
    printf("Informe 10 valores para o vetor A: \n");
    for (int i = 0; i < 10; i++)
    {
        // scanf("%d", &vetA[i]);
        vetA[i] = rand() % 10;
    }

    //Popular array B
    printf("Informe 10 valores para o vetor B: \n");
    for (int i = 0; i < 10; i++)
    {
        // scanf("%d", &vetB[i]);
        vetB[i] = rand() % 10;
    }

    //Comparar array A com B e atribuir a C
    for (int i = 0; i < 10; i++)
    {
        if (vetA[i] > vetB[i])
            vetC[i] = 1;
        else if (vetA[i] == vetB[i])
            vetC[i] = 0;
        else
            vetC[i] = -1;
    }

    //Imprime todos os vetores
    printf("Vetor A: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vetA[i]);
    }

    printf("Vetor B: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vetB[i]);
    }

    printf("Vetor C: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vetC[i]);
    }

    system("pause");
}