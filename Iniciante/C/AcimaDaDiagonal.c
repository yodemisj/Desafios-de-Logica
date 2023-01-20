#include <stdio.h>

int main(){
    int i,j;
    float M[12][12], resultado = 0;
    int inicioC = 1;
    char operacao;
    
    scanf(" %c",&operacao);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f",&M[i][j]);
        }
    }

    for(i = 0; i < 12; i++){
        for(j = inicioC; j < 12; j++){
            resultado += M[i][j];
        }
        inicioC++;
    }

    if(operacao == 'M'){
        resultado = resultado/12; 
    }

    printf("%.1f\n",resultado);

    return 0;
}