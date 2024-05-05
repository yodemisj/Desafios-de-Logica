#include <stdio.h>

int main() {

    int x[20];
    int aux;
    int i;    

    for(i = 0; i < 20; i++){
        scanf("%d",&x[i]);
    }

    for(i = 0; i < 10; i++){
        aux = x[19 - i];
        x[19 - i] = x[i];
        x[i] = aux;
    }

    for(i = 0; i < 20; i++){
        printf("N[%d] = %.d\n",i,x[i]);
    }

    return 0;
}