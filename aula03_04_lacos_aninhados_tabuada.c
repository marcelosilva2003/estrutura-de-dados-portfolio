// Aula 3 – Laços de repetição
// Exemplo: Laços aninhados – tabuada completa

#include<stdio.h>

int main(){
    printf("Tabuada de 1 a 5:\n\n");
    for(int i = 1; i <= 5; i++){
        printf("--- Tabuada do %d ---\n", i);
        for(int j = 1; j <= 10; j++){
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
