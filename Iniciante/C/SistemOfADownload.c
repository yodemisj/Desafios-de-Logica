#include <stdio.h>

int main(){
    char * musica[] = {"PROXYCITY","P.Y.N.G.","DNSUEY!","SERVERS","HOST!","CRIPTONIZE","OFFLINE DAY","SALT","ANSWER!","RAR?","WIFI ANTENNAS"};
    int qtd, indice, a, b;

    scanf("%d",&qtd);

    for(int i = 0; i < qtd; i++){
        scanf("%d %d",&a,&b);
        indice = a + b;
        printf("%s\n",musica[indice]);
    }

    return 0;
}