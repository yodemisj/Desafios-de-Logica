#include <stdio.h>

int main() {
    double golpe1, golpe2;
    int i, qtd, atk1, atk2,def1,def2,lvl1,lvl2,bonus;

    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%d",&bonus);
        scanf("%d %d %d",&atk1,&def1,&lvl1);
        scanf("%d %d %d",&atk2,&def2,&lvl2);
        golpe1 = (atk1+def1)/2;
        golpe2 = (atk2+def2)/2;

        if(lvl1%2 == 0){
            golpe1 += bonus;
        }

        if(lvl2%2 == 0){
            golpe2 += bonus;
        }

        if(golpe1 > golpe2){
            printf("Dabriel\n");
        }else if(golpe1 < golpe2){
            printf("Guarte\n");
        }else{
            printf("Empate");
        }

    }

    return 0;
}