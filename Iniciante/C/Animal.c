#include <stdio.h>
#include <string.h>
 
int main() {
 
    char p1[13],p2[9],p3[11], resultado[12];
    scanf("%s %s %s",&p1,&p2,&p3);
    
    if (strcmp(p1,"vertebrado") == 0){
        if(strcmp(p2,"ave") == 0){
            if(strcmp(p3,"carnivoro") == 0){
                strcpy(resultado, "aguia");
            }else if(strcmp(p3,"onivoro") == 0){
                strcpy(resultado, "pomba");
            }
        }else if(strcmp(p2,"mamifero") == 0){
            if(strcmp(p3, "herbivoro") == 0){
                strcpy(resultado, "vaca");
            }else if(strcmp(p3,"onivoro") == 0){
                strcpy(resultado, "homem");
            }
        }
    }else{//Invertebrado
        if(strcmp(p2, "inseto") == 0){
            if(strcmp(p3, "hematofago") == 0){
                strcpy(resultado, "pulga");
            }else if(strcmp(p3, "herbivoro") == 0){
                strcpy(resultado, "lagarta");
            }
        }else if(strcmp(p2, "anelideo") == 0){
            if(strcmp(p3, "hematofago") == 0){
                strcpy(resultado, "sanguessuga");
            }else if(strcmp(p3, "onivoro") == 0){
                strcpy(resultado, "minhoca");
            }
        }
    }
    
    printf("%s\n",resultado);
 
    return 0;
}