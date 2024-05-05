#include <stdio.h>

int main() {

    int x[1000];
    int tamanho,posicao,menor;
    int i;    

    scanf("%d",&tamanho);

    for(i = 0; i < tamanho; i++){
        scanf("%d",&x[i]);
    }

    menor = x[0];
    posicao = 0;

    for(i = 1; i < tamanho; i++){
        if(x[i] < menor){
            menor = x[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",posicao);

    return 0;
}