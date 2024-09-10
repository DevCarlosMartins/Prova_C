#include <stdio.h>

void comp (int n);

int main()
{
    int n;
    char m;
    printf("Informe o periodo! \n");
    printf("1- Manhã | 2- Tarde | 3- Noite ");
    scanf("%d",&n);
    
   comp (n);
}

void comp (int n){
    
    switch (n){
        case 1:
            printf("Bom dia");
            break;
            
        case 2:
            printf("Boa Tarde");
            break;

        case 3: 
            printf("Boa Noite");
            break;

        default:
            printf("Periodo Invalido");
    }
    
}