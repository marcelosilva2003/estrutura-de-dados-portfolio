// Aula 2 – Estruturas condicionais
// Exemplo: switch/case – menu de opções

#include<stdio.h>

int main(){
    int opc;
    printf("1 - Cadastrar\n");
    printf("2 - Consultar\n");
    printf("3 - Excluir\n");
    printf("0 - Sair\n");
    printf("Opcao: ");
    scanf("%d", &opc);
    switch(opc){
        case 1: printf("Cadastrando...\n"); break;
        case 2: printf("Consultando...\n"); break;
        case 3: printf("Excluindo...\n");   break;
        case 0: printf("Saindo...\n");      break;
        default: printf("Opcao invalida\n");
    }
    return 0;
}
