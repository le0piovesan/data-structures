#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x, i, *x1;
    x = (int *)malloc(5 * sizeof(int));
    if (x == NULL)
    {
        printf("Erro na Alocacao!!!\n");
        exit(1);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Informe posicao x[%d]: ", i);
        // scanf("%d", &x[i]);
        //aritmetica de ponteiros:
        scanf("%d", &*(x + i));
    }
    for (i = 0; i < 5; i++)
    {
        // printf("%5d", x[i]);
        //aritmetica de ponteiros:
        printf("%5d", *(x + i));
    }
    printf("\n");
    x1 = (int *)realloc(x, 10 * sizeof(int)); //realloc
    for (i = 5; i < 10; i++)
    { //continua preenchimento do vetor
        printf("Informe posicao x[%d]: ", i);
        // scanf("%d", &x1[i]);
        //aritmetica de ponteiros:
        scanf("%d", &*(x1 + i));
    }
    for (i = 0; i < 10; i++)
    {
        // printf("%5d", x1[i]);
        //aritmetica de ponteiros:
        printf("%5d", *(x1 + i));
    }
    printf("\n");
    free(x);
    free(x1);
    system("pause");
}
