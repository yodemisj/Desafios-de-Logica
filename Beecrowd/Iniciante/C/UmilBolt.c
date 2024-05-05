#include <stdio.h>

int main(){
    int qtd,i;
    float menor,valor;

    while(scanf("%d",&qtd) != EOF){
        for(i=0; i<qtd; i++){
            scanf("%f",&valor);
            if(valor<menor || i==0)menor = valor;
        }
        printf("%.2f\n",menor);
    }

    return 0;
}