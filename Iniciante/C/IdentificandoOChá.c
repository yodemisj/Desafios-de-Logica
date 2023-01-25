#include <stdio.h>

int main(){
    int tipo,escolhido;
    int certos = 0, i;

    scanf("%d",&tipo);
    for(i=0; i<5; i++){
        scanf("%d",&escolhido);

        if(escolhido == tipo){
            certos++;
        }
    }

    printf("%d\n",certos);
    return 0;
}