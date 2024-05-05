#include <stdio.h>
 
int main() {
 
    int quantidade, valor[1000];
    int i;

    scanf("%d",&quantidade);

    for(i = 0 ; i < quantidade; i++) {
        scanf("%d", &valor[i]);
    }

    for(i = 0 ; i < quantidade; i++) {
        if(valor[i] != 0){
            if(valor[i]%2 == 0){ // PAR
                if(valor[i] > 0){ // Positivo
                    printf("EVEN POSITIVE\n");
                } else{ // Negativo
                    printf("EVEN NEGATIVE\n");
                }
            }else{ // IMPAR
                if(valor[i] > 0){ // Positivo
                    printf("ODD POSITIVE\n");
                } else{ // Negativo
                    printf("ODD NEGATIVE\n");
                }
            }
        } else{
            printf("NULL\n");
        }
    }
    return 0;
}