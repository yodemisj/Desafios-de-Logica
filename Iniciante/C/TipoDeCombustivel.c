#include <stdio.h>

int main() {

    int tipo, repetir = 1;
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;

    while(repetir){
        scanf("%d",&tipo);

        if(tipo == 1){
            alcool++;
        } else if(tipo == 2){
            gasolina++;
        } else if(tipo == 3){
            diesel++;
        }else if(tipo == 4){
            repetir = 0;
        }
        
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcool);
    printf("Gasolina: %d\n",gasolina);
    printf("Diesel: %d\n",diesel);


    return 0;
}