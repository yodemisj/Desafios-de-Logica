#include <stdio.h>
 
int main() {
 
    int inicio, fim;
    int duracao;
    scanf("%d %d",&inicio,&fim);
    
    if(inicio == fim){
        printf("O JOGO DUROU 24 HORA(S)\n");  
    } else if(inicio > fim){
        duracao = 24 - inicio + fim;
        printf("O JOGO DUROU %d HORA(S)\n",duracao);
    } else {
        duracao = fim - inicio;
        printf("O JOGO DUROU %d HORA(S)\n",duracao);
    }
    
    return 0;
}