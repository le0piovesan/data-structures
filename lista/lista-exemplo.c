#include <stdio.h>
#include <stdlib.h>

struct Node
{            //criando o tipo do elemento da lista
    int num; //dado
    struct Node *prox;
};
typedef struct Node node; //apelido
typedef node *LISTA;      //declara��o ponteiro da cabe�a da lista

LISTA *criarLista()
{
    LISTA *li = (LISTA *)malloc(sizeof(LISTA)); //aloca cabe�a da lista
    if (li != NULL)
    {
        *li = NULL;
    }
    else
    {
        printf("Erro na aloca��o...\n");
        exit(0);
    }
    return li;
}

void insereInicio(LISTA *lista)
{
    node *novo = (node *)malloc(sizeof(node)); //declara e aloca
    if (novo == NULL)
    {
        printf("Erro na aloca��o...\n");
        exit(0);
    }
    printf("Informe valor do Novo elemento\n");
    scanf("%d", &novo->num);
    novo->prox = (*lista);
    *lista = novo;
    //free(novo);
}

void exibe(LISTA *lista)
{
    if ((*lista) == NULL)
    {
        printf("LISTA VAZIA...\n");
    }
    else
    {
        node *tmp; // no tempor�rio
        tmp = (*lista);
        while (tmp != NULL)
        {
            printf("%5d", tmp->num);
            tmp = tmp->prox;
        }
    }
    printf("\n");
}

void insereFinal(LISTA *lista)
{
    node *novo = (node *)malloc(sizeof(node)); //declara e aloca
    if (novo == NULL)
    {
        printf("Erro na aloca��o...\n");
        exit(0);
    }
    printf("Informe valor do Novo elemento\n");
    scanf("%d", &novo->num);
    novo->prox = NULL; // novo final da lista
    if ((*lista) == NULL)
    { //se lista vazia
        *lista = novo;
    }
    else
    {
        node *tmp; // no tempor�rio
        tmp = (*lista);
        while (tmp->prox != NULL)
        { //busca o ultimo elemento
            tmp = tmp->prox;
        }
        tmp->prox = novo;
    }
}
void libera(LISTA *lista)
{
    if ((*lista) == NULL)
    {
        printf("LISTA VAZIA...\n");
    }
    else
    {
        node *tmp;
        while ((*lista) != NULL)
        {
            tmp = *lista;
            *lista = (*lista)->prox;
            free(tmp);
        }
        //*lista = NULL;
    }
}

int main()
{
    LISTA *lista = criarLista();
    int op;
    do
    {
        printf("O que deseja:\n");
        printf("1 - inserir INICIO\n");
        printf("2 - inserir FINAL\n");
        printf("3 - mostrar lista\n");
        printf("4 - libera lista\n");
        printf("0 - SAIR\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            insereInicio(lista);
            break;
        case 2:
            insereFinal(lista);
            break;
        case 3:
            exibe(lista);
            break;
        case 4:
            libera(lista);
            break;
        default:
            printf("Opcao n�o cadastrada...\n");
            break;
        }
    } while (op != 0);
    free(lista);
}
