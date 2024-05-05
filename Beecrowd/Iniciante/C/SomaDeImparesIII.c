#include <stdio.h>

int main() {
    int i,j,qtd;
    int impares = 0;
    int x, y;
    int soma = 0;

    scanf("%d",&qtd);

    for(i = 0; i<qtd; i++){
        scanf("%d %d",&x,&y);
        for(j = x; impares<y;j++){
            if(j%2 != 0){
                soma += j;
                impares++;
            }
        }
        printf("%d\n",soma);
        soma = 0;
        impares = 0;
    }

    return 0;
}