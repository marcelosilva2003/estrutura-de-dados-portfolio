// Aula 8 – Busca, remoção e esvaziamento
// Exemplo: Esvaziamento completo da lista

#include<stdio.h>
#include<stdlib.h>

typedef struct no{ int valor; struct no *prox; }No;

void liberar(No *lista){
    No *aux;
    int cont = 0;
    while(lista){
        aux = lista->prox;
        free(lista);
        lista = aux;
        cont++;
    }
    printf("%d nos liberados\n", cont);
}

int main(){
    No *lista = NULL;
    int vals[] = {10, 20, 30};
    for(int i = 0; i < 3; i++){
        No *novo = malloc(sizeof(No));
        novo->valor = vals[i]; novo->prox = lista;
        lista = novo;
    }

    liberar(lista);
    lista = NULL; // evita ponteiro dangling

    return 0;
}
