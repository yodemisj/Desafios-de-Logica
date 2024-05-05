#include <stdio.h>

int main(){
    int qtd,i;
    int r1, r2;

    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%d",&r1);
        scanf("%d",&r2);

        printf("%d\n",r1+r2);
    }

    return 0;
}