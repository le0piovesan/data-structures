//Faça um programa que receba do usuário o tamanho de uma string
//e chame uma função para alocar dinamicamente essa string.
//Em seguida, o usuário deverá informar o conteúdo dessa string.
//O programa imprime a string sem suas vogais.
#include <stdio.h>
#include <stdlib.h>
void alocaString(int t)
{
    char *s;
    int i;
    s = (char *)malloc(t * sizeof(char));
    printf("Informe palavra com ate %d caracteres\n", t - 1);
    fflush(stdin); //limpa buffer do teclado
    gets(s);
    printf("%s\n", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != 'a' && s[i] != 'A' && s[i] != 'e' && s[i] != 'E' && s[i] != 'i' && s[i] != 'I' && s[i] != 'o' && s[i] != 'O' && s[i] != 'u' && s[i] != 'U')
        {
            printf("%c", s[i]);
        }
        else
        {
            printf("*");
        }
    }
    printf("\n");
    free(s);
}
int main()
{
    int t;
    printf("Informe tamanho da string?\n");
    scanf("%d", &t);
    alocaString(t);
    system("pause");
}