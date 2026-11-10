#include <stdio.h>
#include <stdlib.h>

int maior_elemento(float *numeros, int tam){
    float *ptr_maior = numeros;

    for (float *p = numeros + 1; p < numeros + tam; p++) {

        if (*p > *ptr_maior) {
            ptr_maior = p;
        }
    }

    return ptr_maior - numeros;

}
int main()
{
    float numeros[]= {1, 5, 3, 7, 9, 2};

    int indice = maior_elemento(numeros, 6);
    printf("Indice do maior elemento: %d\n", indice);

    return 0;
}
