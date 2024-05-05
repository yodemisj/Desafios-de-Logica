#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d",&a,&b,&c);
    if(a<b){ // Subiu
        if(b<c && (b-a) > (c-b)){
            printf(":(\n");
        }else if(b<c && (b-a) <= (c-a)) {
            printf(":)\n");
        }else if(b>=c ){
            printf(":(\n");
        }
    }else if(a>b){// Desceu
        if(b>c && (a-b) <= (b-c)){
            printf(":(\n");
        }else if(b>c && (a-b) > (b-c)) {
            printf(":)\n");
        }else if(b<=c){
            printf(":)\n");
        }
    }else{// Constante
        if(b<c){
            printf(":)\n");
        }else{
            printf(":(\n");
        }
    }
    return 0;
}