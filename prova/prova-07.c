#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetSize, *x;

    printf("Digite um valor para o tamanho do vetor: ");
    scanf("%d", &vetSize);

    x = (int *)malloc(vetSize * sizeof(int));

    if (x == NULL)
    {
        printf("Erro ao alocar");
        exit(1);
    }

    for (int i = 0; i < vetSize; i++)
    {
        printf("Digite um valor para posicao do vetor[%d]", i);
        scanf("%d", &x[i]);
    }

    printf("\nMaior valor do vetor: \n");
    int maior = x[0];

    for (int i = 0; i < vetSize; i++)
    {
        if (x[i] > maior)
        {
            maior = x[i];
        }
    }
    printf("%d", maior);

    printf("\nMenor valor do vetor: \n");
    int menor = x[0];

    for (int i = 0; i < vetSize; i++)
    {
        if (x[i] < menor)
        {
            menor = x[i];
        }
    }
    printf("%d", menor);

    printf("\nMedia dos valores do vetor: \n");
    float media;

    for (int i = 0; i < vetSize; i++)
    {
        media += x[i];
    }
    media = media / vetSize;
    printf("%.2f\n", media);

    free(x);
    system("pause");
}
