// Aula 8 – Busca, remoção e esvaziamento
// Exemplo: Programa completo com remoção (primeiro, último, por valor)

#include<stdio.h>
#include<stdlib.h>

typedef struct no{ int valor; struct no *prox; }No;

void imprimir(No *l){
    printf("Lista: ");
    while(l){ printf("[%d] -> ", l->valor); l = l->prox; }
    printf("NULL\n");
}

No* removerPrimeiro(No *lista){
    if(!lista){ printf("Lista vazia\n"); return NULL; }
    No *temp = lista;
    lista = lista->prox;
    printf("Removido: %d\n", temp->valor);
    free(temp);
    return lista;
}

No* removerUltimo(No *lista){
    if(!lista) return NULL;
    if(!lista->prox){   // lista com apenas 1 elemento
        printf("Removido: %d\n", lista->valor);
        free(lista); return NULL;
    }
    No *p = lista;
    while(p->prox->prox) p = p->prox; // para no penultimo
    printf("Removido: %d\n", p->prox->valor);
    free(p->prox);
    p->prox = NULL;
    return lista;
}

No* removerValor(No *lista, int alvo){
    if(!lista) return NULL;
    // caso especial: remover o primeiro
    if(lista->valor == alvo){
        No *temp = lista;
        lista = lista->prox;
        free(temp); return lista;
    }
    No *p = lista;
    while(p->prox && p->prox->valor != alvo)
        p = p->prox;
    if(p->prox){
        No *temp = p->prox;
        p->prox = temp->prox;
        free(temp);
        printf("Removido: %d\n", alvo);
    } else {
        printf("Valor %d nao encontrado\n", alvo);
    }
    return lista;
}

int main(){
    // Cria lista: 5 -> 3 -> 8 -> 1 -> NULL
    No *lista = NULL;
    int vals[] = {1, 8, 3, 5};
    for(int i = 0; i < 4; i++){
        No *novo = malloc(sizeof(No));
        novo->valor = vals[i]; novo->prox = lista;
        lista = novo;
    }
    imprimir(lista);
    lista = removerPrimeiro(lista); imprimir(lista);
    lista = removerUltimo(lista);   imprimir(lista);
    int v; printf("Remover valor: "); scanf("%d", &v);
    lista = removerValor(lista, v); imprimir(lista);
    return 0;
}
