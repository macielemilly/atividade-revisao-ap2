#include <stdio.h>
#include <stdlib.h>

int main () {

    int valor = 50;
    int *p = NULL;
    int **q = NULL;

    p = &valor; // Linha A - Identifique o erro sintatico
    q = &p; // Linha B
    **q = 100; // Linha C

    printf ("Valor = %d\n", valor ) ;
    return 0;
}
