// Aula 12 – Filas
// Exemplo: Simulação de fila de atendimento com senhas

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct no{ char nome[40]; int senha; struct no *prox; }No;
No *cabeca = NULL, *cauda = NULL;
int proxSenha = 1;

void chegou(char *nome){
    No *novo = malloc(sizeof(No));
    strcpy(novo->nome, nome);
    novo->senha = proxSenha++;
    novo->prox = NULL;
    if(!cauda) cabeca = cauda = novo;
    else { cauda->prox = novo; cauda = novo; }
    printf("Bem-vindo, %s! Senha: %03d\n", nome, novo->senha);
}

void chamar(){
    if(!cabeca){ printf("Nenhum cliente na fila\n"); return; }
    No *r = cabeca; cabeca = cabeca->prox;
    if(!cabeca) cauda = NULL;
    printf("Chamando senha %03d - %s\n", r->senha, r->nome);
    free(r);
}

int main(){
    char nome[40];
    int opc;
    do{
        printf("1-Chegar  2-Chamar  0-Sair: ");
        scanf("%d", &opc); getchar();
        if(opc==1){ printf("Nome: "); fgets(nome,40,stdin);
            nome[strcspn(nome,"\n")]=0; chegou(nome); }
        else if(opc==2) chamar();
    }while(opc!=0);
    return 0;
}
