#include <stdio.h>
#include <stdlib.h>

struct Node
{            //criando o tipo do elemento da lista
    int num; //dado
    struct Node *ant;
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

int insereOrdenado(LISTA *lista)
{                                              //funcao insere no inicio duplamente
    node *novo = (node *)malloc(sizeof(node)); //aloca novo elemento
    node *tmp = *lista;                        //cria auxiliar
    if (novo == NULL)
    { //testa se alocacao ocorreu
        printf("Sem memoria disponivel!\n");
        exit(0);
    }
    printf("Novo elemento: ");
    scanf("%d", &novo->num);
    if ((*lista) == NULL)
    { // verifica se lista vazia e insere no inicio
        *lista = novo;
        novo->ant = NULL;
        novo->prox = NULL;
    }
    else if ((*lista) != NULL)
    {
        while (tmp->num < novo->num && tmp->prox != NULL)
        { //percorre ate o at� encontrar elemento maior que num
            tmp = tmp->prox;
        }
        if (tmp->ant == NULL)
        { //unico n�
            if (tmp->num < novo->num)
            { //insere depois
                tmp->prox = novo;
                novo->ant = tmp;
                novo->prox = NULL;
            }
            else
            { //insere antes
                (*lista)->ant = novo;
                novo->ant = NULL;
                novo->prox = *lista;
                *lista = novo;
            }
        }
        else if (tmp->prox == NULL)
        { // insere no final
            novo->prox = NULL;
            novo->ant = tmp;
            tmp->prox = novo;
        }
        else if (tmp->ant != NULL)
        {
            novo->ant = tmp->ant;
            tmp->ant->prox = novo;
            tmp->ant = novo;
            novo->prox = tmp;
        }
    }
}

void exibe(LISTA *lista)
{
    node *tmp, *ultimo; // no tempor�rio
    tmp = (*lista);
    if ((*lista) == NULL)
    {
        printf("LISTA VAZIA...\n");
    }
    else
    {
        printf("CRECENTE....\n");
        while (tmp != NULL)
        {
            printf("%5d", tmp->num);
            ultimo = tmp;
            tmp = tmp->prox;
        }
        printf("\n");
        printf("DECRECENTE....\n");
        while (ultimo != NULL)
        {
            printf("%5d", ultimo->num);
            ultimo = ultimo->ant;
        }
        printf("\n");
    }
}
int removeQualquer(LISTA *lista)
{
    int p;
    printf("qual numero quer remover do meio\n");
    scanf("%d", &p);
    if ((*lista) != NULL)
    {
        node *tmp;
        tmp = *lista;
        while (tmp != NULL && tmp->num != p)
        {
            tmp = tmp->prox;
        }
        if (tmp == NULL)
        {
            printf("elemento nao encontrado\n");
        }
        else if (tmp->ant == NULL)
        { //se primeiro elemento
            if (tmp->ant == NULL && tmp->prox == NULL)
            { //quando s� tem 1 elemento na lista
                *lista = NULL;
                free(tmp);
                printf("Elemento removido com sucesso...\n");
            }
            else if ((*lista) != NULL)
            {
                *lista = (*lista)->prox;
                (*lista)->ant = NULL; //altera��o
                free(tmp);
                printf("Elemento removido com sucesso...\n");
            }
        }
        else if (tmp->prox == NULL)
        { // se ultimo elemento
            if (tmp->ant == NULL && tmp->prox == NULL)
            {
                *lista = NULL;
                free(tmp);
                printf("Elemento removido com sucesso...\n");
            }
            else if ((*lista) != NULL)
            {
                tmp->ant->prox = NULL;
                free(tmp);
                printf("Elemento removido com sucesso...\n");
            }
        }
        else if (tmp->prox != NULL)
        { //est� no meio
            tmp->ant->prox = tmp->prox;
            tmp->prox->ant = tmp->ant;
            free(tmp);
            printf("Elemento removido com sucesso...\n");
        }
    }
    else
    {
        printf("Lista ja esta vazia... \n");
    }
}

int libera(LISTA *lista)
{
    if ((*lista) != NULL)
    {
        node *proxNode, *atual; // auxiliar para ajudar free
        atual = *lista;
        while (atual->prox != NULL)
        {
            proxNode = atual->prox;
            free(atual);
            atual = proxNode;
        }
        *lista = NULL; //seta novamente para NULL pois esta vazia
    }
    else
    {
        printf("Lista ja esta vazia... \n");
    }
}

int main()
{
    LISTA *lista = criarLista();
    int opt;
    do
    {
        printf("Escolha a opcao\n");
        printf("1. Insere\n");
        printf("2. Exibe lista\n");
        printf("3. Remove\n");
        printf("0. Sair\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            insereOrdenado(lista);
            break;
        case 2:
            exibe(lista);
            break;
        case 3:
            removeQualquer(lista);
            break;
        default:
            printf("Opcao invalida...\n");
            break;
        }
    } while (opt != 0);
    libera(lista);
    free(lista);
}