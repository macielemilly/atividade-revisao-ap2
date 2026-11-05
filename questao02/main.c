#include <stdio.h>
#include <stdlib.h>

void decompor_tempo(int total_segundos, int *horas, int *minutos, int *segundos){
    *horas = total_segundos / 3600;
    *minutos = (total_segundos % 3600) / 60;
    *segundos = total_segundos % 60;


}
int main()
{
    int total_segundos;
    int horas, minutos, segundos;
    printf("Digite o tempo total em segundos: ");
    scanf("%d",&total_segundos);

    decompor_tempo(total_segundos, &horas, &minutos, &segundos);

    printf("Tempo formatado:\n");
    printf("%d:%d:%d",horas,minutos,segundos);

    return 0;
}
