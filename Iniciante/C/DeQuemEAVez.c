#include <stdio.h>
#include <string.h>

int main() {
    int qtd,i,n1,n2;
    char Nome1[101],escolha1[6],Nome2[101],escolha2[6];

    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%s",&Nome1);
        scanf("%s",&escolha1);
        scanf("%s",&Nome2);
        scanf("%s",&escolha2);
        scanf("%d",&n1);
        scanf("%d",&n2);

        if(strcmp(escolha1,"IMPAR") == 0){
            if((n1+n2)%2 == 0){
                printf("%s\n",Nome2);
            }else{
                printf("%s\n",Nome1);
            }
        }else{
            if((n1+n2)%2 == 0){
                printf("%s\n",Nome1);
            }else{
                printf("%s\n",Nome2);
            }
        }

    }

    return 0;
}