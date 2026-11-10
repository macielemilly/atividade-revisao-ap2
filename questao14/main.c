#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;
    int capacidade = 4;
    int quantidade = 0;
    int numero;

    v = malloc(capacidade * sizeof(int));

    if(v == NULL){
        printf("Erro na alocacao!");
        return 1;
    }

    while(1){
        printf("digite um numero (-1 para parar): ");
        scanf("%d",&numero);

        if(numero == -1){
            break;
        }

        if(quantidade == capacidade){
            capacidade *= 2;

            int *aux = realloc(v, capacidade * sizeof(int));

            if(aux == NULL){
                printf("Erro na realocacao!");
                free(v);
                return 1;
            }

            v = aux;
        }

        v[quantidade] = numero;
        quantidade++;
    }

    printf("Numeros armazenados:\n");

    for(int i = 0; i < quantidade; i++){
        printf("%d",v[i]);
    }

    free(v);

    return 0;
}
