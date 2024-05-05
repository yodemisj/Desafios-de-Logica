#include <stdio.h>

int main() {

    int qtd,numero,i,numeromaior;
    float nota,maior = 0;


    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%d",&numero);
        scanf("%f",&nota);

        if(nota>maior){
            maior = nota;
            numeromaior = numero;
        }

    }

    if(maior<8){
        printf("Minimum note not reached\n");
    }else{
        printf("%d\n",numeromaior);
    }
    
    return 0;
}