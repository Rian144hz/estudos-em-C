#include <stdio.h>
#include <string.h>

struct aluno{
    int matricula;
    char nome[20];
    char curso[30];
};
int main(){
    struct aluno aluno1;
    aluno1.matricula = 123432345;
    strcpy(aluno1.nome, "Matheus");
    strcpy(aluno1.curso, "Ciência da computação");

    printf("\nmatricula: %d", aluno1.matricula);
    printf("\nNome: %s", aluno1.nome);
    printf("\nCurso: %s", aluno1.curso);

    return 0;
}