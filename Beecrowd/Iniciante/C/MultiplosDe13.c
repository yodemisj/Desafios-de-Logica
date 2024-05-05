#include <stdio.h>

int main() {

    int i, x, y;
    int soma = 0;

    scanf("%d %d",&x,&y);

    if(x>y) {
        for(i = y; i <= x; i++){
            if(i%13 != 0){
                soma += i;
            }
        }
    } else{
        for(i = x; i <= y; i++){
            if(i%13 != 0){
                soma += i;
            }
        }
    }

    printf("%d\n",soma);

    return 0;
}