#include <stdio.h>

float jorge(float salbr);

int main () {

    float salbr;

    printf("Informe seu salario\n");
    scanf("%f", &salbr);

    jorge(salbr);
}

float jorge(float salbr) {

    float sal_liq;
   
    if (salbr<=1320) {
        sal_liq = salbr-(salbr*0.075);
        printf("O salario apos o desconto e: %.2f", sal_liq);
    }
    else if (salbr>=1320.01 && salbr<=2571.29) {
        sal_liq = salbr-(salbr*0.09);
        printf("O salario apos o desconto e: %.2f", sal_liq);
    }
    else if (salbr>=2571.30 && salbr<= 3856.94) {
        sal_liq = salbr-(salbr*0.12);
        printf("O salario ap011os o desconto e: %.2f", sal_liq);
    }
    else if (salbr>=3856.95 && salbr<= 7507.49) {
        sal_liq = salbr-(salbr*0.14);
        printf("O salario apos o desconto e: %.2f", sal_liq);
    }
}