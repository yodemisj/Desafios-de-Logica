#include <stdio.h>

int main(){
    int i,j,coluno;
    float M[12][12], resultado = 0;
    char operacao;
    
    scanf("%d",&coluna);
    scanf(" %c",&operacao);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f",&M[i][j]);
        }
    }

    for(i = 0; i < 12; i++){
        resultado += M[i][coluna];
    }

    if(operacao == 'M'){
        resultado = resultado/12; 
    }

    printf("%.1f\n",resultado);

    return 0;
}