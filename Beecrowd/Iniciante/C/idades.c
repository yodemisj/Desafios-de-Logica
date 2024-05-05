#include <stdio.h>

int main() {

    int notas[10000], qtd = 0;
    float media = 0;
    int valor,i;
    int repetir = 1;

    while(repetir){
        scanf("%d",&valor);

        if(valor>=0){
            notas[qtd] = valor;
            qtd++;
        }else{
            repetir = 0;
        }
    }

    for(i = 0; i < qtd; i++){
        media += notas[i];
    }

    media = (float)media/qtd;

    printf("%.2f\n",media);

    
    return 0;
}