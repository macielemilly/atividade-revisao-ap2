#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *v;

    printf("Digite quantos numeros voce quer armazenar: ");
    scanf("%d",&n);

    v = malloc(n * sizeof(int));

    if(v == NULL){
        printf("Erro ao alocar memoria!");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("digite um numero: ");
        scanf("%d",&v[i]);
    }

    int soma = 0;

    for(int i = 0; i < n; i++){
        soma += *(v+i);
    }

    float media = (float)soma / n;

    printf("\nNumeros digitados:\n");

    for(int i = 0; i < n; i++){
        printf("%d ",v[i]);
    }

    printf("\nmedia dos numeros: %.2f",media);

    free(v);

    return 0;
}
