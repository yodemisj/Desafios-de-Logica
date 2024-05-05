#include <stdio.h>
 
int main() {
 
    int i, lido,maior,posicao;
    
    for(i = 1; i <= 100; i++){
        scanf("%d",&lido);
        if(i == 1){
            maior = lido;
            posicao = 1;
        } else{
            if(lido > maior){
                maior = lido;
                posicao = i;
            }
        }
    }
    
    printf("%d\n",maior);
    printf("%d\n",posicao);
 
    return 0;
}