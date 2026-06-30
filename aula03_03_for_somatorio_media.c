// Aula 3 – Laços de repetição
// Exemplo: for – somatório e média

#include<stdio.h>

int main(){
    int n, v, soma = 0;
    printf("Quantos numeros? ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("Numero %d: ", i);
        scanf("%d", &v);
        soma += v;
    }
    printf("Soma:  %d\n", soma);
    printf("Media: %.2f\n", (float)soma / n);
    return 0;
}
