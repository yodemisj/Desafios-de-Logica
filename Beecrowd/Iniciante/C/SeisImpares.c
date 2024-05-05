#include <stdio.h>
 
int main() {
 
    int x,i;
    
    scanf("%d",&x);
    
    for(i=0;i<=11;i++){
        if(x%2 != 0){
            printf("%d\n",x);
        }
        x++;
    }
    
 
    return 0;
}