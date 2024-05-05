#include <stdio.h>

int main(){
    int a, b;
    int maior;

    scanf("%d %d",&a,&b);
    maior = a;
    if(b>a){
        maior = b;
    }

    printf("%d\n",maior);

    return 0;
}