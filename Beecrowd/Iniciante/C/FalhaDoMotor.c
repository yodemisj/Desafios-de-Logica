#include <stdio.h>

int main() {
    int qtd,x,y,i;
    int anterior;
    y = 0;

    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%d",&x);
        if(i>0){
            if(x<anterior && y == 0){
                y = i+1;
            }
        }
        anterior = x;
    }

    printf("%d\n",y);

    return 0;
}