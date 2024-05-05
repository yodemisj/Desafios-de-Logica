#include <stdio.h>

int main() {
    int d,e;

    scanf("%d%d",&e,&d);

    if(e>d || d>=24){
        printf("Eu odeio a professora!\n");
    }else if(d-e >= 3){
        printf("Muito bem! Apresenta antes do Natal!\n");
    }else if(d-e <= 2){
        printf("Parece o trabalho do meu filho!\n");
        if((d+2) < 25){
            printf("TCC Apresentado!\n");
        }else {
            printf("Fail! Entao eh nataaaaal!\n");
        }
    }

    return 0;
}