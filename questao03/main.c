#include <stdio.h>
#include <stdlib.h>

int main () {

    int valor = 50;
    int *p = NULL;
    int **q = NULL;

    p = &valor; //o erro estava nessa linha, p precisava receber o endereco de valor
    q = &p;
    **q = 100;

    printf ("Valor = %d\n", valor ) ;
    return 0;
}
