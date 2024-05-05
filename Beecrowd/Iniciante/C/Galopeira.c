#include <stdio.h>
#include <string.h>

int main() {
    char palavra[10001];
    int qtd,i;
    float tamanho;

    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%s",&palavra);

        tamanho = (strlen(palavra))/100.0;

        printf("%.2f\n",tamanho);
    }

    return 0;
}