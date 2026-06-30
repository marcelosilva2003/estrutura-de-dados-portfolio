// Aula 1 – Variáveis, operadores e entrada/saída básicas
// Exemplo: Especificadores de formato

#include<stdio.h>

int main(){
    int    i  = 7;
    long   l  = 1234567L;
    char   c  = 'M';
    char   s[] = "Marcelo";
    float  f  = 1.5f;
    double d  = 3.14159265;
    printf("int:    %d\n",   i);
    printf("long:   %ld\n",  l);
    printf("char:   %c\n",   c);
    printf("string: %s\n",   s);
    printf("float:  %.2f\n", f);
    printf("double: %.5lf\n", d);
    return 0;
}
