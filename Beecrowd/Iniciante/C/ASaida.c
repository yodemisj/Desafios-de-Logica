#include <stdio.h>

int main(){
    int qtd,i;
    char str[101];

    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf(" %[^\n]s",str);
        printf("gzuz\n",str);
    }

    return 0;
}