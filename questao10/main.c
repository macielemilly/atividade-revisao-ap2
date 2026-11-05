#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    char nome[50];
    float salario;
}Funcionario;

void reajustar_salario(Funcionario *f, float percentual){
    f->salario = f->salario + (f->salario * (percentual/100));
}
int main()
{
    Funcionario f1;

    f1.id = 1;
    f1.salario = 2000;

    reajustar_salario(&f1,10);

    printf("Novo salario: %.2f", f1.salario);

    return 0;

    //O operador seta (->) é utilizado porque o parâmetro f é um ponteiro para uma estrutura do tipo Funcionario.
    //Ele permite acessar diretamente os campos da estrutura apontada.
    //Como a função recebe o endereço da variável original,
    //qualquer alteração realizada em f->salario modifica diretamente o salário armazenado na memória da função main,
    //sem precisar retornar uma nova estrutura.
}
