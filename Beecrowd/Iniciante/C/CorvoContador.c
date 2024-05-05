#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char v[8];
    int i=0,soma = 0;

    while(i<3){
        
        fgets(v,sizeof(v),stdin);
        
        if(strcmp(v,"caw caw") == 0){
            i++;
            printf("%d\n",soma);
            soma = 0;
        }else{
            if(v[2] == '*'){
                soma += pow(2,0);
            }
            if(v[1] == '*'){
                soma += pow(2,1);
            }
            if(v[0] == '*'){
                soma += pow(2,2);
            }
        }
        strcpy(v,"");
    }

    return 0;
}