#include <stdio.h>
#include <string.h>

int main(){
    char nome[10];
    int n,i,qtd;

    scanf("%d",&qtd);

    for(i = 0; i<qtd; i++){
        scanf("%s",&nome);
        scanf("%d",&n);

        if(strcmp(nome,"Thor") == 0){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }

    return 0;
}