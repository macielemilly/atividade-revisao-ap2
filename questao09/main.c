#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int meu_strcmp(const char *s1, const char *s2){
    while(*s1 != '\0' && *s2 != '\0'){
        if(*s1 != *s2){
            return *s1 - *s2;
        }
        s1++;
        s2++;
    }

    return *s1 - *s2;

}

int main()
{
    char texto1[50];
    char texto2[50];

    printf("digite a primeira palavra: ");
    fgets(texto1, sizeof(texto1),stdin);
    texto1[strcspn(texto1, "\n")] = '\0';

    printf("digite a segunda palavra: ");
    fgets(texto2, sizeof(texto2),stdin);
    texto2[strcspn(texto2, "\n")] = '\0';

    int resultado = meu_strcmp(texto1, texto2);

    if(resultado == 0){
        printf("Strings iguais");
    }
    else if(resultado < 0){
        printf("A primeira palavra vem antes");
    }
    else{
        printf("A primeira palavra vem depois");
    }

    return 0;
}
