#include <stdio.h> 

int main() {
    int i,x[10000];
    int n;
    scanf("%d",&n);

    for(i=0 ; i < n; i++){
        if( i <= 1){
            x[i] = i;
        }else{
            x[i] = x[i-1] + x[i-2]; 
        }
    }

    for(i = 0 ; i < n-1; i++){
        printf("%d ",x[i]);
    }
    printf("%d\n",x[n-1]);
    return 0;
}