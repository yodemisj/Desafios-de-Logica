#include <stdio.h>

int main() {
    int saida,viagem,fuso;
    int chegada;
    scanf("%d %d %d",&saida,&viagem,&fuso);
    chegada = saida+viagem+fuso;
    if(chegada >= 24){
        chegada -= 24;
    }else if(chegada<0){
        chegada = 24 + chegada;
    }

    printf("%d\n",chegada);
    
    return 0;
}