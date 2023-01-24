#include <stdio.h>

int main() {
    int l,v,nivel;
    int i;

    while(scanf("%d",&l) != EOF){
        int maior = 0;
        for(i=0; i<l; i++){
            scanf("%d",&v);
            if(v>maior){
                maior = v;
            }
        }

        if(maior<10){
            nivel = 1;
        }else if(maior<20){
            nivel = 2;
        }else{
            nivel = 3;
        }

        printf("%d\n",nivel);
    }
    return 0;
}