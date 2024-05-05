#include <stdio.h>

int main() {
    int a;
    long long int b,resultado;
    
    while(1){
        scanf("%d",&a);
        scanf("%lld",&b);
        if(a == 0 && b == 0)break;
        resultado = a*b;
        printf("%d\n",resultado);
    }

    return 0;
}