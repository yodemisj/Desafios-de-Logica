/*#include <stdio.h>
 
int main() {
 
    int i;
    
    for(i = 2; i<=100 ; i+=2){
        printf("%d\n",i);
    }
    
 
    return 0;
}
*/
#include <stdio.h>
 
int main() {
 
    int pares = 0;
    int v1,v2,v3,v4,v5;
    
    scanf("%d %d %d %d %d",&v1,&v2,&v3,&v4,&v5);
    
    if(v1%2 == 0){
        pares++;
    }
    if(v2%2 == 0){
        pares++;
    }
    if(v3%2 == 0){
        pares++;
    }
    if(v4%2 == 0){
        pares++;
    }
    if(v5%2 == 0){
        pares++;
    }

    printf("%d valores pares\n",pares);

    return 0;
}