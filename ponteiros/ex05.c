// Faça uma função chamada primo que recebe como parâmetro um inteiro m e dois
// outros inteiros p1 e p2 passados por referência. A função deve retornar em p1 o maior
// número primo que é menor do que m e deve retornar em p2 o menor número primo que é
// maior do que m.

#include <stdio.h>
#include <stdlib.h>

int primo(int *m, int *p1, int *p2)
{

    int eh_primo;

    for (int i = *m;; i++)
    {
        eh_primo = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                eh_primo = 0;
        }

        if (eh_primo == 1)
        {
            *p1 = i;
            break;
        }
    }

    for (int i = *m; i > 0; i--)
    {
        eh_primo = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                eh_primo = 0;
        }

        if (eh_primo == 1)
        {
            *p2 = i;
            break;
        }
    }
}

int main()
{

    int m, p1, p2;

    printf("Digite um valor inteiro para variavel M:\n");
    scanf("%d", &m);

    primo(&m, &p1, &p2);

    printf("Menor numero primo depois de %d:  %d\n", m, p1);
    printf("Maior numero primo antes de %d:  %d\n", m, p2);

    system("pause");
}
