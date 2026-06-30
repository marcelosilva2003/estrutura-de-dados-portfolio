// Aula 1 – Variáveis, operadores e entrada/saída básicas
// Exemplo: Incremento e decremento

#include<stdio.h>

int main(){
    int a = 5, b = 8;
    int pre  = ++a;  // a vira 6, pre recebe 6
    int pos  = b++;  // pos recebe 8, b vira 9
    printf("pre-incremento: a=%d, pre=%d\n", a, pre);
    printf("pos-incremento: b=%d, pos=%d\n", b, pos);
    a--;             // a vira 5
    printf("pos-decremento: a=%d\n", a);
    return 0;
}
