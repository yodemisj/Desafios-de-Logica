#include <stdio.h>

int main() {
    char V[34] = {'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};
    int tamanho,i;

    scanf("%d",&tamanho);

    for(i=0; i<tamanho; i++){
        printf("%c",V[i]);
    }
    printf("\n");

    return 0;
}