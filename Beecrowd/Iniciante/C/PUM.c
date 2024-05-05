#include <stdio.h>
 
int main() {
 
    int linhas;
    int i, j;
    int valor = 0;
    
    scanf("%d",&linhas);
    
    for(i = 0; i<linhas; i++){
        for(j = 0; j < 3;j++){
            valor ++;
        }
        printf("%d %d %d PUM\n",valor-2,valor-1,valor);
        valor ++;
    }
    
    
    return 0;
}