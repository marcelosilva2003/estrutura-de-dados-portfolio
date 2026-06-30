// Aula 1 – Variáveis, operadores e entrada/saída básicas
// Exemplo: Entrada de dados

#include<stdio.h>

int main(){
    int    idade;
    float  altura;
    char   nome[50];
    printf("Informe seu nome: ");
    scanf("%s", nome);          // & desnecessario para arrays
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Informe sua altura (m): ");
    scanf("%f", &altura);
    printf("\nNome:   %s\n", nome);
    printf("Idade:  %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    return 0;
}
