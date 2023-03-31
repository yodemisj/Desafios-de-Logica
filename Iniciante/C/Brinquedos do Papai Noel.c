#include <stdio.h>
 
int main() {
 
    char nome[50], sexo;
    int qtd,i,carrinhos = 0, bonecas = 0;
    
    scanf("%d",&qtd);
    
    for(i=0; i<qtd; i++){
        scanf(" %s",nome);
        scanf(" %c",&sexo);
        if(sexo == 'F') bonecas++;
        else if(sexo == 'M') carrinhos++;
    }
    
    printf("%d carrinhos\n",carrinhos);
    printf("%d bonecas\n",bonecas);
    
    return 0;
}
