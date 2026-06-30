// Aula 11 – Pilhas
// Exemplo: Verificação de parênteses balanceados

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct no{ char c; struct no *prox; }No;
No *topo = NULL;

void pushC(char c){ No *n=malloc(sizeof(No)); n->c=c; n->prox=topo; topo=n; }
char popC(){ if(!topo) return 0; No *t=topo; char c=t->c; topo=topo->prox; free(t); return c; }

int balanceado(char *expr){
    for(int i=0; i<strlen(expr); i++){
        if(expr[i]=='(') pushC('(');
        else if(expr[i]==')'){
            if(!topo) return 0; // fechou sem abrir
            popC();
        }
    }
    return topo == NULL; // sobrou algum aberto?
}

int main(){
    char expr[100];
    printf("Expressao: "); scanf("%s", expr);
    if(balanceado(expr)) printf("Parenteses balanceados!\n");
    else                 printf("Parenteses NAO balanceados!\n");
    return 0;
}
