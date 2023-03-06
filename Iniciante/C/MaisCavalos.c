#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char p_inicio[3], p_destino[3];
    char aux1[2],aux2[2],n1,n2;
    int distanciax,distanciay;

    scanf(" %s",p_inicio);
    scanf(" %s",p_destino);

    aux1[0] = p_inicio[1]; 
    aux2[0] = p_destino[1]; 
    n1 = atoi(aux1);
    n2 = atoi(aux2);

    aux1[0] = p_inicio[0];
    aux2[0] = p_destino[0];

    distanciax = abs(strcmp(aux1,aux2));
    distanciay = abs(n1-n2);

    if((distanciax == 2 && distanciay == 1) || (distanciax == 1 && distanciay == 2) ){
        printf("VALIDO\n");
    }else{
        printf("INVALIDO\n");
    }

    return 0;
}