// Aula 4 – Ponteiros
// Exemplo 1: Declaração e uso básico

#include<stdio.h>

int main(){
    int valor = 42;
    int *ptr = &valor;   // ptr guarda o endereço de valor

    printf("Valor:          %d\n",  valor);
    printf("Endereco:       %p\n",  (void*)&valor);
    printf("Ptr (endereco): %p\n",  (void*)ptr);
    printf("*ptr (conteudo):%d\n",  *ptr);

    *ptr = 100;   // modifica valor indiretamente
    printf("Valor apos: %d\n", valor); // 100
    return 0;
}
