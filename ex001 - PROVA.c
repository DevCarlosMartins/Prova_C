#include <stdio.h>

int funcaocomp (int n);

int main () {

    int n;

    printf("Informe um numero de 1 a 10\n");
    scanf("%d", &n);

    (funcaocomp(n));  
}

int funcaocomp (int n) {

    if (n<1 || n>10) {
        printf("Numero invalido.\n");
        return;
    }
    
    if (n==2 || n==3 || n==5 || n==7) {
       printf("1"); 
    }
    else {
        return funcaoperg(n);
    }
}

int funcaoperg (int n) {

    printf("Informe um numero de 1 a 10\n");
    scanf("%d", &n);

return funcaocomp(n);
}