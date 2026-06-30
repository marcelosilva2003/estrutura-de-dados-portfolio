// Aula 4 – Ponteiros
// Exemplo: Ponteiros e Arrays

#include<stdio.h>

int main(){
    int v[] = {10, 20, 30, 40, 50};
    int *p = v;   // aponta para v[0]

    printf("Acesso por indice:\n");
    for(int i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, v[i]);

    printf("\nAcesso por ponteiro:\n");
    for(int i = 0; i < 5; i++)
        printf("*(p+%d) = %d\n", i, *(p + i));

    printf("\nPercurso com p++:\n");
    for(int i = 0; i < 5; i++)
        printf("%d ", *p++);
    printf("\n");
    return 0;
}
