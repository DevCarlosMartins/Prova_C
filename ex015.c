#include <stdio.h>

float conv(float v, float vt, int m, int mc);

int main()
{
    int m, mc;
    float v, vt;
    
    printf("Informe a moeda de Origem!!\n");
    printf("1 - USD |2 - EUR |3 - BRL\n");
    scanf("%d",&m);
    printf("Informe o valor a converter: ");
    scanf("%f",&v);
    printf("Qual modeda converter ? ");
    scanf("%d",&mc);
    
    conv (v, vt, m, mc);
        
}

float conv(float v, float vt, int m, int mc){ 

    if (m == 1 && mc == 3){
        vt = v * 5.30;
        printf("O valor convertido e: %.2f", vt);
    }else if (m == 2 && mc ==  3){
        vt = v * 6.20;
        printf("O valor convertido e: %.2f", vt);
    }else if(m == 3  && mc == 1 ){
        vt = v * 0.19;
        printf("O valor convertido e: %.2f", vt);
    }else if (m == 3 && mc == 2){
        vt = v * 0.16;
        printf("O valor convertido e: %.2f", vt);
    }else{
        printf("Valores incorretos");
    }
}