#include <stdio.h>

float jorge(float pprod);

int main () {

    float pprod;
    
    printf("Informe o preço do produto\n");
    scanf("%f", &pprod);

    jorge(pprod);
}

float jorge(float pprod) {

    float desc;
   
    if (pprod<=1000) {
        desc = pprod - (pprod*0.05);
        printf("Preço produto com desconto: %.2f", desc);
    }
    else if (pprod>=1000.01 && pprod<=5000) {
        desc = pprod - (pprod*0.10);
        printf("Preço produto com desconto: %.2f", desc);
    }
    else if (pprod>5000.01) {
        desc = pprod - (pprod*0.15);
        printf("Preço produto com desconto: %.2f", desc);
    }
}