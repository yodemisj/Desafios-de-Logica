#include <stdio.h>

int main() {
    int quantidade;
    int x[10000], y[10000];
    int i;
    float resultado;

    scanf("%d",&quantidade);

    for(i = 0; i<quantidade; i++){
        scanf("%d %d",&x[i],&y[i]);
    }

    for(i = 0; i<quantidade; i++){
        if(y[i] != 0){
            resultado = (float)x[i]/y[i];
            printf("%.1f\n",resultado);
        }else{
            printf("divisao impossivel\n");
        }
    }

    return 0;
}