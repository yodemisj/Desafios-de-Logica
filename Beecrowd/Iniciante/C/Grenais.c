#include <stdio.h>

int main() {
    int golsInter,golsGremio;
    int grenais = 0;
    int vitoriasInter = 0;
    int vitoriasGremio = 0;
    int empates = 0;
    int repetir = 1;

    while (repetir){
        while (1){
            scanf("%d",&golsInter);
            if(golsInter >= 0){
                break;
            }
        }
        while (1){
            scanf("%d",&golsGremio);
            if(golsGremio >= 0){
                break;
            }
        }

        if(golsInter > golsGremio){
            vitoriasInter++;
        }else if(golsGremio > golsInter){
            vitoriasGremio++;
        }else{
            empates++;
        }
        grenais++;
        while (1){

            printf("Novo grenal (1-sim 2-nao)\n");
            scanf(" %d",&repetir);
            if(repetir == 1){
                break;
            }else if(repetir == 2){
                repetir = 0;
                break;
            }
        }      

    }

    printf("%d grenais\n",grenais);
    printf("Inter:%d\n",vitoriasInter);
    printf("Gremio:%d\n",vitoriasGremio);
    printf("Empates:%d\n",empates);
    if(vitoriasGremio>vitoriasInter){
        printf("Gremio venceu mais\n");
    }else if(vitoriasInter>vitoriasGremio){
        printf("Inter venceu mais\n");
    } else{
        printf("Nao houve vencedor\n");
    }

    return 0;
}