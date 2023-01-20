#include <stdio.h>

int main(){
    int i,j;
    double M[12][12], resultado = 0;
    int iniC = 1;
    int fimC = 11;
    char operacao;
    
    scanf(" %c",&operacao);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf",&M[i][j]);
        }
    }

    for(i = 0; i < 5; i++){
        for(j = iniC; j < fimC; j++){
            resultado += M[i][j];
        }
        fimC--;
        iniC++;
    }

    if(operacao == 'M'){
        resultado = resultado/30; 
    }

    printf("%.1lf\n",resultado);

    return 0;
}