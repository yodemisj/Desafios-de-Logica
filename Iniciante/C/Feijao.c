#include <stdio.h>

int main (){
    int i,valor;

    for (i=0; i<4; i++){
        scanf("%d",&valor);
        if(valor == 1)printf("%d\n",i+1);
    }
    
    return 0;
}