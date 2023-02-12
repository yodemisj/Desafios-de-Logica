#include <stdio.h>

int main() {
    int i,j;
    char numero[7] = "x = 35";
    int c1 = 0;

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
                }else if((j == 1 && i > 0 && i<= 6) || (j == 3 && i > 15 && i<= 21) || (j == 5 && i > 31 && i<= 37)){
                    if(c1 == 6){
                        c1 = 0;
                    }
                    printf("%c",numero[c1]);
                    c1++;
                }else{
                    printf(" ");
                }
            }
        }

    }

    return 0;
}