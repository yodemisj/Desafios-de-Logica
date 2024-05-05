#include <stdio.h>

int main(){
    int qtd, i;
    int valor;

    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%d",&valor);

        if(valor%2 == 0){
            printf("0\n");
        }else{
            printf("1\n");
        }
    }

    return 0;
}