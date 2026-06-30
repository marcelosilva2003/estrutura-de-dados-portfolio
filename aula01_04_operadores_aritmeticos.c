// Aula 1 – Variáveis, operadores e entrada/saída básicas
// Exemplo: Operadores aritméticos

#include<stdio.h>

int main(){
    int x = 15, y = 4;
    printf("Soma:    %d\n", x + y);          // 19
    printf("Subtr.:  %d\n", x - y);          // 11
    printf("Mult.:   %d\n", x * y);          // 60
    printf("Divisao: %.2f\n", (float)x / y); // 3.75
    printf("Resto:   %d\n", x % y);          // 3

    // Precedência de operadores
    int r1 = 2 + 3 * 4;    // 14 (multiplicação primeiro)
    int r2 = (2 + 3) * 4;  // 20 (parênteses primeiro)
    printf("Sem parenteses: %d\n", r1);
    printf("Com parenteses: %d\n", r2);

    return 0;
}
