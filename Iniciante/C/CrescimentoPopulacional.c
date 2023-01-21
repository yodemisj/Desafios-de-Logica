#include <stdio.h>

int main() {
    int qtd,i;
    int PA, PB;
    int anos = 0;
    double G1,G2;

    scanf("%d",&qtd);

    for(i = 0; i < qtd; i++){
        scanf("%d %d",&PA,&PB);
        scanf("%lf %lf",&G1,&G2);

        while(PA <= PB && anos<=100){
            PA = PA + PA*G1/100;
            PB = PB + PB*G2/100;
            anos++;
        }

        if(anos > 100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos.\n",anos);
        }

        anos = 0;
    }

    return 0;
}