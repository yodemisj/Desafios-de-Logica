#include <stdio.h>

int main() {
    int x,qtd,i,j;
    int primo = 0;

    scanf("%d",&qtd);

    for(i = 0; i < qtd; i++){
        scanf("%d",&x);
        for(j = 1; j <= x; j++){
            if(x%j == 0){
                primo++;
                if(x == 1){
                    primo++;
                }
            }
        }

        if(primo == 2){
            printf("%d eh primo\n",x);
        }else{
            printf("%d nao eh primo\n",x);
        }
        primo = 0;
    }

    return 0;
}