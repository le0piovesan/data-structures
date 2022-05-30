// Crie um vetor de 8 posições contendo números inteiros informados pelo
// usuário, calcular a média dos valores e informar quantos valores estão
// acima da média.

#include <stdio.h>

int main()
{

    int vet[8], soma = 0, cont = 0;
    float media;

    printf("Informe 8 valores inteiros \n");

    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &vet[i]);

        soma = soma + vet[i]; //Acumuladora
    }

    media = soma / 8;

    printf("A media dos valores eh %.2f \n", media);

    for (int i = 0; i < 8; i++)
    {
        if (vet[i] > media)
        {
            cont++; //Contadora
        }
    }

    printf("A quantidade de valores acima da media eh: %d", cont);
}