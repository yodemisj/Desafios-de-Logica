#include <stdio.h>
 
int main() {
 
    int linhas;
    int i;
    
    scanf("%d",&linhas);
    
    for(i = 1; i<=linhas; i++){
        printf("%d %d %d\n",i,i*i,i*i*i);
        printf("%d %d %d\n",i,i*i+1,i*i*i+1);
    }
    
    return 0;
}