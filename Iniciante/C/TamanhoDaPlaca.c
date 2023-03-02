#include <stdio.h>

int main() {
    int x,y,qtd,w,z,i;

    while(scanf("%d",&x) != EOF){
        scanf("%d %d",&y,&qtd);
        for(i=0; i<qtd; i++){
            scanf("%d %d",&w,&z);
            if(w>x && w>y || z>x && z>y || w>x && z>x || w>y && z>y)printf("Nao\n");
            else printf("Sim\n");
        }
    }

    return 0;
}