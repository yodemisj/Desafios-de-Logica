#include <stdio.h>
#include <string.h>

int main(){
    char numero[20];
    int tamanho, i,ma=0;

    scanf("%s",numero);

    tamanho = strlen(numero);

    for(i=0; i<tamanho-1;i++){
        if(numero[i] == '1'&& numero[i+1] == '3'){
            ma=1;
            break;
        }
    }

    if(ma == 1) printf("%s es de Mala Suerte\n",numero);
    else printf("%s NO es de Mala Suerte\n",numero);

    return 0;
    
}