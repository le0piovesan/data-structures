// 8. Faça um programa que leia uma quantidade qualquer de números armazenando-os
// na memória e pare a leitura quando o usuário entrar um número negativo. Em seguida,
// imprima o vetor lido. Use a função REALLOC. Obs. Os números deverão ser
// armazenados no vetor enquanto forem positivos.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, *x, qtda, i;
    qtda = 1;
    x = (int *)malloc(qtda * sizeof(int));
    do
    {
        printf("Informe Numero:\n");
        scanf("%d", &num);
        if (qtda != 1 && num > 0)
        {
            x = (int *)realloc(x, qtda * sizeof(int));
        }
        if (num > 0)
        {
            x[qtda - 1] = num;
            qtda++;
        }
    } while (num > 0);
    for (i = 0; i < qtda - 1; i++)
    {
        printf("%5d", x[i]);
    }
    printf("\n");
    free(x);
    system("pause");
}
