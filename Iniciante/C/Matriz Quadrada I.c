#include <stdio.h>

int main() {
    int ordem = 1;
    int matriz[100][100];
    int i,j,k;
    int distanciai = 0;
    int distanciaj = 0;
    int menor;

    while(ordem){
        scanf("%d",&ordem);
        int meio = (ordem/2);
        if(ordem > 0){
            for(i = 0; i < ordem; i++){
                for(j = 0; j < ordem; j++){
                    if(i>=meio){
                        for(k = i; k < ordem; k++){
                            distanciai++;
                        }
                    }else{
                        for(k = i; k >= 0; k--){
                           distanciai++;
                        }
                    }
                    if(j>=meio){
                        for(k = j; k < ordem; k++){
                            distanciaj++;
                        }
                    }else{
                        for(k = j; k >= 0; k--){
                           distanciaj++;
                        }
                    }
                    menor = distanciai;
                    if(distanciaj < distanciai){
                        menor = distanciaj;
                    }

                    matriz[i][j] = menor;
                    distanciai = 0;
                    distanciaj = 0;    
                }    
            }

            for(i = 0; i < ordem; i++){
                for(j = 0; j < ordem-1; j++){
                    if(matriz[i][j] > 9){
                        printf(" %d ",matriz[i][j]);
                    }else{
                        printf("  %d ",matriz[i][j]);
                    }
                }
                if(matriz[i][ordem-1] > 9){
                    printf(" %d\n",matriz[i][ordem-1]);
                }else{
                    printf("  %d\n",matriz[i][ordem-1]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}