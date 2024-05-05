#include <stdio.h>

int main() {
    int t,i = 0,j;
    int n[1000];

    scanf("%d",&t);

    while (i<1000){
        for(j = 0; j < t; j++){
            if(i<1000){
                n[i] = j;
                i++;
            } else{
                break;
            }
            
        }
    }
    

    for(i = 0; i< 1000; i++){
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}