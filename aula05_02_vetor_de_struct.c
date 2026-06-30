// Aula 5 – Structs
// Exemplo: Vetor de struct – Estoque com 3 produtos

#include<stdio.h>

typedef struct produto{
    char  descricao[80];
    float preco;
    int   qtd;
}Produto;

int main(){
    Produto estoque[3];
    for(int i = 0; i < 3; i++){
        printf("\n--- Produto %d ---\n", i+1);
        printf("Descricao: ");
        fgets(estoque[i].descricao, 80, stdin);
        printf("Preco:     ");
        scanf("%f", &estoque[i].preco);
        printf("Qtd.:      ");
        scanf("%d", &estoque[i].qtd);
        getchar(); // limpa buffer
    }
    printf("\n=== Relatorio de Estoque ===\n");
    float total = 0;
    for(int i = 0; i < 3; i++){
        float subtotal = estoque[i].preco * estoque[i].qtd;
        printf("%s  R$ %.2f x %d = R$ %.2f\n",
               estoque[i].descricao, estoque[i].preco,
               estoque[i].qtd, subtotal);
        total += subtotal;
    }
    printf("Total em estoque: R$ %.2f\n", total);
    return 0;
}
