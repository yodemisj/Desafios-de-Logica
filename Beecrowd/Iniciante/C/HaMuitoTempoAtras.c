#include <stdio.h>

int main(){
    int qtd, i,v,ano;
    int anoAtual = -2015;
    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%d",&ano);
        ano = ano +anoAtual;

        if(ano>0){
            ano++;
            printf("%d A.C.\n",ano);
        }else if(ano == 0){
            printf("1 A.C.\n");
        }else{
            ano*= -1;
            printf("%d D.C.\n",ano);
        }
    }


    return 0;
}