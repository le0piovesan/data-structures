#include <stdio.h>
#include <stdlib.h>

struct No{ //cria a estrutura da arvore
    int num;
    struct No *esq;//ponteiro que aponta para o filho esquerdo
	struct No *dir; //ponteiro que aponta para o filho direito
};
typedef struct No no;
typedef no *ArvBin;

ArvBin* criarArvBin(){
    ArvBin *raiz =(ArvBin*) malloc (sizeof(ArvBin));//aloca ponteiro raiz da arvore
    if(raiz != NULL){
        *raiz=NULL;
    }else{
        printf("Erro na aloca��o...\n");
        exit(0);
    }
    return raiz;
}

int insere_ArvBin(ArvBin* raiz){
    no *novo=(no *) malloc(sizeof(no)); //aloca novo elemento
    if(novo == NULL){//testa se alocacao ocorreu
        printf("Sem memoria disponivel!\n");
        exit(0);
    }
    printf("Novo elemento: ");
    scanf("%d", &novo->num);
    novo->dir = NULL;
    novo->esq = NULL;
    if(*raiz == NULL){//se arvore vazia insere primeiro n�
        *raiz = novo;
    }else{
        no *atual = *raiz;
        no *ant = NULL;
        while (atual != NULL){
            ant = atual;
            if(novo->num == atual->num){
                printf("Elemento j� existe...");
                free(novo);
                return 0;//elemento j� existe
            }
            if(novo->num > atual->num){
                atual = atual->dir;
            }else{
                atual = atual->esq;
            }
        }
        if (novo->num > ant->num){
            ant->dir = novo;
        }else{
            ant->esq = novo;
        }
    }
}

//POS EDR
void exibe_NO_pos(no *no_liberar){//fun��o recursiva para percorrer
	if(no_liberar == NULL){
		return;
	}else{
		exibe_NO_pos(no_liberar->esq); //desce subarvore esquerda
		exibe_NO_pos(no_liberar->dir); //desce subarvore direita
		printf("%5d", no_liberar->num);
	}
}

int posOrd_ArvBin(ArvBin* raiz){
    if(raiz == NULL){//se arvore vazia
    	//return 0;
 	}else{
        exibe_NO_pos(*raiz);//chama fun��o recursiva
    }
  printf("\n");
}

//IN ERD
void exibe_NO_in(no *no_liberar){//fun��o recursiva para percorrer
	if(no_liberar == NULL){
		return;
	}else{
		exibe_NO_in(no_liberar->esq); //desce subarvore esquerda
		printf("%5d", no_liberar->num);
		exibe_NO_in(no_liberar->dir); //desce subarvore direita
	}
}

int inOrd_ArvBin(ArvBin* raiz){
    if(raiz == NULL){//se arvore vazia
    	//return 0;
 	}else{
        exibe_NO_in(*raiz);//chama fun��o recursiva
    }
  printf("\n");
}

//PRE RED
void exibe_NO_pre(no *no_liberar){//fun��o recursiva para percorrer
	if(no_liberar == NULL){
		return;
	}else{
		printf("%5d", no_liberar->num);
		exibe_NO_pre(no_liberar->esq); //desce subarvore esquerda
		exibe_NO_pre(no_liberar->dir); //desce subarvore direita
	}
}
int preOrd_ArvBin(ArvBin* raiz){
    if(raiz == NULL){//se arvore vazia
    	//return 0;
 	}else{
        exibe_NO_pre(*raiz);//chama fun��o recursiva
    }
  printf("\n");
}

void libera_NO(no *no_liberar){//fun��o recursiva para percorrer
	if(no_liberar == NULL){
		return;
	}else{
		libera_NO(no_liberar->esq); //desce subarvore esquerda
		libera_NO(no_liberar->dir); //desce subarvore direita
		free(no_liberar);
   }
}
int libera_ArvBin(ArvBin* raiz){
    if(raiz == NULL){//se arvore vazia
    	return 0;
 	}else{
        libera_NO(*raiz);//chama fun��o recursiva
    }
    free(raiz);
}

int main(){
    ArvBin *raiz = criarArvBin();
    int opt,altura,numero_no;
    do{
        printf("Escolha a opcao\n");
        printf("1. Insere \n");
        printf("2. Remove\n");
        printf("3. Exibe Pos Ordem \n");
        printf("4. Exibe In Ordem \n");
        printf("5. Exibe Pre Ordem \n");
        printf("0. Sair\n");
        scanf("%d", &opt);
        switch(opt){
            case 1:
                insere_ArvBin(raiz);
                break;
            case 2:
                //remove(raiz);
                break;
            case 3:
                posOrd_ArvBin(raiz);
                break;
            case 4:
                inOrd_ArvBin(raiz);
                break;
            case 5:
                preOrd_ArvBin(raiz);
                break;
            default:
            	printf("Opcao invalida...\n");
            	break;
        }
    }while(opt != 0);
    libera_ArvBin(raiz);
}
