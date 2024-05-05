#include <stdio.h>

int main() {
    int t,i,menor;
    int valor,indice;

    scanf("%d",&t);

    for(i = 1; i <= t; i++){
        scanf("%d",&valor);
        if(i == 1){
            menor = valor;
            indice = 1;
        }else if(valor < menor){
            menor = valor;
            indice = i;
        }
    }

    printf("%d\n",indice);
    return 0;
}