#include <stdio.h>
#include <stdlib.h>

void remover_quebra_linha(char *str){
    while(*str != '\0'){
        if(*str == '\n'){
            *str = '\0';
            break;
        }
        str++;
    }
}

int main()
{
    char palavra1[50];
    char palavra2[50];

    printf("Digite uma palavra: ");
    fgets(palavra1, sizeof(palavra1), stdin);
    remover_quebra_linha(palavra1);

    printf("Digite uma palavra: ");
    fgets(palavra2, sizeof(palavra2), stdin);
    remover_quebra_linha(palavra2);

    printf("[%s][%s]",palavra1,palavra2);

    return 0;
}
