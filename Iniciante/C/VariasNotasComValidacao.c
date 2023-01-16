#include <stdio.h>

int main() {
    float media, nota1, nota2;
    int repetir = 1;

        while (repetir){
            while (1){
                scanf("%f",&nota1);
                if(nota1<=10 && nota1 >= 0){
                    break;
                }
                printf("nota invalida\n");
        }
        while (1){
                scanf("%f",&nota2);
                if(nota2<=10 && nota2 >= 0){
                    break;
                }
                printf("nota invalida\n");
        }

        media = (nota1 + nota2)/2;

        printf("media = %.2f\n",media);

        while (1){

            printf("novo calculo (1-sim 2-nao)\n");
            scanf(" %d",&repetir);
            if(repetir == 1){
                break;
            }else if(repetir == 2){
                repetir = 0;
                break;
            }
        }      

    }
    

    
    
    return 0;
}