#include <stdio.h>
#include <math.h>

int main() {
    int a ,b,c;
    int casa,terreno;
    int lado;
    while(1){
        scanf("%d",&a);
        if(a == 0){
            break;
        }
        scanf("%d",&b);
        scanf("%d",&c);

        casa = a*b;
        terreno = casa*100/c; 

        lado = pow(terreno,0.5);
        printf("%d\n",lado);
        
    }
    return 0;
}