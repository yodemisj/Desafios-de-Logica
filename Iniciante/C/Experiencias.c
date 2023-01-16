#include <stdio.h>

int main(){
    int quantidade,i;
    int cobaias;
    char cobaia;
    int total, totalCoelhos, totalRatos, totalSapos;
    float percentualCoelhos, percentualRatos, percentualSapos;
    total = 0;
    totalCoelhos = 0;
    totalRatos = 0;
    totalSapos = 0;

    scanf("%d",&quantidade);

    for(i=0; i<quantidade; i++){
        scanf("%d ",&cobaias);
        scanf("%c",&cobaia);

        total += cobaias;

        if(cobaia == 'C'){
            totalCoelhos += cobaias;
        } else if(cobaia == 'R'){
            totalRatos += cobaias;
        } else if(cobaia == 'S'){
            totalSapos += cobaias;
        }
    }
    percentualCoelhos = (float)totalCoelhos * 100 / total;
    percentualRatos = (float)totalRatos * 100 / total;
    percentualSapos = (float)totalSapos * 100 / total;

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",totalCoelhos);
    printf("Total de ratos: %d\n",totalRatos);
    printf("Total de sapos: %d\n",totalSapos);
    printf("Percentual de coelhos: %.2f %%\n",percentualCoelhos);
    printf("Percentual de ratos: %.2f %%\n",percentualRatos);
    printf("Percentual de sapos: %.2f %%\n",percentualSapos);
    return 0;
}