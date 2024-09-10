#include <stdio.h>

int jorgecalc (int op, float n1, float n2);
int jorgerep (int op, float n1, float n2);

int main () {

    float n1, n2;
    int op;

    printf("Informe o primeiro numero: \n");
    scanf("%f", &n1);
    printf("Informe o segundo numero: \n");
    scanf("%f", &n2);

    printf("\n");

    jorgerep(op, n1, n2);
}

int jorgerep (int op, float n1, float n2) {

    printf("Informe o tipo de operacao:\n");
    printf("1- adicao (+)\n"); 
    printf("2- subtracao (-)\n");
    printf("3- multiplicacao (*)\n");
    printf("4- divisao (/)\n");
    scanf("%d", &op);
    
    jorgecalc(op, n1, n2);
}

int jorgecalc (int op, float n1, float n2) {

    float res;
    
    switch (op)
    {
    case 1:
        if (n1>n2) {
           res = n1+n2; 
        }
        else {
            res = n2+n1;
        }
        printf("O resultado e: %.2f", res);
       break;
    
    case 2:
        if (n1>n2) {
           res = n1-n2; 
        }
        else {
            res = n2-n1;
        }
        printf("O resultado e: %.2f", res);
        break;

    case 3:
        if (n1>n2) {
           res = n1*n2; 
        }
        else {
            res = n2*n1;
        }
        printf("O resultado e: %.2f", res);
        break;
    
    case 4:
        if (n1>n2) {
           res = n1/n2; 
        }
        else {
            res = n2/n1;
        }
        printf("O resultado e: %.2f", res);
        break;
    }
    
    if (op != 1 && op != 2 && op != 3 && op != 4) {
        printf("Operador aritmetico invalido. Informe um operador valido.\n");
        jorgerep(op, n1, n2);
    }
}