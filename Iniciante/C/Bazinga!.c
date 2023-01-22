#include <stdio.h>
#include <string.h>

int main(){
    int qtd,i;
    char r1[8], r2[8];

    scanf("%d",&qtd);

    for(i=1; i<=qtd; i++){
        scanf("%s",&r1);
        scanf("%s",&r2);

        if(!strcmp(r1,r2) == 1){
            printf("Caso #%d: De novo!\n",i);
        }else if(!strcmp(r1,"tesoura") == 1){
            if(!strcmp(r2,"papel") == 1){
                printf("Caso #%d: Bazinga!\n",i);
            }else if(!strcmp(r2,"pedra") == 1){
                printf("Caso #%d: Raj trapaceou!\n",i);
            }else if(!strcmp(r2,"lagarto") == 1){
                printf("Caso #%d: Bazinga!\n",i);
            }else if(!strcmp(r2,"Spock") == 1){
                printf("Caso #%d: Raj trapaceou!\n",i);
            }
        }else if(!strcmp(r1,"papel") == 1){
            if(!strcmp(r2,"tesoura") == 1){
                printf("Caso #%d: Raj trapaceou!\n",i);
            }else if(!strcmp(r2,"pedra") == 1){
                printf("Caso #%d: Bazinga!\n",i);
            }else if(!strcmp(r2,"lagarto") == 1){
                printf("Caso #%d: Raj trapaceou!\n",i);
            }else if(!strcmp(r2,"Spock") == 1){
                printf("Caso #%d: Bazinga!\n",i);
            }
        }else if(!strcmp(r1,"pedra") == 1){
            if(!strcmp(r2,"tesoura") == 1){
                printf("Caso #%d: Bazinga!\n",i);
            }else if(!strcmp(r2,"papel") == 1){
                printf("Caso #%d: Raj trapaceou!\n",i);
            }else if(!strcmp(r2,"lagarto") == 1){
                printf("Caso #%d: Bazinga!\n",i);
            }else if(!strcmp(r2,"Spock") == 1){
                printf("Caso #%d: Raj trapaceou!\n",i);
            }
        }else if(!strcmp(r1,"lagarto") == 1){
            if(!strcmp(r2,"tesoura") == 1){
                printf("Caso #%d: Raj trapaceou!\n",i);
            }else if(!strcmp(r2,"papel") == 1){
                printf("Caso #%d: Bazinga!\n",i);
            }else if(!strcmp(r2,"pedra") == 1){
                printf("Caso #%d: Raj trapaceou!\n",i);
            }else if(!strcmp(r2,"Spock") == 1){
                printf("Caso #%d: Bazinga!\n",i);
            }
        }else if(!strcmp(r1,"Spock") == 1){
            if(!strcmp(r2,"tesoura") == 1){
                printf("Caso #%d: Bazinga!\n",i);
            }else if(!strcmp(r2,"papel") == 1){
                printf("Caso #%d: Raj trapaceou!\n",i);
            }else if(!strcmp(r2,"pedra") == 1){
                printf("Caso #%d: Bazinga!\n",i);
            }else if(!strcmp(r2,"lagarto") == 1){
                printf("Caso #%d: Raj trapaceou!\n",i);
            }
        }

        
    }

    return 0;
}