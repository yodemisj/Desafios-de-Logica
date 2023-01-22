#include <stdio.h>

int main() {
    int ordem;
    int matriz[100][100];
    int inicio,fim,i,j;
    while(scanf("%d",&ordem) != EOF){
        if(ordem  == 1){
            printf("1\n");
        }else{
            inicio = 0;
            fim = ordem-1;
            for(i=0; i<ordem; i++){
                for(j=0; j<ordem; j++){
                    if(j == fim){
                        matriz[i][j] = 2;
                    }else if(j == inicio){
                        matriz[i][j] = 1;
                    }else{
                        matriz[i][j] = 3;
                    }
                }
                    inicio++;
                    fim--;
            }       
            for(i=0; i<ordem; i++){
                for(j=0; j<ordem; j++){
                    printf("%d",matriz[i][j]);
                }
                printf("\n");
            }
        }


    }
    return 0;
}