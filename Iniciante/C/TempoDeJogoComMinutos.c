#include <stdio.h>
 
int main() {
 
    int inicio,MinInicio, fim,MinFim;
    int duracao,minutos;
    int i = 0;
    scanf("%d %d %d %d",&inicio, &MinInicio,&fim,&MinFim);
    
    if(inicio == fim){
        if(MinInicio  == MinFim){
            minutos = MinInicio - MinFim;    

        }else if(MinInicio > MinFim){
            minutos = 60 - MinInicio + MinFim;
            i--;
        }else{
            i = -24;
            minutos = MinFim - MinInicio;
        }
        duracao = 24 + i;
        
    } else if(inicio > fim){
        if(MinInicio  == MinFim){
            minutos = MinInicio - MinFim;    
        }else if(MinInicio > MinFim){
            minutos = 60 - MinInicio + MinFim;
            i--;
        }else{
            minutos = MinFim - MinInicio;
        }
        duracao = 24 - inicio + fim + i;
    } else {
        if(MinInicio  == MinFim){
            minutos = MinInicio - MinFim;
        }else if(MinInicio > MinFim){
            minutos = 60 - (MinInicio - MinFim);
            i--;
        }else{
            minutos = MinFim - MinInicio;
        }
        duracao = fim - inicio + i;
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duracao,minutos);
    return 0;
}