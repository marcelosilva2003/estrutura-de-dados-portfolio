// Aula 11 – Pilhas
// Exemplo: Pilha com lista encadeada e operação peek

#include<stdio.h>
#include<stdlib.h>

typedef struct no{ int dado; struct no *prox; }No;
No *topo = NULL;

void push(int item){
    No *novo = malloc(sizeof(No));
    if(!novo){ printf("Sem memoria\n"); return; }
    novo->dado = item;
    novo->prox = topo;
    topo = novo;
    printf("Empilhado: %d\n", item);
}

void pop(){
    if(!topo){ printf("Pilha vazia\n"); return; }
    No *temp = topo;
    topo = topo->prox;
    printf("Desempilhado: %d\n", temp->dado);
    free(temp);
}

void peek(){
    if(!topo) printf("Pilha vazia\n");
    else      printf("Topo: %d (sem remover)\n", topo->dado);
}

void imprimir(){
    if(!topo){ printf("Pilha vazia\n"); return; }
    No *t = topo;
    printf("Pilha (topo -> base):\n");
    while(t){ printf("  | %d |\n", t->dado); t = t->prox; }
    printf("  +---+\n");
}

int main(){
    int opc, n;
    do{
        printf("1-Push  2-Pop  3-Peek  4-Exibir  0-Sair: ");
        scanf("%d", &opc);
        switch(opc){
            case 1: printf("Valor: "); scanf("%d",&n); push(n); break;
            case 2: pop();    break;
            case 3: peek();   break;
            case 4: imprimir(); break;
        }
    }while(opc != 0);
    return 0;
}
