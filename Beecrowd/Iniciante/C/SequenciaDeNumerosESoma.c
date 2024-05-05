#include <stdio.h>

int main (){
    int m[1000],n[1000],i,j;
    int quantidade = 0;
    int soma;
    while (1){
        scanf("%d %d",&m[quantidade],&n[quantidade]);
        if(m[quantidade] <= 0 || n[quantidade] <= 0){
            break;
        }
        quantidade++;
    }

    for(i=0; i<quantidade; i++){
        soma = 0;
        if(m[i] > n[i]){
            for(j = n[i]; j <= m[i]; j++){
                printf("%d ",j);
                soma += j;
            }
            printf("Sum=%d\n",soma);
        } else{
            for(j = m[i]; j <= n[i]; j++){
                printf("%d ",j);
                soma += j;
            }
            printf("Sum=%d\n",soma);
        }
    }

    return 0;
}