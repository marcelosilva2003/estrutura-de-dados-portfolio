// Aula 6 – Vetores e matrizes
// Exemplo 2: Ordenação por seleção (Selection Sort)

#include<stdio.h>

void selectionSort(int v[], int n){
    for(int i = 0; i < n-1; i++){
        int minIdx = i;
        for(int j = i+1; j < n; j++)
            if(v[j] < v[minIdx]) minIdx = j;
        int temp  = v[minIdx];
        v[minIdx] = v[i];
        v[i]      = temp;
    }
}

int main(){
    int v[] = {64, 25, 12, 22, 11};
    int n = 5;
    printf("Antes: ");
    for(int i=0;i<n;i++) printf("%d ",v[i]);
    selectionSort(v, n);
    printf("\nDepois: ");
    for(int i=0;i<n;i++) printf("%d ",v[i]);
    printf("\n");
    return 0;
}
