// Aula 12 – Filas
// Exemplo: Fila com ponteiro para cabeça e cauda (otimizada)

#include<stdio.h>
#include<stdlib.h>

typedef struct no{ int valor; struct no *prox; }No;

typedef struct fila{
    No *cabeca; // primeiro a ser removido
    No *cauda;  // ultimo inserido
    int tamanho;
}Fila;

void inicializar(Fila *f){
    f->cabeca = f->cauda = NULL;
    f->tamanho = 0;
}

void enqueue(Fila *f, int num){
    No *novo = malloc(sizeof(No));
    if(!novo){ printf("Erro\n"); return; }
    novo->valor = num; novo->prox = NULL;
    if(f->cauda == NULL){
        f->cabeca = f->cauda = novo;
    } else {
        f->cauda->prox = novo;
        f->cauda = novo;
    }
    f->tamanho++;
    printf("Enfileirado: %d\n", num);
}

void dequeue(Fila *f){
    if(!f->cabeca){ printf("Fila vazia\n"); return; }
    No *rem = f->cabeca;
    f->cabeca = rem->prox;
    if(!f->cabeca) f->cauda = NULL; // fila ficou vazia
    printf("Desenfileirado: %d\n", rem->valor);
    free(rem);
    f->tamanho--;
}

void imprimir(Fila *f){
    printf("Fila (%d elem) [frente -> fundo]: ", f->tamanho);
    No *aux = f->cabeca;
    while(aux){ printf("[%d] ", aux->valor); aux = aux->prox; }
    printf("\n");
}

int main(){
    Fila f;
    inicializar(&f);
    int opc, n;
    do{
        printf("1-Enqueue  2-Dequeue  3-Exibir  0-Sair: ");
        scanf("%d", &opc);
        switch(opc){
            case 1: printf("Numero: "); scanf("%d",&n); enqueue(&f,n); break;
            case 2: dequeue(&f); break;
            case 3: imprimir(&f); break;
        }
    }while(opc != 0);
    return 0;
}
