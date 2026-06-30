// Aula 3 – Laços de repetição
// Exemplo: while – tabuada

#include<stdio.h>

int main(){
    int n, i = 1;
    printf("Tabuada de qual numero? ");
    scanf("%d", &n);
    printf("\nTabuada do %d:\n", n);
    while(i <= 10){
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}
