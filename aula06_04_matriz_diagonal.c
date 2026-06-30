// Aula 6 – Vetores e matrizes
// Exemplo 2: Soma da diagonal principal

#include<stdio.h>

int main(){
    int m[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int soma = 0;
    for(int i = 0; i < 4; i++) soma += m[i][i];
    printf("Soma da diagonal principal: %d\n", soma); // 34
    return 0;
}
