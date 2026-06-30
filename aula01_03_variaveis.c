// Aula 1 – Variáveis, operadores e entrada/saída básicas
// Exemplo: Declaração de variáveis e seus tipos

#include<stdio.h>

int main(){
    int    inteiro  = 10;        // 4 bytes – numeros inteiros
    char   letra    = 'M';       // 1 byte  – caractere unico
    char   nome[50] = "Marcelo"; // vetor de chars (string)
    float  real     = 3.14f;     // 4 bytes – ponto flutuante simples
    double preciso  = 2.71828;   // 8 bytes – ponto flutuante duplo
    long   grande   = 1000000L;  // 8 bytes – inteiro longo

    printf("int:    %d\n",   inteiro);
    printf("char:   %c\n",   letra);
    printf("string: %s\n",   nome);
    printf("float:  %.2f\n", real);
    printf("double: %.5lf\n", preciso);
    printf("long:   %ld\n",  grande);

    return 0;
}
