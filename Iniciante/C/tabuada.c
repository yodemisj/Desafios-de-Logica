#include <stdio.h>
 
int main() {
 
    int i, valor,resultado;
    
    scanf("%d",&valor);
    
    for(i = 1; i <= 10; i++){
        resultado = i * valor;
        printf("%d x %d = %d\n",i,valor,resultado);
    }
 
    return 0;
}