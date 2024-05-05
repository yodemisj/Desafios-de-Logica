#include <stdio.h>

int main() {
    int i,j;
    char roberto[8] = "Roberto";
    char numero[5] = "5786";
    char unifei[7] = "UNIFEI";
    int c1 = 0, c2 = 0, c3 = 0;

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
                }else if(j == 1 && i >= 9 && i<= 15){
                    printf("%c",roberto[c1]);
                    c1++;
                }else if(j==3 && i >= 9 && i<= 12){
                    printf("%c",numero[c2]);
                    c2++;
                }else if(j==5 && i >= 9 && i<= 14){
                    printf("%c",unifei[c3]);
                    c3++;
                }else{
                    printf(" ");
                }
            }
        }

    }

    return 0;
}