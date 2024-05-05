#include <stdio.h>
 
int main() {
 
    int dentro = 0, fora =0;
    int n,i;
    
    scanf("%d",&n);
    
    for(i = 0; i < n; i++){
        int valor;
        scanf("%d",&valor);
        
        if(valor>=10 && valor<=20){
            dentro++;
        }else{
            fora++;
        }
        
        printf("%d in\n",dentro);
        printf("%d out\n",fora);
    }
 
    return 0;
}