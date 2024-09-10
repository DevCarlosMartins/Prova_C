#include <stdio.h>

float valid(float l1, float l2, float l3);


int main () {

    float l1, l2, l3;

    valid( l1, l2, l3);

}

float valid(float l1, float l2, float l3) {

    printf("Informe os tres lados de um triangulo\n");
    scanf("%f %f %f", &l1, &l2, &l3);
    
    if (l1+l2< l3 || l2+l3< l1 || l1+l3<l2) {
        printf("");
    }
    else {
        printf("1");
    }
}