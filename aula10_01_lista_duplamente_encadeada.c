// Aula 10 – Listas duplamente encadeadas
// Exemplo: Inserção, exibição e remoção nos dois sentidos

#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int valor;
    struct no *prox;
    struct no *ant;
}No;

void inserirInicio(No **lista, int num){
    No *novo = malloc(sizeof(No));
    if(!novo) return;
    novo->valor = num;
    novo->ant   = NULL;
    novo->prox  = *lista;
    if(*lista) (*lista)->ant = novo;
    *lista = novo;
}

void inserirFim(No **lista, int num){
    No *novo = malloc(sizeof(No));
    if(!novo) return;
    novo->valor = num;
    novo->prox  = NULL;
    if(*lista == NULL){
        novo->ant = NULL; *lista = novo; return;
    }
    No *aux = *lista;
    while(aux->prox) aux = aux->prox;
    aux->prox = novo; novo->ant = aux;
}

void remover(No **lista, int alvo){
    No *p = *lista;
    while(p && p->valor != alvo) p = p->prox;
    if(!p){ printf("Nao encontrado\n"); return; }
    if(p->ant) p->ant->prox = p->prox;
    else       *lista = p->prox; // era o primeiro
    if(p->prox) p->prox->ant = p->ant;
    printf("Removido: %d\n", p->valor);
    free(p);
}

void imprimirFrente(No *l){
    printf("Frente: ");
    while(l){ printf("[%d] -> ", l->valor); l = l->prox; }
    printf("NULL\n");
}

void imprimirTras(No *l){
    if(!l){ printf("Vazia\n"); return; }
    while(l->prox) l = l->prox; // vai ao ultimo
    printf("Tras:   ");
    while(l){ printf("[%d] -> ", l->valor); l = l->ant; }
    printf("NULL\n");
}

int main(){
    No *lista = NULL;
    int opc, n;
    do{
        printf("1-Inicio  2-Fim  3-Frente  4-Tras  5-Remover  0-Sair: ");
        scanf("%d", &opc);
        switch(opc){
            case 1: printf("Numero: "); scanf("%d",&n); inserirInicio(&lista,n); break;
            case 2: printf("Numero: "); scanf("%d",&n); inserirFim(&lista,n);    break;
            case 3: imprimirFrente(lista); break;
            case 4: imprimirTras(lista);   break;
            case 5: printf("Remover: "); scanf("%d",&n); remover(&lista,n); break;
        }
    }while(opc != 0);
    return 0;
}
