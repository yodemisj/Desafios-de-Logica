#include <stdio.h>

int main() {
    int i,j;

    for(j=0; j<7; j++){
        for(i=0; i<39; i++){
            if( j == 0 || j == 6){
                printf("-");
                if(i == 38){
                    printf("\n");
                }
            }else{
                if(i == 0 || i == 38){
                    printf("|");
                    if(i == 38){
                        printf("\n");
                    }
                }else{
                    printf(" ");
                }
            }
        }

    }

    return 0;
}