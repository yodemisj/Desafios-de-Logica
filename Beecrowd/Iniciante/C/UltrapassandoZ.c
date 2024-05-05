#include <stdio.h>

int main() {

    int repetir = 1;
    int x ,y;
    int soma = 0;
    int qtd = 0;

    scanf("%d",&x);

    while(repetir){
        scanf("%d",&y);

        if(y>x){
            repetir = 0;
        }

    }
    repetir = 1;

    while (repetir){
        soma+=x;
        qtd++;
        x++;
        if(soma>y){
            repetir = 0;
        }
    }

    printf("%d\n",qtd);

}