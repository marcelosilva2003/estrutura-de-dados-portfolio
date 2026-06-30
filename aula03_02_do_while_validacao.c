// Aula 3 – Laços de repetição
// Exemplo: do-while – validação de entrada

#include<stdio.h>

int main(){
    int nota;
    do{
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%d", &nota);
        if(nota < 0 || nota > 10)
            printf("Nota invalida! Tente novamente.\n");
    }while(nota < 0 || nota > 10);
    printf("Nota valida: %d\n", nota);
    return 0;
}
