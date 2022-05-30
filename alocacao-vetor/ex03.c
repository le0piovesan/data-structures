// 3. Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a
// alocação dinâmica de memória. Em seguida, leia do usuário seus valores e mostre
// quantos dos números são pares e quantos são ímpares.

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

    printf("Impares: \n");
    for (int i = 0; i < tamVet; i++)
    {
        if (x[i] % 2 == 1)
        {
            printf("%5d", x[i]);
        }
    }

    printf("\n");

    printf("Pares: \n");
    for (int i = 0; i < tamVet; i++)
    {
        if (x[i] % 2 == 0)
        {
            printf("%5d", x[i]);
        }
    }

    free(x);
    printf("\n");
    system("pause");
}
