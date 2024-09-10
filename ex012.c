#include <stdio.h>

float jorge(float imo);

int main () {

    float imo;
    
    printf("Informe o valor venal do imovel\n");
    scanf("%f", &imo);

    jorge(imo);
}

float jorge(float imo) {

    float iptu;
   
    if (imo<=100000) {
        iptu = (imo*0.01);
        printf("valor do iptu: %.2f", iptu);
    }
    else if (imo>=100000.01 && imo<=300000) {
        iptu = (imo*0.015);
        printf("valor do iptu: %.2f", iptu);
    }
    else if (imo>=300000.01 && imo<=500000) {
        iptu = (imo*0.02);
        printf("Preço produto com desconto: %.2f", iptu);
    }
    else if (imo>500000) {
        iptu = (imo*0.025);
        printf("Preço produto com desconto: %.2f", iptu);
    }
}