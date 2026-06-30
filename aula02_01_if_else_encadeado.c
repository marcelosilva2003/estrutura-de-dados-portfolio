// Aula 2 – Estruturas condicionais
// Exemplo: if/else encadeado

#include<stdio.h>

int main(){
    float nota;
    printf("Digite a nota (0 a 10): ");
    scanf("%f", &nota);
    if(nota >= 7.0){
        printf("Aprovado\n");
    } else if(nota >= 5.0){
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
    return 0;
}
