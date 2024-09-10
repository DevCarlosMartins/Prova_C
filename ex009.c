#include <stdio.h>

float impr (float salbr);

int main () {

    float salbr;

    printf("Informe o salario bruto\n");
    scanf("%f", &salbr);

    impr(salbr);
}


float impr (float salbr){
    float v_imp;
    
    if (salbr<=2112.00) {
        printf("Voce esta isento de imposto");
    }
    else if (salbr>=2112.01 && salbr<=2826.65) {
        v_imp = (salbr*0.075) - 158.40;
        printf("O imposto a declarar e de: %.2f", v_imp);
    }
    else if (salbr>=2826.66 && salbr<=3751.05) {
        v_imp = (salbr*0.15) - 370.40;
        printf("O imposto a declarar e de: %.2f", v_imp);
    }
    else if (salbr>=3751.06 && salbr<=4664.68) {
        v_imp = (salbr*0.225) - 651.73;
        printf("O imposto a declarar e de: %.2f", v_imp);
    }
    else if (salbr>4664.68) {
        v_imp = (salbr*0.275) - 884.96;
        printf("O imposto a declarar e de: %.2f", v_imp);  
    }
}