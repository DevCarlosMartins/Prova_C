#include <stdio.h>

float impost (float sal);

int main () {

    float sal;

    printf("Informe o salario\n");
    scanf("%f", &sal);
    
    impost(sal);
}

float impost (float sal) {

    float t_imp;

    if (sal>=5000) {
        t_imp = (sal*0.20);
    }
    else if (sal<5000){
        t_imp = (sal*0.10); 
    }

    printf("O valor do imposto a ser pago e %.2f", t_imp);
}