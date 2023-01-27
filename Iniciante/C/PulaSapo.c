#include <stdio.h>
#include <stdlib.h>

int main() {
    int P,N,i;
    int canos[100];
    int win = 1;

    scanf("%d %d",&P,&N);

    for(i=0; i<N; i++){
        scanf("%d",&canos[i]);
        if(i>0){
            if(abs(canos[i]-canos[i-1]) > P){
                win = 0;
            }
        }
    }

    if(win == 1){
        printf("YOU WIN\n");
    }else{
        printf("GAME OVER\n");
    }

    return 0;
}