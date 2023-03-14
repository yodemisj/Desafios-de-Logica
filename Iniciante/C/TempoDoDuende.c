#include <stdio.h>

int main(){
    int fimExpediente, tempo1, tempo2;

    scanf("%d",&fimExpediente);

    scanf("%d %d",&tempo1,&tempo2);

    if(tempo1 + tempo2 > fimExpediente){
        printf("Deixa para amanha!\n");
    }else{
        printf("Farei Hoje!\n");
    }

    return 0;
}