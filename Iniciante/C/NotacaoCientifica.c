#include <stdio.h>

int main() {
    long double x;
    char sinal[3];

    scanf("%LE",&x);
    snprintf(sinal, 2, "%LE", x);
    if(sinal[0] != '-'){
        printf("+%.4LE\n",x);
    }else{
        printf("%.4LE\n",x);
    }

    return 0;
}