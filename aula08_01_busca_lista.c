// Aula 8 – Busca, remoção e esvaziamento
// Exemplo: Busca por valor e relatório de pares/ímpares

#include<stdio.h>
#include<stdlib.h>

typedef struct no{ int info; struct no *prox; }No;

No* inserir(No *l, int v){
    No *novo = malloc(sizeof(No));
    if(!novo) return l;
    novo->info = v; novo->prox = l;
    return novo;
}

int buscar(No *l, int alvo){
    int pos = 0;
    while(l){
        if(l->info == alvo) return pos;
        l = l->prox; pos++;
    }
    return -1; // nao encontrado
}

int main(){
    No *l = NULL;
    int v, alvo, pares = 0, impares = 0;
    for(int i = 0; i < 6; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &v);
        l = inserir(l, v);
        if(v % 2 == 0) pares++; else impares++;
    }
    printf("Pares: %d | Impares: %d\n", pares, impares);
    printf("Buscar valor: "); scanf("%d", &alvo);
    int pos = buscar(l, alvo);
    if(pos >= 0) printf("Encontrado na posicao %d\n", pos);
    else         printf("Nao encontrado\n");
    return 0;
}
