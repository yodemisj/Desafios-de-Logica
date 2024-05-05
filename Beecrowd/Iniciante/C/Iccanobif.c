#include <stdio.h>

int main() {
    int ica[41],n,i;
    ica[0] = 1;
    ica[1] = 1;

    scanf("%d",&n);

    for(i=2; i<n; i++){
        ica[i] = ica[i-1] + ica[i-2];
    }

    for(i = n-1; i>=0; i--){
        if(i==0)printf("%d\n",ica[0]);
        else printf("%d ",ica[i]);
    }

    return 0;
}