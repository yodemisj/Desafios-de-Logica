#include <stdio.h>

int main() {
    int quantidade,i,j;
    int x[1000],y[1000];
    int impares;

    scanf("%d",&quantidade);

    for(i = 0; i < quantidade; i++) {
        scanf("%d %d",&x[i],&y[i]);
    }

    for(i = 0; i < quantidade; i++) {
        impares = 0;
        if(x[i] > y[i]){
            for(j = y[i]+1; j < x[i]; j++){
                if(j%2 != 0){
                    impares += j;
                }
            }
            printf("%d\n",impares);
        } else{
            for(j = x[i]+1; j < y[i]; j++){
                if(j%2 != 0){
                    impares += j;
                }
            }
            printf("%d\n",impares);
        }
    }

    return 0;
}