#include <stdio.h>
#include <string.h>

int main() {
    int n,i = 0;
    char romano[20];
    char *centena[] = {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    char *dezena[] = {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    char *unidade[] = {"I","II","III","IV","V","VI","VII","VIII","IX"};

    scanf("%d",&n);

    if(n == 1000){
        printf("M\n");
    }else{
        if(n>=100){
            strcpy(romano,centena[(n/100) - 1]);
            i++;
        }
        if(n%100 >= 10){
            if(i>0) strcat(romano,dezena[((n%100)/10) - 1]);
            else strcpy(romano,dezena[((n%100)/10) - 1]);
            i++;
        }
        if(n%10 > 0){
            if(i>0)strcat(romano,unidade[(n%10) - 1]);
            else strcpy(romano,unidade[(n%10) - 1]);
        }
        for(i = 0; i < strlen(romano); i++){
            printf("%C",romano[i]);
        }
        printf("\n");
    }
    

    return 0;
}