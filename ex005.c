#include <stdio.h>

int main () {

    int id;

    printf("Informe sua idade\n");
    scanf("%d", &id);

    idade(id);


}

int idade (int id) {

    if (id>=18) {
        printf("Ja pode ser preso, hein!");
    }
    else {
        printf("E ta na facul? Olooco, hein!");
    }
}