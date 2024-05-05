#include <stdio.h>

int main() {

    int ordem = 1;
    int M[15][15];
    int i, j;
    int valor;
    int digitos = 0;

    while(ordem != 0){
        scanf("%d",&ordem);

        for(i=0; i<ordem; i++){
            for(j=0; j<ordem; j++){
                if(i == 0 && j == 0){
                    M[i][j] = 1;
                }else if(j == 0){
                    M[i][j] = M[i-1][j]*2;
                } else{
                    M[i][j] = M[i][j-1]*2;
                }
            }
        }

        valor = M[ordem-1][ordem-1];
        while (valor > 0)
        {
            valor = valor/10;
            digitos++;
        }
        
        for(i=0; i<ordem; i++){
            for(j=0; j<ordem-1; j++){
                printf("%*d ",digitos,M[i][j]);
            }
                printf("%*d\n",digitos,M[i][ordem-1]);
        }
        if(ordem != 0){
            printf("\n");
        }
        digitos = 0;
    }

    return 0;
}