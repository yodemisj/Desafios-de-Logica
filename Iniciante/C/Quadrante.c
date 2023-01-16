#include <stdio.h> 

int main() {
    int x[1000],y[1000],i,j;
    int quantidade = 0;

    while (1){
        scanf("%d %d",&x[quantidade],&y[quantidade]);
        if(x[quantidade] == 0 || y[quantidade] == 0){
            break;
        }
        quantidade++;
    }

    for(i=0; i<quantidade; i++){
        if(x[i] > 0){
            if(y[i] > 0){
                printf("primeiro\n");
            }else{
                printf("quarto\n");
            }
        } else{
            if(y[i] > 0){
                printf("segundo\n");
            }else{
                printf("terceiro\n");
            }
        }
    }
    return 0;
}