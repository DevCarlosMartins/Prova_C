#include <stdio.h>

float nota (float nt);

int main () {

    float nt;

    printf("Informe a nota do aluno (de 0 a 10)\n");
    scanf("%f", &nt);

    nota (nt); 
}

float nota (float nt) {

    if (nt>=7) {
        printf("Aluno APROVADO");
    }
    else {
        printf("Aluno REPROVADO");
    }
}