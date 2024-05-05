#include <stdio.h>

int main() {
    int qtd,i;
    unsigned long long int valor, fib[100000];

    scanf("%d",&qtd);

    fib[0] = 0;
    fib[1] = 1;
    for(i = 2; i < 100000; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    for(i = 0; i < qtd; i++){
        scanf("%lld",&valor);
        printf("Fib(%d) = %lld\n",valor,fib[valor]);
    }

    return 0;
}