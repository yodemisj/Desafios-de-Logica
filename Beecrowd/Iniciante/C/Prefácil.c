#include <stdio.h>
#include<stdlib.h>
int main(){
    int a,b;
    int quociente = -1000, resto;

    scanf("%d %d",&a,&b);
    while (1){
        resto = a - quociente*b ;
        if(resto>=0 && resto<abs(b)){
            break;
        }
        quociente++;
    }

    printf("%d %d\n",quociente,resto);
    
    return 0;
}