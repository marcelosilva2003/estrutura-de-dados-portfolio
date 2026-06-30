// Aula 7 – Listas encadeadas
// Exemplo: Inserção no início e no final

#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int valor;
    struct no *prox;
}No;

void inserirInicio(No **lista, int num){
    No *novo = malloc(sizeof(No));
    if(!novo){ printf("Erro de alocacao\n"); return; }
    novo->valor = num;
    novo->prox  = *lista;
    *lista = novo;
}

void inserirFim(No **lista, int num){
    No *novo = malloc(sizeof(No));
    if(!novo){ printf("Erro de alocacao\n"); return; }
    novo->valor = num;
    novo->prox  = NULL;
    if(*lista == NULL){ *lista = novo; return; }
    No *aux = *lista;
    while(aux->prox) aux = aux->prox;
    aux->prox = novo;
}

void imprimir(No *lista){
    printf("Lista: ");
    while(lista){
        printf("[%d] -> ", lista->valor);
        lista = lista->prox;
    }
    printf("NULL\n");
}

int main(){
    No *lista = NULL;
    int opc, n;
    do{
        printf("1-Inicio  2-Fim  3-Exibir  0-Sair: ");
        scanf("%d", &opc);
        if(opc == 1 || opc == 2){
            printf("Numero: "); scanf("%d", &n);
            if(opc == 1) inserirInicio(&lista, n);
            else         inserirFim(&lista, n);
        } else if(opc == 3) imprimir(lista);
    }while(opc != 0);
    return 0;
}
