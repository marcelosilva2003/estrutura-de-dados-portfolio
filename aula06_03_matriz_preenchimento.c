// Aula 6 – Vetores e matrizes
// Exemplo 1: Preenchimento e exibição de matriz

#include<stdio.h>

int main(){
    int m[3][3];
    printf("Preencha a matriz 3x3:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    printf("\nMatriz:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }
    return 0;
}
