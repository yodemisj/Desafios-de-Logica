#include <stdio.h>
 
int main() {
 
    int x, y,valida = 0;

    while (!valida)
    {
        scanf("%d %d",&x, &y);
        
        if(x > y){
            printf("Decrescente\n");
        } else if(x < y){
            printf("Crescente\n");
        } else{
            valida = 1;
        }
    }
    
 
    return 0;
}