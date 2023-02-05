#include <stdio.h>
#include <string.h>

int main() {
    int a, qtd,i;
    char acao[7];

    scanf("%d %d",&a,&qtd);

    for(i=0; i<qtd; i++){
        scanf("%s",&acao);

        if(strcmp(acao,"fechou") == 0){
            a++;
        }else if(strcmp(acao,"clicou")){
            a--;
        }

    }

    printf("%d\n",a);



    return 0;
}