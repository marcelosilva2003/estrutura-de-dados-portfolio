// Aula 1 – Variáveis, operadores e entrada/saída básicas
// Exemplo: Operadores lógicos

#include<stdio.h>

int main(){
    int x = 8, y = 3;
    // AND: verdadeiro somente se AMBAS forem verdadeiras
    if(x > 5 && y < 10)  printf("AND: verdadeiro\n");
    // OR: verdadeiro se AO MENOS UMA for verdadeira
    if(x < 2 || y < 10)  printf("OR: verdadeiro\n");
    // NOT: inverte o valor booleano
    if(!(x == 0))         printf("NOT: x nao e zero\n");
    // Exemplo combinado
    if(x > 0 && y > 0 && (x + y) < 20)
        printf("Ambos positivos e soma < 20\n");
    return 0;
}
