// Dado um vetor de inteiros e o seu número de elementos, inverta a
// posição dos seus elementos.

#include <stdio.h>
#include <time.h>

float inverte(int vet[], int esq, int dir, int n)
{
    int t; //t = temporaria
    if (esq >= dir)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d", vet[i]);
        }

        return 0;
    }
    else
    {
        t = vet[esq];
        vet[esq] = vet[dir];
        vet[dir] = t;
        inverte(vet, esq + 1, dir - 1, n);
    }
}

int main()
{

    int n, esq, dir;
    srand(time(NULL)); //zera o clock do processador
    printf("informe o tamanho do vetor\n");
    scanf("%d", &n);
    float vet[n];
    printf("preencha o vertor com %d valores\n", n);
    for (int i = 0; i < n; i++)
    {
        vet[i] = rand() % 100;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.2f", vet[i]);
    }
    printf("\n");

    esq = 0;     //[0, 1, 2, 3, ... n -1]
    dir = n - 1; //[0, 1, 2, 3, ... n -1]

    inverte(vet, esq, dir, n);
}