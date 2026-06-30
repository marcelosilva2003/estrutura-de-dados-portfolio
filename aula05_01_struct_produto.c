// Aula 5 – Structs
// Exemplo: Struct simples – Cadastro de produto

#include<stdio.h>

typedef struct produto{
    char   descricao[80];
    char   codigo[15];
    float  preco;
    int    quantidade;
}Produto;

void exibir(Produto p){
    printf("\n=== Produto ===\n");
    printf("Descricao:   %s\n", p.descricao);
    printf("Codigo:      %s\n", p.codigo);
    printf("Preco:       R$ %.2f\n", p.preco);
    printf("Quantidade:  %d un.\n", p.quantidade);
}

int main(){
    Produto p;
    printf("Descricao: ");  fgets(p.descricao, 80, stdin);
    printf("Codigo:    ");  fgets(p.codigo, 15, stdin);
    printf("Preco:     ");  scanf("%f", &p.preco);
    printf("Qtd.:      ");  scanf("%d", &p.quantidade);
    exibir(p);
    return 0;
}
