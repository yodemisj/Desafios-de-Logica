#include <stdio.h>

int main(){
    int item,qtd;
    int tamanho,i;
    float valor=0;
    scanf("%d",&tamanho);
    for(i=0; i<tamanho; i++){
        scanf("%d",&item);
        scanf("%d",&qtd);
        if(item == 1001){
            valor += 1.5*qtd;
        }else if(item == 1002){
            valor += 2.5*qtd;
        }else if(item == 1003){
            valor += 3.5*qtd;
        }else if(item == 1004){
            valor += 4.5*qtd;
        }else if(item == 1005){
            valor += 5.5*qtd;
        }

    }

    printf("%.2f\n",valor);
    return 0;
}