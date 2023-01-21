#include <stdio.h>

int main(){
    int i,j;
    float M[12][12], resultado = 0;
    int fimC = 1;
    char operacao;
    
    scanf(" %c",&operacao);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f",&M[i][j]);
        }
    }

    for(i = 1; i < 6; i++){
        for(j = 0; j < fimC; j++){
            resultado += M[i][j];
        }
        fimC++;
    }
    fimC--;
    for(i = 6; i < 11; i++){
        for(j = 0; j < fimC; j++){
            resultado += M[i][j];
        }
        fimC--;
    }

    if(operacao == 'M'){
        resultado = resultado/30; 
    }

    printf("%.1f\n",resultado);

    return 0;
}