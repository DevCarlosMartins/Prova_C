#include <stdio.h>

float jorge (float n1);

int main () {

    float n1; 

    printf("Informe a nota do aluno\n");
    scanf("%f", &n1);

    jorge(n1);
}

float jorge (float n1) {

    if (n1>=9.0 && n1<=10) {
        printf("O aluno tirou: A");
    }
    else if (n1>=7.0 && n1<9.0) {
        printf("O aluno tirou: B");
    }
    else if (n1>=5.0 && n1<7.0) {
        printf("O aluno tirou: C");
    }
    else if (n1<5.0) {
        printf("O aluno tirou: D");
    }
    else if (n1<0 || n1>10) {
        printf("Informacoes invalidas.");
    }
}