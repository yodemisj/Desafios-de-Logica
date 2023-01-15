#include <stdio.h>
 
int main() {
    int valor;
    int i;
    scanf("%d", &valor);
    
    for(i = 2;i < 10000; i++){
        if(i%valor == 2){
            printf("%d\n",i);
        }
    }
 
    return 0;
}