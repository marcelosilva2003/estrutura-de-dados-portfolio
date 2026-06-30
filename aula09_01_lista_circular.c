// Aula 9 – Listas circulares
// Exemplo: Inserção no início e no final com exibição circular

#include<stdio.h>
#include<stdlib.h>

typedef struct no{ int valor; struct no *prox; }No;

void inserirInicio(No **lista, int num){
    No *novo = malloc(sizeof(No));
    if(!novo) return;
    novo->valor = num;
    if(*lista == NULL){
        *lista = novo; novo->prox = novo;
    } else {
        // encontra o ultimo para atualizar seu prox
        No *aux = *lista;
        while(aux->prox != *lista) aux = aux->prox;
        novo->prox = *lista;
        aux->prox  = novo;
        *lista = novo;
    }
}

void inserirFim(No **lista, int num){
    No *novo = malloc(sizeof(No));
    if(!novo) return;
    novo->valor = num;
    if(*lista == NULL){
        *lista = novo; novo->prox = novo;
    } else {
        No *aux = *lista;
        while(aux->prox != *lista) aux = aux->prox;
        aux->prox = novo; novo->prox = *lista;
    }
}

void imprimir(No *lista){
    if(!lista){ printf("Vazia\n"); return; }
    No *aux = lista;
    printf("Circular: ");
    do{
        printf("[%d] -> ", aux->valor);
        aux = aux->prox;
    }while(aux != lista);
    printf("[volta ao inicio]\n");
}

int main(){
    No *lista = NULL;
    int opc, n;
    do{
        printf("1-Inicio  2-Fim  3-Exibir  0-Sair: ");
        scanf("%d", &opc);
        if(opc == 1){ printf("Numero: "); scanf("%d",&n); inserirInicio(&lista,n); }
        else if(opc == 2){ printf("Numero: "); scanf("%d",&n); inserirFim(&lista,n); }
        else if(opc == 3) imprimir(lista);
    }while(opc != 0);
    return 0;
}
