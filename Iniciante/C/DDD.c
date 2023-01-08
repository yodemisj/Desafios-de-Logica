#include <stdio.h>
#include <string.h>

int main() {
 
    int DDD;
     scanf("%d",&DDD);
     char Destination[15];
     
     if(DDD == 61){
         strcpy(Destination,"Brasilia");
     }else if(DDD == 71){
         strcpy(Destination,"Salvador");
     }else if(DDD == 11){
         strcpy(Destination,"Sao Paulo");
     }else if(DDD == 21){
         strcpy(Destination,"Rio de Janeiro");
     }else if(DDD == 32){
         strcpy(Destination,"Juiz de Fora");
     }else if(DDD == 19){
         strcpy(Destination,"Campinas");
     }else if(DDD == 27){
         strcpy(Destination,"Vitoria");
     }else if(DDD == 31){
         strcpy(Destination,"Belo Horizonte");
     }else {
         printf("DDD nao cadastrado\n");
         return 0;
     }
    printf("%s\n",Destination);
    return 0;
}