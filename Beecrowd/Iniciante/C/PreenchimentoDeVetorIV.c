#include <stdio.h>

int main() {
    int par[5],impar[5];
    int valor, qtdPar = 0, qtdImpar =0;
    int i,j;

    for(i = 0; i < 15; i++){
        scanf("%d",&valor);

        if(valor%2 == 0){
            if(qtdPar == 5){
                for(j = 0; j < 5; j++){
                    printf("par[%d] = %d\n",j,par[j]);
                }
                qtdPar = 0;
            }

            par[qtdPar] = valor;
            qtdPar++;
        }else{
            if(qtdImpar == 5){
                for(j = 0; j < 5; j++){
                    printf("impar[%d] = %d\n",j,impar[j]);
                }
                qtdImpar = 0;
            }

            impar[qtdImpar] = valor;
            qtdImpar++;
        }
    }

    for(j = 0; j < qtdImpar; j++){
        printf("impar[%d] = %d\n",j,impar[j]);
    }

    for(j = 0; j < qtdPar; j++){
        printf("par[%d] = %d\n",j,par[j]);
    }


    return 0;
}