#include <stdio.h>

int main() {
    int ordem = 1;
    int matriz[100][100];
    int i,j,k;

    while(ordem){
        scanf("%d",&ordem);
        if(ordem > 0){
            j = 0;
            for(i = 0; i < ordem; i++){
                  matriz[i][j] = 1;
                  j++;
                  for(k = j; k < ordem; k++){
                    matriz[i][k] = matriz[i][k-1]+1;;
                  }
                  for(k = j-2; k >=0; k--){
                    matriz[i][k] = matriz[i][k+1] +1;
                  }
            }

            for(i = 0; i < ordem; i++){
                for(j = 0; j < ordem-1; j++){
                    printf("%3d ",matriz[i][j]);
                }
                printf("%3d\n",matriz[i][ordem-1]);  
            }
            printf("\n");
        }
    }

    return 0;
}