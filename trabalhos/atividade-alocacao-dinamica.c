#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Calcado
{
    int cod;
    char marca[20];
    int numero;
    int quantidade;
    float valor;
} * exemplar;

int novosProdutos = 0;
int tamanhoEstoque = 0;
int opcaoSelecionada;

char marcaConsulta[20];
int codigoConsulta;
int numeroConsulta;
int codigoExclusao;

void adicionarCalcado(int *tamanhoEstoque)
{
    printf("Quantos calcados deseja adicionar? \n");
    scanf("%d", &novosProdutos);
    printf("\n");

    if (*tamanhoEstoque == 0)
    {
        exemplar = (struct Calcado *)malloc(novosProdutos * sizeof(struct Calcado));
    }
    else
    {
        exemplar = (struct Calcado *)realloc(exemplar, *tamanhoEstoque + novosProdutos * sizeof(struct Calcado));
    }

    for (int i = *tamanhoEstoque; i < (*tamanhoEstoque + novosProdutos); i++)
    {

        printf("Informe codigo:\n");
        scanf("%d", &exemplar[i].cod);

        printf("Informe marca:\n");
        scanf("%s", exemplar[i].marca);

        printf("Informe numero:\n");
        scanf("%d", &exemplar[i].numero);

        printf("Informe quantidade:\n");
        scanf("%d", &exemplar[i].quantidade);

        printf("Informe valor:\n");
        scanf("%f", &exemplar[i].valor);

        printf("\n\n");
    }

    *tamanhoEstoque += novosProdutos;
}

void alterarCalcado(int *tamanhoEstoque)
{
    printf("Informe o codigo do calcado que deseja alterar\n");
    int codigoAlteracao;
    scanf("%d", &codigoAlteracao);
    printf("\n");

    for (int i = 0; i < *tamanhoEstoque; i++)
    {
        if (codigoAlteracao == exemplar[i].cod)
        {
            printf("\nSapato atual com codigo informado: \n");
            printf("Codigo: %d\n", exemplar[i].cod);
            printf("Marca: %s\n", exemplar[i].marca);
            printf("Numero: %d\n", exemplar[i].numero);
            printf("Quantidade: %d\n", exemplar[i].quantidade);
            printf("Valor: %.2f\n", exemplar[i].valor);

            printf("\n\n======================\n\n");

            printf("\nInforme os novos dados referente a esse calcado: \n");

            printf("Informe codigo:\n");
            scanf("%d", &exemplar[i].cod);
            printf("Informe marca:\n");
            scanf("%s", &exemplar[i].marca);
            printf("Informe numero:\n");
            scanf("%d", &exemplar[i].numero);
            printf("Informe quantidade:\n");
            scanf("%d", &exemplar[i].quantidade);
            printf("Informe valor:\n");
            scanf("%f", &exemplar[i].valor);
        }
    }
}

void gerarRelatorio(int *tamanhoEstoque)
{
    printf("Deseja gerar o relatorio como?\n");
    int escolhaRelatorio;
    printf("1 - Marca\n");
    printf("2 - Numero\n");
    printf("3 - Codigo\n");
    printf("4 - Todos\n");

    scanf("%d", &escolhaRelatorio);
    printf("\n");

    if (escolhaRelatorio == 1)
    {

        printf("Informe a marca que deseja consultar\n");
        scanf("%s", &marcaConsulta);

        for (int i = 0; i < *tamanhoEstoque; i++)
        {
            if (!strcmp(marcaConsulta, exemplar[i].marca))
            {
                printf("\n------------------\n");
                printf("Codigo: %d\n", exemplar[i].cod);
                printf("Marca: %s\n", exemplar[i].marca);
                printf("Numero: %d\n", exemplar[i].numero);
                printf("Quantidade: %d\n", exemplar[i].quantidade);
                printf("Valor: %.2f\n", exemplar[i].valor);
                printf("------------------\n\n");
            }
        }
    }
    else if (escolhaRelatorio == 2)
    {

        printf("Informe o numero que deseja consultar\n");
        scanf("%d", &numeroConsulta);

        for (int i = 0; i < *tamanhoEstoque; i++)
        {
            if (numeroConsulta == exemplar[i].numero)
            {
                printf("\n------------------\n");
                printf("Codigo: %d\n", exemplar[i].cod);
                printf("Marca: %s\n", exemplar[i].marca);
                printf("Numero: %d\n", exemplar[i].numero);
                printf("Quantidade: %d\n", exemplar[i].quantidade);
                printf("Valor: %.2f\n", exemplar[i].valor);
                printf("------------------\n\n");
            }
        }
    }
    else if (escolhaRelatorio == 3)
    {

        printf("Informe o codigo que deseja consultar\n");
        scanf("%d", &codigoConsulta);

        for (int i = 0; i < *tamanhoEstoque; i++)
        {
            if (codigoConsulta == exemplar[i].cod)
            {
                printf("\n------------------\n");
                printf("Codigo: %d\n", exemplar[i].cod);
                printf("Marca: %s\n", exemplar[i].marca);
                printf("Numero: %d\n", exemplar[i].numero);
                printf("Quantidade: %d\n", exemplar[i].quantidade);
                printf("Valor: %.2f\n", exemplar[i].valor);
                printf("------------------\n\n");
            }
        }
    }
    else
    {

        printf("Todos os resultados: \n");
        for (int i = 0; i < *tamanhoEstoque; i++)
        {
            printf("\n------------------\n");
            printf("Codigo: %d\n", exemplar[i].cod);
            printf("Marca: %s\n", exemplar[i].marca);
            printf("Numero: %d\n", exemplar[i].numero);
            printf("Quantidade: %d\n", exemplar[i].quantidade);
            printf("Valor: %.2f\n", exemplar[i].valor);
            printf("------------------\n\n");
        }
    }

    system("pause");
}

void excluirCalcado()
{
    printf("Informe o codigo do calcado que deseja excluir: \n");

    scanf("%d", &codigoExclusao);
    printf("\n");

    for (int i = 0; i < tamanhoEstoque; i++)
    {
        if (codigoExclusao == exemplar[i].cod)
        {

            exemplar[i] = exemplar[--tamanhoEstoque];
            exemplar = (struct Calcado *)realloc(exemplar, tamanhoEstoque * sizeof(struct Calcado));
        }
    }
}

int main()
{
    do
    {
        printf("\nBEM VINDO(A) A LOJA SAPATO SHOW\n");
        printf("\n=============================\n");
        printf("1 - Adicionar novo calcado ao estoque\n");
        printf("2 - Alterar um calcado ja cadastrado atraves de seu codigo\n");
        printf("3 - Gerar relatorio por marca, numero, codigo ou todos\n");
        printf("4 - Excluir um calcado cadastrado atraves de seu codigo\n");
        printf("0 - Sair\n");
        printf("\n=============================\n");

        printf("\nEscolha o item que deseja acessar no menu: \n");
        scanf("%d", &opcaoSelecionada);
        printf("\n");

        switch (opcaoSelecionada)
        {
        case 1:
            //------------------------ ADICIONAR NOVO CALCADO -----------------
            adicionarCalcado(&tamanhoEstoque);

            break;

        case 2:
            //------------------------ ALTERAR CALCADO ------------------------
            alterarCalcado(&tamanhoEstoque);

            break;

        case 3:
            //------------------------ GERAR RELATORIO ------------------------
            gerarRelatorio(&tamanhoEstoque);

            break;

        case 4:
            //------------------------ EXCLUIR CALCADO ------------------------
            excluirCalcado();

            break;

        case 0:
            //------------------------ FINALIZA PROGRAMA ----------------------
            break;

        default:
            printf("\nPor favor selecione uma das opcoes mostradas no menu\n");
            main();
            break;
        }

    } while (opcaoSelecionada != 0);

    free(exemplar);
    printf("\n=============================\n");
    printf("Obrigado por visitar a loja Sapato Show!");
    printf("\n=============================\n");

    system("pause");
}
