#include <stdio.h>

int main() {
    int achou = 0;
    int n,m,i,j;
    int matriz[1000][1000];

    scanf("%d %d",&n,&m);

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    for(i=1; i<n-1; i++){
        for(j=1; j<m-1; j++){
            if(matriz[i][j] == 42 && matriz[i][j-1] == 7 && matriz[i][j+1] == 7 &&
            matriz[i-1][j] == 7 && matriz[i-1][j-1] == 7 && matriz[i-1][j+1] == 7 &&
            matriz[i+1][j] == 7 && matriz[i+1][j-1] == 7 && matriz[i+1][j+1] == 7){
                    printf("%d %d\n",i+1,j+1);
                    achou = 1;
                    break;
                }
            }
            if(achou)break;
        }
    if(achou == 0){
        printf("0 0\n");
    }


    return 0;
}