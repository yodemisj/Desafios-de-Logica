#include <stdio.h>
 
int main() {
 
    int pares = 0, impares = 0, positivos = 0, negativos = 0;
    int v1,v2,v3,v4,v5;
    
    scanf("%d %d %d %d %d",&v1,&v2,&v3,&v4,&v5);
    
    if(v1%2 == 0){
        pares++;
    }else{
        impares++;

    }
    if(v1 > 0){
        positivos++;
    }else if(v1 < 0){
        negativos++;
    }
    
    if(v2%2 == 0){
        pares++;
    }else{
        impares++;

    }
    if(v3 > 0){
        positivos++;
    }else if(v3 < 0){
        negativos++;
    }
    
    if(v3%2 == 0){
        pares++;
    }else{
        impares++;

    }
    if(v3 > 0){
        positivos++;
    }else if(v3< 0){
        negativos++;
    }

    if(v4%2 == 0){
        pares++;
    }else{
        impares++;

    }
    if(v4 > 0){
        positivos++;
    }else if(v4 < 0){
        negativos++;
    }

    if(v5%2 == 0){
        pares++;
    }else{
        impares++;

    }
    if(v5 > 0){
        positivos++;
    }else if(v5< 0){
        negativos++;
    }

    printf("%d valor(es) par(es)\n",pares);
    printf("%d valor(es) impar(es)\n",impares);
    printf("%d valor(es) positivo(s)\n",positivos);
    printf("%d valor(es) negativo(s)\n",negativos);
    return 0;
}