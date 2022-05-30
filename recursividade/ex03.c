// Usando recursividade, calcule a soma de todos os valores de um vetor
// de tamanho definido pelo usuário de reais

#include <stdio.h>
#include <time.h>

float soma(float vet[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return vet[n - 1] + soma(vet, n - 1);
    }
}

int main()
{

    int n, i;
    srand(time(NULL));
    printf("informe a quantidade de posicoes do vetor\n");
    scanf("%d", &n);
    float vet[n];
    printf("preencha o vertor com %d valores\n", n);
    for (i = 0; i < n; i++)
    {
        vet[i] = rand() % 100;
    }
    for (i = 0; i < n; i++)
    {
        printf("%.2f", vet[i]);
    }

    printf("\nA soma de todos as posicoes do vetor eh %f\n", soma(vet, n));
}