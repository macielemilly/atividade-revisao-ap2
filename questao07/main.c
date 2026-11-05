#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int meu_strlen(const char *str){
    int quantidade = 0;

    while(*str != '\0'){
        quantidade ++;
        str++;

    }
    return quantidade;


}
int main()
{
    char texto[50];

    printf("digite uma palavra: ");
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = '\0';

    int caracteres = meu_strlen(texto);
    printf("Caracateres: %d", caracteres);



    return 0;
}
