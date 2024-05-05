#include <stdio.h>

int main(){
    float antigo, novo;
    float percentual,aumento;

    scanf("%f %f",&antigo,&novo);
    
    aumento = novo - antigo;
    percentual = aumento*100/antigo;

    printf("%.2f%%\n",percentual);

    return 0;
}