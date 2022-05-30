#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 10, b = 50;

    int *ptr;
    int **ptrPtr;

    ptr = &a;
    ptrPtr = &ptr;

    printf("O endereco ptrPtr eh %x\n", &ptrPtr);
    printf("O conteudo de ptrPtr eh %d\n", **ptrPtr);
    system("pause");
}