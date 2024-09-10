#include <stdio.h>

int verf(int n);

int main () {

    int n;

    printf("Informe um numero\n");
    scanf("%d", &n);

    verf(n);
}

int verf(int n) {

    if (n%2==0) {
        printf("Esse numero e PAR");
    }
    else {
        printf("Esse numero e IMPAR");
    }
}