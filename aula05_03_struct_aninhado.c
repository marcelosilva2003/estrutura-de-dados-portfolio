// Aula 5 – Structs
// Exemplo: Struct aninhado – Cliente com endereço embutido

#include<stdio.h>

typedef struct data{
    int dia, mes, ano;
}Data;

typedef struct endereco{
    char rua[80];
    int  numero;
    char cidade[50];
}Endereco;

typedef struct cliente{
    char    nome[50];
    char    cpf[15];
    Data    nascimento;
    Endereco end;
}Cliente;

int main(){
    Cliente c;
    printf("Nome:        "); fgets(c.nome, 50, stdin);
    printf("CPF:         "); fgets(c.cpf, 15, stdin);
    printf("Nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &c.nascimento.dia,
          &c.nascimento.mes, &c.nascimento.ano);
    getchar();
    printf("Rua:         "); fgets(c.end.rua, 80, stdin);
    printf("Numero:      "); scanf("%d", &c.end.numero);
    getchar();
    printf("Cidade:      "); fgets(c.end.cidade, 50, stdin);
    printf("\n=== Ficha do Cliente ===\n");
    printf("Nome: %s", c.nome);
    printf("CPF:  %s", c.cpf);
    printf("Nasc: %02d/%02d/%04d\n",
           c.nascimento.dia, c.nascimento.mes, c.nascimento.ano);
    printf("End.: %s, %d - %s",
           c.end.rua, c.end.numero, c.end.cidade);
    return 0;
}
