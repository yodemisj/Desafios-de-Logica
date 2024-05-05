#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    unsigned long long int n;
    char inverso[15];
    char *endptr;
    char aux;
    int tamanho;
    int i,j = 0;

    scanf("%llu",&n);

    sprintf(inverso,"%llu",n);

    tamanho = strlen(inverso);


    for (int i = tamanho-1; i >= tamanho/2; i--){
        aux = inverso[j];
        inverso[j] = inverso[i];
        inverso[i] = aux;
        printf("%s\n",inverso);
        j++;
    }

    n = strtoll(inverso,&endptr,10);
    
    printf("%0*llu\n",tamanho,n);

    return 0;
}