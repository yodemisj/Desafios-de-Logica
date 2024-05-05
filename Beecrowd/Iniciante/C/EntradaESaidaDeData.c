#include <stdio.h>

int main (){
    int dd,mm,aa;
    char lixo;

    scanf("%d",&dd);
    scanf("%c",&lixo);
    scanf("%d",&mm);
    scanf("%c",&lixo);
    scanf("%d",&aa);
    scanf("%c",&lixo);

    printf("%02d/%02d/%02d\n",mm,dd,aa);
    printf("%02d/%02d/%02d\n",aa,mm,dd);
    printf("%02d-%02d-%02d\n",dd,mm,aa);

    return 0;
}