// 2. Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a
// alocação dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o
// vetor lido.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tamVet, *x;

    printf("Digite um valor para o tamanho do vetor: ");
    scanf("%d", &tamVet);

    x = (int *)malloc(tamVet * sizeof(int));

    if (x == NULL)
    {
        printf("Erro de alocacao");
        exit(1);
    }

    for (int i = 0; i < tamVet; i++)
    {
        printf("Digite um valor para posicao do vetor[%d]", i);
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < tamVet; i++)
    {
        printf("%5d", x[i]);
    }

    free(x);
    printf("\n");
    system("pause");
}
