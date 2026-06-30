// Aula 13 – Árvores binárias
// Exemplo: BST com inserção recursiva e três tipos de percurso

#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int conteudo;
    struct no *esq, *dir;
}No;

No* inserir(No *raiz, int valor){
    if(raiz == NULL){
        No *novo = malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esq = novo->dir = NULL;
        return novo;
    }
    if(valor < raiz->conteudo)
        raiz->esq = inserir(raiz->esq, valor);
    else if(valor > raiz->conteudo)
        raiz->dir = inserir(raiz->dir, valor);
    // valor duplicado: ignora
    return raiz;
}

// Em-ordem: esq -> raiz -> dir (resultado ORDENADO)
void emOrdem(No *r){
    if(r){ emOrdem(r->esq); printf("%d ", r->conteudo); emOrdem(r->dir); }
}

// Pre-ordem: raiz -> esq -> dir (util para copiar a arvore)
void preOrdem(No *r){
    if(r){ printf("%d ", r->conteudo); preOrdem(r->esq); preOrdem(r->dir); }
}

// Pos-ordem: esq -> dir -> raiz (util para deletar a arvore)
void posOrdem(No *r){
    if(r){ posOrdem(r->esq); posOrdem(r->dir); printf("%d ", r->conteudo); }
}

int buscar(No *r, int alvo){
    if(!r)                  return 0; // nao encontrado
    if(alvo == r->conteudo) return 1; // encontrado
    if(alvo < r->conteudo)  return buscar(r->esq, alvo);
    return buscar(r->dir, alvo);
}

int altura(No *r){
    if(!r) return -1;
    int he = altura(r->esq);
    int hd = altura(r->dir);
    return 1 + (he > hd ? he : hd);
}

int main(){
    No *raiz = NULL;
    int opc, v;
    do{
        printf("1-Inserir  2-Buscar  3-Em ordem  ");
        printf("4-Pre  5-Pos  6-Altura  0-Sair: ");
        scanf("%d", &opc);
        switch(opc){
            case 1: printf("Valor: "); scanf("%d",&v);
                    raiz = inserir(raiz, v); break;
            case 2: printf("Buscar: "); scanf("%d",&v);
                    printf(buscar(raiz,v) ? "Encontrado\n" : "Nao encontrado\n"); break;
            case 3: printf("Em-ordem:  "); emOrdem(raiz);  printf("\n"); break;
            case 4: printf("Pre-ordem: "); preOrdem(raiz); printf("\n"); break;
            case 5: printf("Pos-ordem: "); posOrdem(raiz); printf("\n"); break;
            case 6: printf("Altura: %d\n", altura(raiz)); break;
        }
    }while(opc != 0);
    return 0;
}
