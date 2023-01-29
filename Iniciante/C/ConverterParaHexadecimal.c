#include <stdio.h>

int main() {
    int v;
    int resto,quociente;
    char hexadecimal[100],aux[2]; 
    int i=0,j;
    scanf("%d",&v);
    while(v/16 > 0){
        resto = v%16;
        quociente = v/16;
        if(resto>9){
            if(resto == 10){
                hexadecimal[i] = 'A';
            }else if(resto == 11){
                hexadecimal[i] = 'B';
            }else if(resto == 12){
                hexadecimal[i] = 'C';
            }else if(resto == 13){
                hexadecimal[i] = 'D';
            }else if(resto == 14){
                hexadecimal[i] = 'E';
            }else{
                hexadecimal[i] = 'F';
            }
        }else{
            sprintf(aux,"%d",resto);
            hexadecimal[i] = aux[0];
        }
        v = quociente;
        i++;
    }

    if(v>9){
            if(v == 10){
                hexadecimal[i] = 'A';
            }else if(v == 11){
                hexadecimal[i] = 'B';
            }else if(v == 12){
                hexadecimal[i] = 'C';
            }else if(v == 13){
                hexadecimal[i] = 'D';
            }else if(v == 14){
                hexadecimal[i] = 'E';
            }else{
                hexadecimal[i] = 'F';
            }
        }else{
            sprintf(aux,"%d",v);
            hexadecimal[i] = aux[0];

        }

        for(j=i; j>=0;j--){
            printf("%c",hexadecimal[j]);
        }
        printf("\n");

    return 0;
}