#include <stdio.h>

int main() {
    int qtd;
    int i;
    char curso[100];

    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%s",&curso);
    }

    printf("Ciencia da Computacao\n");

    return 0;
}