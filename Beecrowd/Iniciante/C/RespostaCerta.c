#include <stdio.h>

int main() {
    int qtd, x, i;

    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%d",&x);
        printf("resposta %d: %d\n",i+1,x);
    }

    return 0;
}