#include <stdio.h>
#include <string.h>

int main(){
    int qtd,i;
    char jogador1[7],jogador2[7];

    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%s",&jogador1);
        scanf("%s",&jogador2);

        if(strcmp(jogador1,"pedra") == 0){
            if(strcmp(jogador2,"pedra") == 0){
                printf("Sem ganhador\n");
            }else if(strcmp(jogador2,"papel") == 0){
                printf("Jogador 1 venceu\n");
            }else{
                printf("Jogador 2 venceu\n");
            }
        }else if(strcmp(jogador1,"papel") == 0){
            if(strcmp(jogador2,"pedra") == 0){
                printf("Jogador 2 venceu\n");
            }else if(strcmp(jogador2,"papel") == 0){
                printf("Ambos venceram\n");
            }else{
                printf("Jogador 2 venceu\n");
            }
        }else{
            if(strcmp(jogador2,"pedra") == 0){
                printf("Jogador 1 venceu\n");
            }else if(strcmp(jogador2,"papel") == 0){
                printf("Jogador 1 venceu\n");
            }else{
                printf("Aniquilacao mutua\n");
            }
        }
    }

    return 0;
}