#include <stdio.h>

int teste(int ano); 

int main () {
    int ano;

    printf("Informe um ano\n");
    scanf("%d", &ano);

    teste(ano);

}

int teste(int ano) {

    if (ano%4==0 || ano%400==0) {
        printf("1\n");
    }
}