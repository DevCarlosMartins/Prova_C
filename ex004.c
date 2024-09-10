#include <stdio.h>

float cont (float l1, float l2, float l3);

int main () {

    float l1, l2, l3;

    printf("Informe os lados de um triangulo\n");
    scanf("%f %f %f", &l1, &l2, &l3); 

    cont (l1, l2, l3);
}

float cont (float l1, float l2, float l3){

    if (l1+l2==l3 || l2+l3==l1 || l1+l3==l2) {
        printf("Triangulo retangulo");
    }
}