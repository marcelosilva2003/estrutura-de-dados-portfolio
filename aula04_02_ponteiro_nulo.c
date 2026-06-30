// Aula 4 – Ponteiros
// Exemplo 2: Ponteiro nulo e verificação

#include<stdio.h>

int main(){
    int *p = NULL;   // ponteiro que nao aponta para nada
    if(p == NULL)
        printf("Ponteiro nulo - seguro!\n");
    int x = 5;
    p = &x;
    printf("Agora aponta para %d\n", *p);
    return 0;
}
