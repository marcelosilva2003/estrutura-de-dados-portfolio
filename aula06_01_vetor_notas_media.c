// Aula 6 – Vetores e matrizes
// Exemplo 1: Notas e média

#include<stdio.h>

int main(){
    int notas[5];
    float soma = 0;
    printf("Digite 5 notas:\n");
    for(int i = 0; i < 5; i++){
        printf("Nota [%d]: ", i + 1);
        scanf("%d", &notas[i]);
        soma += notas[i];
    }
    printf("Media: %.1f\n", soma / 5);
    int maior = notas[0];
    for(int i = 1; i < 5; i++)
        if(notas[i] > maior) maior = notas[i];
    printf("Maior nota: %d\n", maior);
    return 0;
}
