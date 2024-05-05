#include <stdio.h>

int main() {
    int j,repetir = 1;
    int pares = 0;
    int x;
    int soma = 0;

    while(repetir){
        scanf("%d",&x);
        if(x != 0){
            for(j = x; pares<5;j++){
                if(j%2 == 0){
                    soma += j;
                    pares++;
                }
            }
            printf("%d\n",soma);
            soma = 0;
            pares = 0;
        } else{
            repetir = 0;
        }
        
    }        

    return 0;
}