#include <stdio.h>

int main() {
    int M[101][101];
    int ordem;
    int i, j;
    int inicio , fim;
    int interior;
    while(scanf("%d",&ordem) != EOF){
        inicio = 0;
        fim = ordem -1;
        for(i=0; i<ordem; i++){
            for(j=0; j<ordem; j++){
                M[i][j] = 0;
                if(j == inicio){
                    M[i][j] = 2;
                }else if(j == fim){
                    M[i][j] = 3;
                }
                interior = ordem/3;
                if(i >= interior && i < ordem-interior && j >= interior && j < ordem-interior){
                    M[i][j] = 1;
                }
            }
                fim--;
                inicio ++;
        }
        M[ordem/2][ordem/2] = 4;

        for(i=0; i<ordem; i++){
            for(j=0; j<ordem; j++){
                printf("%d",M[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }
    return 0;
}