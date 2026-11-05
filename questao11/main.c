#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[50];
    float nota;
}Aluno;

Aluno buscar_melhor_aluno(Aluno turma[], int n){
    Aluno melhor = turma[0];
    for(int i = 0; i < n; i++){
        if(turma[i].nota > melhor.nota){
            melhor = turma[i];
        }
    }
    return melhor;

}
int main()
{
    Aluno turma[3];

    turma[0].matricula = 1;
    strcpy(turma[0].nome, "ana");
    turma[0].nota = 7.5;

    turma[1].matricula = 2;
    strcpy(turma[0].nome, "bruno");
    turma[1].nota = 9.0;

    turma[2].matricula = 3;
    strcpy(turma[2].nome, "carla");
    turma[2].nota = 10.0;

    Aluno destaque = buscar_melhor_aluno(turma, 3);

    printf("Melhor aluno: %s\n",destaque.nome);
    printf("Matricula: %d\n", destaque.matricula);
    printf("Nota: %.2f\n", destaque.nota);


    return 0;
}
