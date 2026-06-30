// Aula 1 – Variáveis, operadores e entrada/saída básicas
// Exemplo: Operadores de atribuição

#include<stdio.h>

int main(){
    int a = 10, b = 3;
    a += b;    // a = a + b  -> 13
    a -= 2;    // a = a - 2  -> 11
    a *= 2;    // a = a * 2  -> 22
    a /= 4;    // a = a / 4  -> 5
    a %= 3;    // a = a % 3  -> 2
    printf("Resultado: %d\n", a); // 2
    return 0;
}
