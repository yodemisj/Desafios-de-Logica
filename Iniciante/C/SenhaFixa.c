#include <stdio.h>
 
int main() {
 
    int senha,valida = 0;

    while (!valida)
    {
        scanf("%d",&senha); 
        valida = (senha == 2002);
        if(valida){
            printf("Acesso Permitido\n");
        } else{
            printf("Senha Invalida\n");
        }
    }
    
 
    return 0;
}