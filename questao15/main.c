#include <stdio.h>
#include <stdlib.h>

int** alocar_matriz(int linhas, int colunas){
    int **matriz;
    matriz = malloc(linhas * sizeof(int *));

    if(matriz == NULL){
        return NULL;
    }

    for(int i = 0; i < linhas; i++){
        matriz[i] = calloc(colunas, sizeof(int));

        if(matriz[i] == NULL){
            for(int j = 0; j < i; j++){
                free(matriz[j]);
            }

            free(matriz);
            return NULL;

        }

    }

    return matriz;

}

void liberar_matriz(int **matriz, int linhas){
    if(matriz == NULL){
        return;
    }

    for(int i = 0; i < linhas; i++){
        free(matriz[i]);
    }

    free(matriz);

}
int main()
{
    int linhas = 3;
    int colunas = 4;

    int **matriz = alocar_matriz(linhas, colunas);

    if(matriz == NULL){
        printf("Erro na alocacao");
        return 1;
    }

    matriz[0][0] = 10;
    matriz[1][1] = 20;

    printf("%d\n", matriz[0][0]);
    printf("%d\n", matriz[1][1]);

    liberar_matriz(matriz, linhas);

    return 0;
}
