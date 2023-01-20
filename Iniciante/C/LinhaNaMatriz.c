#include <stdio.h>

int main(){
    int i,j,linha;
    float M[12][12], resultado = 0;
    char operacao;
    
    scanf("%d",&linha);
    scanf(" %c",&operacao);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f",&M[i][j]);
        }
    }

    for(i = 0; i < 12; i++){
        resultado += M[linha][i];
    }

    if(operacao == 'M'){
        resultado = resultado/12; 
    }

    printf("%.1f\n",resultado);

    return 0;
}