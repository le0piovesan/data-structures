#include <stdio.h>
#include <stdlib.h>

int main()
{
    //valor é a variável que será apontada pelo ponteiro
    int valor = 27;
    //declaração de variável ponteiro
    int *ptr;
    //atribuindo o endereço da variável valor ao ponteiro
    ptr = &valor;

    printf("Utilizando ponteiros\n\n");
    printf("Conteudo da variavel valor: %d\n", valor);                          //27
    printf("Endereco da variavel valor: %x\n", &valor);                         //end
    printf("Conteudo da variavel ponteiro ptr: %x\n", ptr);                     //end
    printf("Conteudo da variavel para onde o ponteiro ptr aponta: %d\n", *ptr); //27
    system("pause");

    //possível também chamar uma função passando como parâmetro os endereços de memória func(&x, &y)
    //endereço de memória -> valor das variáveis
    //depois na função declarar ponteiros func(float *x, float *y)
}