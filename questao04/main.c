#include <stdio.h>
#include <stdlib.h>

int somar_elementos_ponteiro(int *numeros, int tam){
    int somatorio = 0;
    for(int i = 0; i < tam; i++){
        somatorio += *numeros++;
    }
    return somatorio;


}
int main()
{
    int numeros[5] = {1, 2, 3, 4, 5};
    int soma = somar_elementos_ponteiro(numeros, 6);

    printf("Somatorio: %d", soma);

    return 0;
}
